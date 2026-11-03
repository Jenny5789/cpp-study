/* 교재 페이지 126쪽 연습문제 (9-10)*/
/*  다음 표현식의 결과를 예측하세요 */

#include <iostream>
#include <iomanip>

using namespace std;
main(){

    cout << "2 + 4 = " << 2 + 4 << endl;
    cout << "3 % 5 = " << 3 % 5 << endl;
    cout << "3.2 * 2 = " << 3.2 * 2 << endl;
    cout << "5 + 3.2 = " << 5 + 3.2 << endl;
    cout << "'A' - 2 = " << 'A' - 2 << endl;
    cout << "'B' + 3.2 = " << 'B' + 3.2 << endl;
    cout << "4.5 + 'D' = " << 4.5 + 'D' << endl;
    cout << "'C' * 2 = " << 'C' * 2 << endl;

}

/*🧐 

(정수) 연산 (실수) = 실수
'A' = 65, 'B' = 66, 'C'= 67 'D' = 68
*/

/*  📜 암묵적 자료형 변환의 자료형 계층
(낮은단계)int -> unsigned int-> long-> unsigned long-> double -> long double(높은 단계)
낮은 단계는 높은 단계를 만나면 (자동 승격💡) 암묵적 자료형 변환이 일어난다.

* 명시적 자료형 변환(캐스팅): 피연산자의 자료형을 원하는 형태로 강제로 변환하는 것 
*/