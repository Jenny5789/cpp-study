/* 교재 페이지 126쪽 연습문제 (6-8)*/
/*  x = 3, y = 5, z = 6이라고 할 때,다음 각 표현식의 결과를 예측하세요 */

#include <iostream>
#include <iomanip>

using namespace std;
main()
{
    // 변수 선언
    int x = 3;
    int y = 5;
    int z = 6;

    int result_a;
    int result_b;
    int result_c;
    int result_d;
    int result_e;
    int result_f;

    // 계산된 값을 변수 result 에 저장
    result_a = x - 3 + y * 2 - z / 2;
    result_b = (x + 2) % (y * y);
    result_c = (x * 2) % (y * y);
    result_d = y - 2 - x * y;
    // z /= x + y + 4  result_e 에 저장위해 아래 풀어 적음
    result_e = z / x + y + 4;
    // z %= y * 2 + 3; result_f 에 저장위해 아래 풀어 적음
    result_f = z % y * 2 + 3;

    // 변수 result에 저장된 값 출력
    cout << "x - 3 + y * 2 - z / 2 =  " << result_a << endl;
    cout << "(x + 2) % (y * y) =  " << result_b << endl;
    cout << "(x * 2) % (y * y) = " << result_c << endl;
    cout << "y - 2 - x * y = " << result_d << endl;
    cout << "z /= x + y + 4 =  " << result_e << endl;
    cout << "z %= y * 2 + 3 = " << result_f << endl;


    return 0;
}

/*🧐 
증산시관비논삼대 순으로 계산


/*💻
연산 예시
A / B(몫), A % B(나머지)   
10 / 5 = 2     10 % 5 = 0
10 / 4 = 2     10 % 4 = 2
4 / 10 = 0     4 % 10 = 4
*/