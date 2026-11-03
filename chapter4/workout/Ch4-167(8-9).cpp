/* 교재 167p 연습문제 8~9번 */
/* 다음 코드를 switch 조건문을 사용하는 형태로 변경하세요. */


/* 8번 문제 */
#include <iostream>
using namespace std;

/*
int main()
{
    int x;

    if( x == 2 )
    {
        x++;
    }
    else if(x == 3)
    {
        x--;
    }
    else
    {
        cout << "End!";
    }
}
    */

/* 8번 switch 문
main()
{
    switch (x)
    {
        case 2:
        x++;
        break;

        case 3:
        x--;
        break;

        default:
        cout << "End!";     📜 default에는 cout를 꼭 붙여줘야 한다.
        break;

    } 
}

*/

/* 9번 문제 */
int main()
{
char ch = 'A';

int countA = 0;
int countE = 0;
int countI = 0;

if(ch == 'A' || ch == 'a')
    countA++;
else if(ch == 'E' || ch == 'e')
    countE++;
else if(ch == 'I' || ch == 'i')
    countI++;
else
    cout << "Error--Not A, E, or I" << endl;
} 

/*
main()
{
    switch( ch )
    {
        case 'A':
        case 'a':
            countA++;
            break;

        case 'E':
        case 'e':
            countE++;
            break;

        case 'I':
        case 'i':
            countI++;
            break;

        default:
            cout <<"Error--Not A, E, or I" << endl;
    }
}
*/



/* 📜 Switch문 
***** 기본 모양 *****

switch (변수) {
    case 값1:
        // 실행 코드
        break; // 필수!

    case 값2:
        // 실행 코드
        break;

    default:
        // 어떤 case도 아닐 때 실행

        break;
}

- 동작 원리: 
    - 일치하는 'case' 로 즉시 이동. 'break'를 만나기 전까지 'case'이후 모든 코드 실행함.
    - default: 어떤 'case'에도 해당되지 않을 때 실행되는 '기본값'


***** 케이스 쌓기 *****

switch (ch) {
    case 'A': // 'A' 또는 'a'인 경우
    case 'a':
        countA++; // 같은 로직 공유
        break;    // 여기서 종료

}



"switch 문"은 jump to case until break



*/