/* 교재 페이지 166쪽 연습문제 1번*/
/*  초기에 x = 4, y = 0일 때, 다음 코드를 실행한 이후의 x, y값을 예측하세요. */

#include <iostream>

using namespace std;
int main()
{
    int x;
    int y;
 
    x = 4;
    y = 0;


    if (x != 0)
    {
        y = 3;
    }
    cout << "y의 값은" <<  y << "입니다." << endl;

    return 0;
}