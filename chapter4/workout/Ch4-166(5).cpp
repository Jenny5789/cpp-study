/* 교재 166 연습문제 5번 */
/* 초기에 x = true, y = false, z = true일 때, 다음 코드를 실행한 이후의 x,y,z 값을 예측하세요. */

#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    int z;

    x = true;
    y = false;
    z = true;

    if(x)
    {
        if(y)
        {
            z = false;
        }
        else
        {
            y = true;
        }
    }

    cout << "x, y, z의 값은 " << x << ", " << y << ", " << z << "입니다" << endl;

    return 0;

}