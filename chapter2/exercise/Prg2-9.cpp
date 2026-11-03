/* char 자료형의 변수를 선언하고 초기화하는 프로그램*/

# include <iostream>
using namespace std;

int main()
{
    // char 자료형의 변수 선언과 초기화
    char first = 'A';
    char second = 65;
    char third = 'B';
    char fourth = 66;

    // 값 출력
    cout << "first의 값: " << first << endl;        // 문자 A 출력
    cout << "second의 값: " << second << endl;      // 아스키코드에서 숫자 65가 'A'를 의미--> A로 출력됨
    cout << "third의 값: " << third << endl;        // 문자 B 출력
    cout << "fourth의 값: " << fourth << endl;      // 아스키코드에서 숫자 66가 'B'를 의미--> B로 출력됨
        return 0;
}



/* 만약 숫자 65,66,을 출력하고 싶다면 int second, int fourth로 변경해야 한다*/