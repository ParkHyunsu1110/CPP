// C++_2021_01_20_1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
/*
타임어택 끝말잇기 게임
*/
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main() {
    string newWord;
    string lastWord = "";
    
    cout << "시작합니다." << endl;
    clock_t startTime = clock();
    clock_t endTime;
    bool time = true;
    int count = 0;
    while (time) {
        endTime = clock();
        cout << "-------------------"<<lastWord<<"-----------------------" << endl;
        cout << "단어를 입력해주세요. : ";
        if (((endTime - startTime) / CLOCKS_PER_SEC) == 30) {
            cout << "종료됩니다." << endl;
            time = false;
            break;
        }
        cin >> newWord;

        if (lastWord == "") {
            lastWord = newWord;    //첫번째 경우
            count++;
        }
        else {
            string last, first;                         //두번째 이후
            int n = lastWord.size();
            last = lastWord.substr(n - 1, n)[0];        //마지막 글자 뽑아 오기

            first = newWord.substr(0, 1)[0];            //첫번째 글자 뽑아 오기

            if (last == first) {
                lastWord = newWord; //글자가 같으면
                count++;
            }
            else {
                cout << "올바르지 않습니다." << endl;    //글자가 다르면
            }
        }
    }
    cout << "끝말잇기 성공 횟수 : " << count << endl;
    return 0;
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
