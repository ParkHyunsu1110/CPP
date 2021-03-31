// C++_2021_02_03_2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
using namespace std;
class User {
private:
    string  pw, phone, email;
public :
    string id, nickName, blogUrl;
    User(string id, string pw, string nickName, string phone, string email, string blogUrl) {
        this->id = id;
        this->pw = pw;
        this->nickName = nickName;
        this->phone = phone;
        this->email = email;
        this->blogUrl = blogUrl;
    }
    void printInfo(string checkPW) {
        if (pw == checkPW) {
            cout << "ID : " << id << ", NickName : " << nickName << ", Phone : " << phone << ", E-mail : " << email << endl;
        }
        else {
            cout << "PW 불일치, 정보 확인 불가." << endl;
        }
    }
    void changeNickName(string checkPW) {
        if (pw == checkPW) {
            string newNickName;
            cout << "New NickName : "; cin >> newNickName;
            nickName = newNickName;
        }
        else {
            cout << "PW 불일치, NickName 변경 불가." << endl;
        }
    }
};
int main()
{
    string id, nickName, blogUrl;
    string  pw, phone, email;
    cout << "ID : "; cin >> id;
    cout << "PW : "; cin >> pw;
    cout << "NickName : "; cin >> nickName;
    cout << "Phone : "; cin >> phone;
    cout << "E-mail : "; cin >> email;
    cout << "Blog Url : "; cin >> blogUrl;
    User user = User(id, pw, nickName, phone, email, blogUrl);
    int work = 0; 
    string checkPW;
    while (true) {
        cout << "1) NickName 변경" << endl << "2) 정보 확인" << endl << "그 외) 사용 종료" << endl;
        cout << "동작 선택 : "; cin >> work;

        switch (work) {
        case 1: cout << "NickName 변경" << endl << "PW 입력 : "; cin >> checkPW;  user.changeNickName(checkPW); break;
        case 2: cout << "정보 확인" << endl << "PW 입력 : "; cin >> checkPW;  user.printInfo(checkPW); break;
        default: cout << "아무런 동작없이 종료합니다."; break;
        }
    }
    
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
