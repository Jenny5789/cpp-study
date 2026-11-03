/* 교재 페이지 126쪽 연습문제 (4~5)*/
/* 다음 표현식의 결과를 예측하세요 */

#include <iostream> // input output stream
#include <iomanip>  // 소수점 조절을 위해 추가
using namespace std;
main()
{
    // 변수 선언
    float result_a;
    float result_b;
    float result_c;
    float result_d;
    float result_e;

    float result_C;

    // 계산된 값을 변수 result 에 저장
    result_a = 3 + 7 * 2;
    result_b = 4 * 2 + 7;
    result_c = 7 / 4 + 3 * 4;
    result_d = 4 / 3 * 6 / 2 * 8 % 3;
    result_e = 24 % 5 + 16 % 5 * 4 / 2;

    result_C = 7.0 / 4.0 + 3.0 * 4.0;
    // result_D = 4.0 / 3.0 * 6.0 / 2.0 * 8.0 % 3.0;

    // 변수 result에 저장된 값 출력
    cout << "result에 저장된 a값: " << result_a << endl;
    cout << "result에 저장된 b값: " << result_b << endl;
    cout << "result에 저장된 c값: " << result_c << endl;
    cout << "result에 저장된 d값: " << result_d << endl;
    cout << "result에 저장된 e값: " << result_e << endl;

    cout << "result에 저장된 C값: " << result_C << endl;
    // cout << "result에 저장된 D값: " << result_D << endl;
    return 0;
    
}


/*🧐 
* 괄호 사용 및 별다른 표시를 안 했기 때문에 계산기에 하나씩 입력하는 것처럼 순서대로 계산될 거라 예상*/

/* 📜 연산자 우선순위 암기 공식
* 증감--> 산술--> 시프트--> 관계--> 비트--> 논리--> 삼항-->대입!
* 대신 산술: 곱셈계열 (* / %) 후 덧셈계열(+ -)
*/
/*💻
- result_c = 7 / 4 + 3 * 4;       result에 저장된 c값: 13
    float c 로 선언하였더라도, 정수로 입력하였기 때문에 계산 결과도 정수로 출력💡된다

- result_C = 7.0 / 4.0 + 3.0 * 4.0;      result에 저장된 C값: 13.75
    소수점 아래를 적어야 소수점💡으로 결과가 나온다

- result_d = 4 / 3 * 6 / 2 * 8 % 3;   result에 저장된 d값: 0
    '%' 는 정수형(int, long, char)만 사용 가능하다. 실수형(float, double)에서 사용하면 에러 발생💡
    
*/