/* 3 가지 정수 자료형으 크기를 확인하는 프로그램*/


#include <iostream>
using namespace std;

int main()
{
    cout << "short int의 크기는 " << sizeof(short int) << "바이트입니다." << endl;
    cout << "int의 크기는 " << sizeof(int) << "바이트입니다." << endl;
    cout << "long int의 크기는 " << sizeof(long int) << "바이트입니다." << endl;
    return 0;
}



/* sizeof 이용하여 정수자료형 크기를 찾을 수 있다. int, long int의 크기는 컴퓨터에 따라 다름*/

/****** sizeof 붙여쓰기         short int, long int 띄어쓰기********/