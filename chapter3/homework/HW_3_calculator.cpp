#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <bitset>
using namespace std;

// --- [연산 + overflow 체크 (연산 전에 검사)] ---
bool addOverflow(double a, double b, double& r) {
    if (b > 0 && a > INT_MAX - b) return true;
    if (b < 0 && a < INT_MIN - b) return true;
    r = a + b;
    return false;
}

bool subOverflow(double a, double b, double& r) {
    if (b < 0 && a > INT_MAX + b) return true;
    if (b > 0 && a < INT_MIN + b) return true;
    r = a - b;
    return false;
}

bool mulOverflow(double a, double b, double& r) {
    if (a != 0 && (b > INT_MAX / a || b < INT_MIN / a))
        return true;
    r = a * b;
    return false;
}

bool divError(double a, double b, double& r) {
    if (b == 0) return true;
    if (a == INT_MIN && b == -1) return true;
    r = a / b;
    return false;
}

int main() {
    string expr;
    cout << "수식 입력 ('예: 256*45+30-3'): ";
    cin >> expr;

    vector<double> nums;
    vector<char> ops;

    // --- [1단계: 파싱 (음수 포함)] ---
    string temp = "";
    for (int i = 0; i < expr.size(); i++) {
        if (isdigit(expr[i]) || (expr[i] == '-' && (i == 0 || !isdigit(expr[i - 1])))) {
            temp += expr[i];
        } else {
            if (!temp.empty()) {
                nums.push_back(stod(temp));
                temp = "";
            }
            ops.push_back(expr[i]);
        }
    }
    if (!temp.empty()) nums.push_back(stod(temp));

    // --- [2단계: *, / 먼저 처리] ---
    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == '*' || ops[i] == '/') {
            double tempRes;
            bool error;

            if (ops[i] == '*')
                error = mulOverflow(nums[i], nums[i + 1], tempRes);
            else
                error = divError(nums[i], nums[i + 1], tempRes);

            if (error) {
                if (ops[i] == '/' && nums[i + 1] == 0)
                    cout << "에러: 0으로 나눌 수 없습니다.\n";
                else
                    cout << "범위 초과(Overflow/Underflow)!\n";
                return 0;
            }

            nums[i] = tempRes;
            nums.erase(nums.begin() + i + 1);
            ops.erase(ops.begin() + i);
            i--;
        }
    }

    // --- [3단계: +, - 처리] ---
    double finalRes = nums[0];

    for (int i = 0; i < ops.size(); i++) {
        double tempRes;
        bool error;

        if (ops[i] == '+')
            error = addOverflow(finalRes, nums[i + 1], tempRes);
        else
            error = subOverflow(finalRes, nums[i + 1], tempRes);

        if (error) {
            cout << "범위 초과(Overflow/Underflow)!\n";
            return 0;
        }

        finalRes = tempRes;
    }

    // --- [4단계: 출력] ---
    int result = (int)finalRes;

    cout << "------------------\n";
    cout << "10진수: " << result;
    if (finalRes != result) cout << " (소수점 절삭됨)";
    cout << endl;

    cout << "2진수:  " << bitset<32>(result) << endl;

    cout << "16진수: 0x" << hex << result << dec << endl;

    return 0;
}