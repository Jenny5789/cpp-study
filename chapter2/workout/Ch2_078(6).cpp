/* 정사각형의 변 하나가 주어졌을 때, 그 면적과 둘레를 구하는 프로그램을 만드세요.*/
#include <iostream>
using namespace std;

main()
{
    //선언
    float num1;
    float A;
    float L;

    //문구 출력 & 입력
    cout << "정사각형 한변의 길이를 입력하세요: " << endl;
    cin >> num1;

    //계산 및 결과 저장
    A = num1 * num1;
    L = 4 * num1;

    // 출력
    cout << "한 변의 길이가 " << num1 << "인 정사각형의 면적은 " << A << "이고, 둘레는 " << L << "입니다.";
    
    return 0;

}