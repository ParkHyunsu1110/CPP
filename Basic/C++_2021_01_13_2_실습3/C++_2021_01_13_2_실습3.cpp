// C++_2021_01_13_2_실습3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
/*
배와 비행기 속도차이 알아보는 프로그램....??
*/
#include <iostream>
using namespace std;
class Ship {
public :
    string name;
    int usingFee;
    int Perhour;
    string start;

    Ship(string name, int usingFee, int Perhour, string start) {
        this->name = name;
        this->usingFee = usingFee;
        this->Perhour = Perhour;
        this->start = start;
    }
    void printInfo() {
        cout << "이름 : " << name << ", 출발지 : " << start << endl;
    }
    int usingfee() {
        return usingFee;
    }
    int best(int distance) {
        return usingFee / (distance / Perhour);
    }
    string returnName() {
        return name;
    }
    ~Ship() {
        cout << name << "의 운행이 종료되었습니다." << endl;
    }
};

class Airplane {
public :
    string name;
    int usingFee;
    int Perhour;
    string start;

    Airplane(string name, int usingFee, int Perhour, string start) {
        this->name = name;
        this->usingFee = usingFee;
        this->Perhour = Perhour;
        this->start = start;
    }
    void printInfo() {
        cout << "이름 : " << name << ", 출발지 : " << start << endl;
    }
    int usingfee() {
        return usingFee;
    }
    int best(int distance) {
        return usingFee / (distance / Perhour);
    }
    string returnName() {
        return name;
    }
    ~Airplane() {
        cout << name << "의 운행이 종료되었습니다." << endl;
    }
};

int main() {
    Ship Incheon = Ship("인천 여객선", 420000, 60, "인천항");
    Incheon.printInfo();

    Ship Busan = Ship("부산 여객선", 370000, 57, "부산행");
    Busan.printInfo();

    Airplane Seoul = Airplane("서울 항공", 1820000, 780, "서울공항");
    Seoul.printInfo();

    Airplane Jeju = Airplane("제주 항공", 1740000, 710, "제주공항");
    Jeju.printInfo();
   
    cout << endl;

    int distance = 10600;
    int temp=0;
    int best[4] = { Incheon.best(distance), Busan.best(distance), Seoul.best(distance), Jeju.best(distance) };
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (best[j] > best[j + 1]) {
                temp = best[j];
                best[j] = best[j + 1];
                best[j + 1] = temp;
            }
        }
    }
    
    if (Incheon.best(distance) == best[0]) cout << Incheon.returnName();
    if (Busan.best(distance) == best[0]) cout << Busan.returnName();
    if (Seoul.best(distance) == best[0]) cout << Seoul.returnName();
    if (Jeju.best(distance) == best[0]) cout << Jeju.returnName();
    cout << "이 비용이 제일 적게 듭니다." << endl;

    cout << endl;
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
