#include <iostream>
using namespace std;

int main()
{
    // 선언
    int hour;
    int minute;
    int second;
    int num1;
    int num2;
    int num3;
    int sum;

    // 입력받기
    cout << "시간 입력: ";
    cin >> hour;
    cout << "분 입력: ";
    cin >> minute;
    cout << "초 입력: ";
    cin >> second;

    // 계산과 결과 저장
    num1 = hour * 3600;
    num2 = minute * 60;
    num3 = second;
    sum = num1 + num2 + num3;

    //출력
    cout << "초 단위로 환산하면: " << sum;
    return 0;
}