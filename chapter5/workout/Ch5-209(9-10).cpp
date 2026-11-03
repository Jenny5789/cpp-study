/* 교재 209p 연습문제 9-10번 */
/* 다음 코드의 실행 결과를 예측하세요. */


#include <iostream>
using namespace std;
int main()
{
    /* 문제 9번
    for(int x = 13; x > 7; x--)
    {
        cout << x << " ";
    }*/

// x = 13 12 11 10 9 8 
// [초기화] → [조건 검사] → [실행] → [변경]



// 문제 10번
    int x = 13;
    do
    {
        cout << x << " ";
        x--;
    } while (x > 7);
    
}

// x = 13 12 11 10 9 8 
//[실행] → [변경] → [조건 검사]
