// C++_2021_02_08_1_4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
/*
상속 실습 1
*/
#include <iostream>
using namespace std;
class Subject {
protected:
    string subjectName, teacher, testDay;
};
class Korea : public Subject {
public :
    string bookReportDeadline;
    Korea(string subjectName, string teacher, string testDay, string bookReportDeadline) {
        this->subjectName = subjectName;
        this->teacher = teacher;
        this->testDay = testDay;
        this->bookReportDeadline = bookReportDeadline;
    }
    void printInfo() {
        cout << "과목 명 : " << subjectName << endl;
        cout << "담당 선생님 : " << teacher << endl;
        cout << "시험 날짜 : " << testDay << endl;
        cout << "독서록 마감일 : " << bookReportDeadline << endl;
    }
};
class Math : public Subject{
public :
    string popQuizDay;
    Math(string subjectName, string teacher, string testDay, string popQuizDay) {
        this->subjectName = subjectName;
        this->teacher = teacher;
        this->testDay = testDay;
        this->popQuizDay = popQuizDay;
    }
    void printInfo() {
        cout << "과목 명 : " << subjectName << endl;
        cout << "담당 선생님 : " << teacher << endl;
        cout << "시험 날짜 : " << testDay << endl;
        cout << "쪽지 시험 날짜 : " << popQuizDay << endl;
    }
};
int main()
{
    Korea korea = Korea("국어", "홍길동", "2021.03.07", "2021.03.14");
    Math math = Math("수학", "성춘향", "2021.03.14", "2021.03.12");
    korea.printInfo();
    math.printInfo();
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
