// C++_2021_01_13_2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
/*namespace Hong {
    string name = "홍길동";
    int age = 21;
    string habitat = "서울특별시";
    string phone = "010-1234-5678";

    void print() {
        cout << "이름 : " << name << endl;
        cout << "나이 : " << age << endl;
        cout << "거주지 : " << habitat << endl;
        cout << "전화번호 : " << phone << endl;
    }
}
namespace Seong {
    string name = "성춘향";
    int age = 25;
    string habitat = "인천광역시";
    string phone = "010-9876-5432";

    void print() {
        cout << "이름 : " << name << endl;
        cout << "나이 : " << age << endl;
        cout << "거주지 : " << habitat << endl;
        cout << "전화번호 : " << phone << endl;
    }
}*/
class Person {
public :
    string name;
    int age;
    string habitat;
    string phone;

    Person(string name, int age, string address, string phone) {
        this->name = name;
        this->age = age;
        this->habitat = address;
        this->phone = phone;
    }
    void print() {
        cout << "이름 : " << name << endl;
        cout << "나이 : " << age << endl;
        cout << "거주지 : " << habitat << endl;
        cout << "전화번호 : " << phone << endl;
    }
};
int main() {
    /*Hong::print();
    Seong::print();*/
    Person hong = Person("홍길동", 21, "서울특별시", "010-1234-5678");
    Person seong = Person("성춘향", 25, "인천광역시", "0109876-5432");
    hong.print();
    seong.print();
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
