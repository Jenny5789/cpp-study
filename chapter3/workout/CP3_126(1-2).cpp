/* 교재 페이지 126쪽 연습문제 (1~2)*/
/* 정수 표현식에서 오류가 발생하는 경우를 찾으세요 */
#include <iostream>
using namespace std;

main()
{
    // 변수 선언
    int a = 0723;
    // int b = 0491;
    int c = -0241;
    int d = -0412;
    
    //문구 출력 & 입력
    cout << "a= " << a << endl;
    //cout << "b= " << b << endl;
    cout << "c= " << c << endl;
    cout << "d= " << d << endl;

/*🧐
- a~d 모두 '0,-0'으로 시작하여 오류가 발생할거라 예상*/

    //변수 선언
    int e = -0x1A12;
    // int f = -0xH21B;
    int g = 0xA2EF;
    int h = 0x4;
    
    //문구 출력 & 결과 출력
    cout << "e= " << e << endl;
    // cout << "f= " << f << endl;
    cout << "g= " << g << endl;
    cout << "h= " << h << endl;

    return 0;
}

/*🧐 
* a~b '-0x'으로 시작하여 오류가 발생할거라 예상
* 16진수는 0~9, A~F로 표시되어 H가 적혀있어 오류 */


/* 📜 noshowbase, showbase
 10진수는 아무 것도 붙지 않고,
 8진수는 0
 16진수는 0x
 접두사가 붙어 각각의 진법을 나타냄.
 
*  -0,-0x의 '-' 부호는 음수를 나타냄

* 8진수의 표현 범위: 0 ~ 7
int b = 0491;   '9'는 사용 불가 ❌

* 16진수의 표현 범위: 0 ~ 15(0 ~ 9, A ~ F)
int f = -0xH21B;  'H'는 사용 불가 ❌



💻 cout 결과 숫자 그대로 나올 거라 예상
---> cout는 별도 설정 없을 시 '10진수 기반💡'으로 나온다.
*/