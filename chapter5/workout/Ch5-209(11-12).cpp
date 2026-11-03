/* 교재 209p 연습문제 11-12번 */
/* 문제 11. 다음 do ~ while 반복문을 while 반복문으로 변경하세요.*/


#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    do
    {
        cout << x << endl;
        x++;
    } while (true);
    
}

/*
int x = 10;
while (true)
{
    cout << x << endl;
    x++;
}
*/

/* 문제 12. 다음 while 반복문을 for 반복문으로 변경하세요.*/

int x = 10;
while(x < 20)
{
    cout << x << endl;
    x++;
}


for(int x = 10; x < 20; x++)
{
    cout << x << endl;
}



// 💡📌 return은 '함수를 즉시 종료하고 값을 반환하는 것'.
만약 'return'을 반복문 안에 넣으면, 루프가 끝나기도 전에 함수가 강제 종료된다.