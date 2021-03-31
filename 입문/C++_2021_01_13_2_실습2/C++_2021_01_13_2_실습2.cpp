// C++_2021_01_13_2_실습2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
/*
Person클래스 만들고 실행해보기
*/
#include <iostream>
using namespace std;
class Person {
    private:
        string phone;
        string address;

    public :
        string name;
        int age;
        string job;
   

    Person(string name, int age, string phone, string job, string adress) {
        this->name = name;
        this->age = age;
        this->phone = phone;
        this->job = job;
        this->address = address;
    }
    void printInfo() {
        cout << "이름 : " << name << endl;
        cout << "나이 : " << age << endl;
    }
    void changeAge(int ageNew) {
        age = ageNew;
    }
};
int main() {
    Person Park = Person("박현수", 22, "010-8898-5421", "학생", "경기도 화성시");
    Person Heo = Person("허유림", 23, "010-1234-5678", "학생", "경기도 수원시");
    Person Kim = Person("김지윤", 23, "010-2580-1470", "학생", "경기도 광주시");
    Park.printInfo();
    Park.changeAge(23);
    Park.printInfo();
    Heo.printInfo();
    Kim.printInfo();
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
