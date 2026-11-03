/* 변수를 초기화할 때 리터럴을 사용하는 프로그램*/

# include <iostream>
using namespace std;

int main()
{
        // 변수 선언과 초기화
        int x = -1245;
        unsigned int y = 1245;
        unsigned int z = -2367;
        unsigned int t = 14.56;

        //초기화된 값 출력
        cout << x << endl;        // x값 출력
        cout << y << endl;        // y값 출력
        cout << z << endl;       
        // 부호없는 'unsigned'으로 정의되었지만, 제시된 값은 음수여서 강제로 양수으로 바꿈
        cout << t;                // int -> 정수부분만 출력
        return 0;     
}