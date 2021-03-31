// C++_2021_01_25_1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
/*
 랜덤 숫자 맞추기 게임
*/
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

#define size 6

int main() {
    int count = 0;
    int isSame = 0;
    int i, num;

    int* inputArray = new int[size];
    int inputNum = 0;
    cout << "숫자는 1~25까지의 숫자만 입력할 수 있습니다." << endl;

    while (count < size) {  //숫자 입력
        cout << count + 1 << "번째 숫자를 입력하세요. : "; cin >> inputNum;
        if (inputNum <= 0 || inputNum >= 26) {
            printf("잘못된 숫자입니다. 범위 내로 다시 입력해 주세요.\n");
            continue;
        }
        for (int i = 0; i < count; i++) {
            if (inputNum == inputArray[i]) {
                isSame = 1;
                break;
            }
        }
        if(isSame == 1) cout << "이미 입력된 숫자입니다." << endl; 
        if (isSame == 0) {
            inputArray[count] = inputNum;
            count++;
        }
    }

    int* randomArray = new int[size];
    srand((unsigned int)time(NULL));
    count = 0;
    while (count < size) {  //난수 뽑기
        isSame = 0;
        num = rand() % 25 +1;
        for (int i = 0; i < count; i++) {
            if (num == randomArray[i]) {
                isSame = 1;
                break;
            }
        }
        if (isSame == 0) {
            randomArray[count] = num;
            count++;
        }
    }
    int correct = 0;
    //숫자 정렬 및, 비교, 결과 산출
    sort(inputArray, inputArray + size);
    sort(randomArray, randomArray + size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (inputArray[j] == randomArray[i]) {
                correct++;
            }
        }
    }

    cout << "------------------------------" << endl << "당첨 번호 공개!" << endl;
    for (int i = 0; i < size; i++) cout << randomArray[i] << " ";   //난수 출력
    cout <<endl << "1등부터 7등까지 결과가 나올 수 있습니다." << endl;
    switch (correct) {
        case 6: cout << "결과 : 1등입니다!" << endl; break;
        case 5: cout << "결과 : 2등입니다!" << endl; break;
        case 4: cout << "결과 : 3등입니다!" << endl; break;
        case 3: cout << "결과 : 4등입니다!" << endl; break;
        case 2: cout << "결과 : 5등입니다!" << endl; break;
        case 1: cout << "결과 : 6등입니다!" << endl; break;
        case 0: cout << "결과 : 7등입니다!" << endl; break;
    }
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
