/* 리터럴 값을 단독으로 사용하는 프로그램*/

#include <iostream>
using namespace std;

int main()
{
    // 변수 선언
    int x;
    unsigned long int y;

    // 할당
    x = 1456;
    y = -14567;

    // 출력
    cout << x << endl;             // x 출력
    cout << y << endl;             // unsigned long int 부호없는 정수 나타내는 변수
    cout << 1234 << endl;          // 1234 출력
    cout << 143267L << endl;       // 143267 출력   접미사 L = long
 
    return 0;
}