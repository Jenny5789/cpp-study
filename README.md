# C++ Study

『포르잔 C++ 에센셜』 교재 순서에 따라 2장부터 5장까지(기초 문법, 연산자, 선택문, 반복문) 공부하고,<br>
교재 예제와 연습문제를 풀어 본 저장소입니다.

## 기술 스택

![C++](https://img.shields.io/badge/C++-00599C?style=flat&logo=cplusplus&logoColor=white)

---

## 📁 [2장. 기초 문법 · 자료형](./chapter2)

<details>
<summary><b>예제</b></summary>

- [Hello World 출력](./chapter2/exercise/hello.cpp)

1. [`cout`과 `endl`로 여러 줄 출력](./chapter2/exercise/Prg2-1.cpp)
2. [별(*)로 사각형 출력](./chapter2/exercise/Prg2-2.cpp)
3. [두 수를 입력받아 합 출력](./chapter2/exercise/Prg2-3.cpp)
4. [동전과 지폐의 금액 합계](./chapter2/exercise/Prg2-4.cpp)
5. [3회 거래 후 계좌 잔액](./chapter2/exercise/Prg2-5.cpp)
6. [`sizeof`로 정수 자료형 크기 확인](./chapter2/exercise/Prg2-6.cpp)
7. [리터럴로 변수 초기화](./chapter2/exercise/Prg2-7.cpp)
8. [리터럴 값을 단독으로 사용](./chapter2/exercise/Prg2-8.cpp)
9. [`char` 자료형 선언과 초기화](./chapter2/exercise/Prg2-9.cpp)
10. [이스케이프 문자 사용](./chapter2/exercise/Prg2-10.cpp)

</details>

<details>
<summary><b>연습문제</b></summary>

1. [77쪽 1·2번 — `cout` 출력](./chapter2/workout/Ch2-077%281-2%29.cpp)
2. [77쪽 3·4번 — 정수 · 실수 출력](./chapter2/workout/Ch2-077%283-4%29.cpp)
3. [77쪽 5·6번 — 변수 대입, `string` 입력](./chapter2/workout/Ch2-077%285-6%29.cpp)
4. [78쪽 1·2·3번 — 별(*) 모양 출력](./chapter2/workout/Ch2_078%281-3%29.cpp)
5. [78쪽 4번 — 시 · 분 · 초를 초 단위로 환산](./chapter2/workout/Ch2_078%284%29.cpp)
6. [78쪽 5번 — 숫자 4개를 입력받아 합 출력](./chapter2/workout/Ch2_078%285%29.cpp)
7. [78쪽 6번 — 정사각형의 넓이와 둘레](./chapter2/workout/Ch2_078%286%29.cpp)

</details>

</br></br>

## 📁 [3장. 연산자](./chapter3)

<details>
<summary><b>연습문제</b></summary>

1. [126쪽 1·2번 — 정수 표현식의 오류 찾기](./chapter3/workout/CP3_126%281-2%29.cpp)
2. [126쪽 3번 — 부동 소수점 표현의 오류 찾기](./chapter3/workout/CP3_126%283-4%29.cpp)
3. [126쪽 4·5번 — 표현식 결과 예측](./chapter3/workout/CP3_126%284-5%29.cpp)
4. [126쪽 6·7·8번 — x, y, z 표현식 결과 예측](./chapter3/workout/CP3_126%286-8%29.cpp)
5. [126쪽 9·10번 — 표현식 결과 예측](./chapter3/workout/CP3_126%289-10%29.cpp)

</details>

</br></br>

## 📁 [4장. 선택문](./chapter4)

<details>
<summary><b>연습문제</b></summary>

1. [166쪽 1번 — `if` 실행 후 x, y 값 예측](./chapter4/workout/Ch4-166%281%29.cpp)
2. [166쪽 2·3·4번 — x, y, z 값 예측](./chapter4/workout/Ch4-166%282-4%29.cpp)
3. [166쪽 5번 — `bool` 조건의 x, y, z 값 예측](./chapter4/workout/Ch4-166%285%29.cpp)
4. [167쪽 6·7번 — x, y, z 값 예측](./chapter4/workout/Ch4-167%286-7%29.cpp)
5. [167쪽 8·9번 — `if` 코드를 `switch`로 바꾸기](./chapter4/workout/Ch4-167%288-9%29.cpp)

</details>

</br></br>

## 📁 [5장. 반복문](./chapter5)

<details>
<summary><b>연습문제</b></summary>

1. [208쪽 1·2·3번 — `while` 실행 횟수 예측](./chapter5/workout/Ch5-208%281-3%29.cpp)
2. [208쪽 4·5·6번 — `while` 실행 횟수 예측](./chapter5/workout/Ch5-208%284-6%29.cpp)
3. [208쪽 7·8번 — `do-while` 실행 횟수 예측](./chapter5/workout/Ch5-208%287-8%29.cpp)
4. [209쪽 9·10번 — 실행 결과 예측](./chapter5/workout/Ch5-209%289-10%29.cpp)
5. [209쪽 11·12번 — `do-while`을 `while`로 바꾸기](./chapter5/workout/Ch5-209%2811-12%29.cpp)

</details>

---

## 🚀 과제

- [성장 비전 리포트](./chapter2/homework/HW_2_vision_report.cpp) — 이름 · 나이 · 목표 · 달성치를 입력받아 달성률을 계산하고 서식에 맞춰 출력

---

## 파일 이름 규칙

- `Prg2-N.cpp`: 교재 2장 예제 N번
- `Ch2-077(1-2).cpp`, `CP3_126(1-2).cpp` 등: 교재 쪽수(문제 번호)
- 연습문제 풀이 파일에는 문제와 예측 결과를 주석으로 정리

## 실행 방법

```bash
g++ chapter2/exercise/hello.cpp -o hello
./hello
```
