/*요구 사항 : 
아래의 정보를 저장하기 위해 적절한 자료형(string, int, double, bool)을 선언하고
아래의 출력 양식에 맞게 출력.
[입력]
- 이름(문자열)
- 현재 나이(정수)
- 나이 비전/목표(문자열)
- 목표 달성치 (정수, 100점 만점 기준), 0~100 입력
- 현재 달성치 (정수)0~100입력
- 비전 활성화 여부(불타입, 0 또는 1 입력) 1:시작, 0:대기

입출력: cin 객체로 정보를 입력 받고,cout 객체로 서식에 맞춰 출력함.
연산:(현재 달성치/목표 달성치*100)을 계산하여 을 소수점 형태로 출력함.

[출력]
--- 나의 성장 비전 리포트 ---
성함 : 홍길동(00세)
목표 비전 : 성공
진행도 : 32/100
현재 달성률 : 32%
운영 상태 : 진행 중 
*/


# include <iostream>
# include <string>
using namespace std;

int main()
{
    /* 변수 선언 이름:name, 나이:age, 
    비전/목표: my, 목표 달성치:goal, 현재달성치:cur
    비전활성화여부: act, 현재 달성률: rate      */
    string name;
    int age;
    string my;
    int goal;
    int cur;
    bool act;
    double rate;
   

    /*  입력받기*/
    cout << "이름을 입력하세요: ";
    cin >> name;
    cout << "나이를 입력하세요: ";
    cin >> age;
    cout << "나의 비전(한 단어)을 입력하세요: ";
    cin >> my;
    cout << "목표 달성치를 입력하세요(정수, 100점 만점 기준): ";
    cin >> goal;
    cout << "현재 달성치를 입력하세요(정수, 0~100 사이 입력): ";
    cin >> cur;
    cout << "비전 활성화 여부(1:시작, 0:대기):";
    cin >> act;


    /* 계산 */
    rate = (double(cur)/goal)*100;

    
  
    /* 출력하기 */
    cout << "\n--- 나의 성장 비전 리포트 ---" <<endl;
    cout << "성함 : " << name << "(" << age << "세)" <<endl;
    cout << "목표 비전 : " << my << endl;
    cout << "진행도 : " << cur << " / " << goal << endl;
    cout << "현재 달성률 : " << showpoint << rate << "%" << endl;
    cout << "운영 상태 : " ;
    if(act == 1)
    {
        cout << "진행 중" << endl;
    }
    else
    {
        cout << "준비 중" << endl;
    }
    cout << "------------------------------" <<endl;

    return 0;

}