// C++_2021_02_01_2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
/*
추상화 실습 2
*/
#include <iostream>
using namespace std;
class Information {
public:
    string name;
    string className;
    int RRN;
    int weekClass;
    int choice;

    void workChoice() {
        cout << "1) 학생 이름, 수강 과목" << endl;
        cout << "2) 사람 이름, 주민번호 뒷자리" << endl;
        cout << "3) 사람 이름, 주간 수업 횟수" << endl;

        cout << "선택 : "; cin >> choice;
        
        switch (choice) {
        case 1:
            cout << "1 선택" << endl;
            cout << "이름 : "; cin >> name;
            cout << "수강 과목 : "; cin >> className;
            showClass(name, className);
            break;
        case 2:
            cout << "2 선택" << endl;
            cout << "이름 : "; cin >> name;
            cout << "주민번호 뒷자리의 첫글자 : "; cin >> RRN;
            showGender(name, RRN);
            break;
        case 3:
            cout << "3 선택" << endl;
            cout << "이름 : "; cin >> name;
            cout << "일주일 수업 횟수 : "; cin >> weekClass;
            showMonth(name, weekClass);
            break;
        default:
            cout << "보기에 없는 선택입니다. 다시 입력해 주세요." << endl;
            break;
        }
    }
    void showClass(string name, string className) {
        cout << name << " " << className << "수강 학생" << endl;
    }
    void showGender(string name, int RRN) {
        cout << name << " ";
        if (RRN == 1 || RRN == 3) cout << "남자" << endl;
        if (RRN == 2 || RRN == 4) cout << "여자" << endl;
    }
    void showMonth(string name, int takeClass) {
        cout << name << " " << takeClass * 4 << "회" << endl;
    }
};
int main() {
    for (int i = 0; i < 2; i++) {
        Information info = Information();
        info.workChoice();
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
