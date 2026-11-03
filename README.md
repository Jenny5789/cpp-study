# C++ Study

- 『포르잔 C++ 에센셜』 교재 순서에 따른 이론 학습·연습문제 풀이 저장소
- 범위: 2장 ~ 5장 (기초 문법, 연산자, 선택문, 반복문)
- 구성: 교재 예제 실습, 연습문제 풀이(결과 예측 포함), 과제 2개

## 장별 학습 내용

| 장 | 주제 | 주요 내용 | 폴더 |
|---|---|---|---|
| 2장 | 기초 문법·자료형 | `cout`·`cin` 입출력, 정수·실수·`char`·`string` 자료형, `sizeof`, 리터럴, 이스케이프 문자 | [chapter2](./chapter2) |
| 3장 | 연산자 | 정수·부동 소수점 표현식의 오류 찾기, 연산 우선순위, 표현식 결과 예측 | [chapter3](./chapter3) |
| 4장 | 선택문 | `if`·`else` 조건 분기, `bool` 조건식, `if` 코드를 `switch` 문으로 변환 | [chapter4](./chapter4) |
| 5장 | 반복문 | `while`·`do ~ while` 실행 횟수 예측, `do ~ while` → `while` 변환 | [chapter5](./chapter5) |

## 과제

| 과제 | 내용 | 사용 개념 |
|---|---|---|
| [HW_2_vision_report.cpp](./chapter2/homework/HW_2_vision_report.cpp) | 이름·나이·목표·달성치를 입력받아 성장 비전 리포트 출력 | 자료형 선택, `cin` 입력, 달성률 계산, 서식 출력 |
| [HW_3_calculator.cpp](./chapter3/homework/HW_3_calculator.cpp) | 문자열 수식(예: `256*45+30-3`)을 계산해 10진수·2진수로 출력 | 문자열 파싱(음수 포함), `*`·`/` 우선 처리, 연산 전 overflow 검사, 0 나누기 처리, `bitset` |

## 폴더 구성

```
cpp-study
 ┣ chapter2
 ┃ ┣ exercise    # 교재 예제 실습 (Prg2-1 ~ Prg2-10, hello)
 ┃ ┣ workout     # 77~78쪽 연습문제
 ┃ ┗ homework    # 과제: 성장 비전 리포트
 ┣ chapter3
 ┃ ┣ workout     # 126쪽 연습문제
 ┃ ┗ homework    # 과제: 사칙연산 계산기
 ┣ chapter4
 ┃ ┗ workout     # 166~167쪽 연습문제
 ┣ chapter5
 ┃ ┗ workout     # 208~209쪽 연습문제
 ┗ README.md
```

## 파일 이름 규칙

- `Prg2-N.cpp`: 교재 2장 예제 N번
- `Ch2-077(1-2).cpp`, `CP3_126(1-2).cpp` 등: 교재 쪽수(문제 번호)
- 연습문제 풀이 파일에는 문제와 예측 결과를 주석으로 정리

## 실행 방법

```bash
g++ chapter2/exercise/hello.cpp -o hello
./hello
```
