/* 사용자로부터 4개의 숫자를 입력받고, 그 합을 출력하는 프로그램을 만드세요*/

#include <iostream>
using namespace std;

main()
{
    //선언
    float num1;
    float num2;
    float num3;
    float num4;
    float sum;

    //입력받기
    cout << "첫번째 숫자: " << endl;
    cin >> num1;
    cout << "두번째 숫자: " << endl;
    cin >> num2;
    cout << "세번째 숫자: " << endl;
    cin >> num3;
    cout << "네번째 숫자: " << endl;
    cin >> num4;


    // 계산 및 결과 저장
    sum = num1 + num2 + num3 + num4;

    // 출력
    cout << "4개의 숫자 합은: " << sum ;
    return 0;

}