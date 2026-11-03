/* 교재 208p 연습문제 1 ~ 3번 */
/* 다음 코드에서 while 반복문 내부의 코드가 몇 번 실행될지 예측하세요. 
또한 코드가 모두 종료된 뒤 x 의 값을 예측하세요. */

#include <iostream>
using namespace std;
int main()
{
    
// 문제 1번 
/*
    int x = 5;
    while(x < 9)
    {
        x++;
    }
    */

    // while 문 실행: 4회, 최종 x: 9

    /* 📜 std 뒤에 괄호 붙이지 말자!!! --> std는 함수가 아니라 상자
    'return 0' 뒤에 ';' 필수!!! -->  프로그래밍의 ';'를 사용하여 코드가 끝났음을 알림! */


// 문제 2번 
/*
    int x = 5;
    while(x < 11)
    {
        x += 2;
    }
*/
    // while 문 실행: 3회 , 최종 x: 11 

// 문제 3번

    int x = 7;
    while( x < 3 )
    {
        x++;
    }

    // while 문 실행: 0회, 최종 x : 7
    return 0;
}