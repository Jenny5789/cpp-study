/* 교재 166 연습문제 2 ~ 4번 */
/* 초기에 x = 4, y = 0, z = 2 일때, 다음 코드를 실행한 이후의 x,y,z 값을 예측하세요 */


#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    int z;

   
    x = 4;
    y = 0;
    z = 2;

/* 2번 

    if( z == 0 || y != 0)
    {
        if (z <= 2)
        {
            z = 4;
        }
    }
    else{
        y = 5;
        z = y + x;
    }

    cout << "x, y, z의 값은 " << x << ", " << y << ", " << z << "입니다" << endl;

    return 0;

}

*/

/* 3번 

    if( z == 0 )
    {
        y = 1;
    }
    else
    {
        x = 3;
    }

    cout << "x, y, z의 값은 " << x << ", " << y << ", " << z << "입니다" << endl;

    return 0;

    }


*/

/* 4번 */

    if( x > y || y < z)
    {
        x = 10;
    }
    cout << "x, y, z의 값은 " << x << ", " << y << ", " << z << "입니다" << endl;

    return 0;

    }
