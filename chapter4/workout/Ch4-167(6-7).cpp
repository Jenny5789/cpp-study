/* 교재 167p 연습문제 6~7번*/
/* 6번:  초기에 x = 0, y = 0, z = 1일 때, 다음 코드를 실행한 이후의 x, y, z 값을 예측하세요.
7번:  초기에 x = 2, y = 1, z = 1일 때, 다음 코드를 실행한 이후의 x, y, z 값을 예측하세요.*/

#include <iostream>
using namespace std;
int main()
{
/* 6번 
    int x;
    int y;
    int z;

    x = 0;
    y = 0;
    z = 1;

    switch( x )
    {
        case 0 :
            x = 2;
            y = 3;

        case 1 : 
            x = 4;

        case 2 :
            y = 5;
            x = 1;

    }
    cout << "x, y, z의 값은 " << x << ", " << y << ", " << z << "입니다" << endl;

    return 0;
} 
📜 break문이 없어 case 0만 만족하지만 전체를 다 돌고 변경된다. */


/* 6번 _ 🧐 break문이 적혀있을 경우가 나올거라 예상했다.
    x = 0;
    y = 0;
    z = 1;

    switch( x )
    {
        case 0 :
            x = 2;
            y = 3;
            break;

        case 1 : 
            x = 4;
            break;

        case 2 :
            y = 5;
            x = 1;
            break;
    }
    cout << "x, y, z의 값은 " << x << ", " << y << ", " << z << "입니다" << endl;

    return 0;
}     📜 break가 있어야 x = 0 조건에 해당되는 부분만 진행된다.*/


/* 7번*/
    int x;
    int y;
    int z;

    x = 2;
    y = 1;
    z = 1;

    switch( x )
    {
        case 0:
            x = 3;
            y = 2;
        case 1:
            x = 2;
        case 2:
            y = 3;
            x = 4;
    
    }

    cout << "x, y, z의 값은 " << x << ", " << y << ", " << z << "입니다" << endl;

    return 0;

}

/* 🧐 7번도 마찬가지로 break 가 적혀 있을 경우의 결과를 예상했다. 
📜 break가 없으니, 위에서부터 가지만 x=2 바로 case2가 진행된다.*/