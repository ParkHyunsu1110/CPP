// C++_2021_02_08_1_3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
class Person {
protected:
    string name, birthday;
    int age;
public:
    void info() {
        cout << "이름 : " << name << endl;
        cout << "생년월일 : " << birthday << endl;
        cout << "나이 : " << age << endl;
    }
};
class HighSchoolStudent : public Person {
private: 
    string school;
    int studentNumber, grade, clazz;

public:
    HighSchoolStudent(string name, string birthday, int age, string school, int studentNumber, int grade, int clazz) {
        this->name = name;
        this->birthday = birthday;
        this->age = age;
        this->school = school;
        this->studentNumber = studentNumber;
        this->grade = grade;
        this->clazz = clazz;
    }
};
class UniversityStudent : public Person {
private :
    string university, major;
    int studentNumber, grade;
public:
    UniversityStudent(string name, string birthday, int age, string university, string major, int studentNumber, int grade) {
        this->name = name;
        this->birthday = birthday;
        this->age = age;
        this->university = university;
        this->major = major;
        this->studentNumber = studentNumber;
        this->grade = grade;
    }
};
int main()
{
    HighSchoolStudent hong = HighSchoolStudent("홍길동", "1992-05-16", 29, "코딩고등학교", 923102, 2, 9);
    UniversityStudent kim = UniversityStudent("김찬", "1987-06-14", 22, "코딩온대학교", "컴퓨터공학과", 120315, 3);

    hong.info();
    kim.info();
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
