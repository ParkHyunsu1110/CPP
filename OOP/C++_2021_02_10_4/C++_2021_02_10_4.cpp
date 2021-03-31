// C++_2021_02_10_4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
/*
다형성 실습 2
*/
#include <iostream>
using namespace std;
class Refrigerator {
protected:
    int Brix;
    string taste, name;
    int floor;
public :
    void showFloor(string beverageName) {
        if (this->name == beverageName) {
            cout << this->floor << "층" << endl;
        }
        else {
            cout << -1 << endl;
        }

    }
};

class CarbonatedDrink : public Refrigerator {
protected:
    string color;
public:
    CarbonatedDrink(int Brix, string taste, string name, string color) {
        this->Brix = Brix;
        this->taste = taste;
        this->name = name;
        this->color = color;
        this->floor = 3;
    }
};

class IonDrink : public Refrigerator {
protected:
    string ingredient;
public:
    IonDrink(int Brix, string taste, string name, string ingredient) {
        this->Brix = Brix;
        this->taste = taste;
        this->name = name;
        this->ingredient = ingredient;
        this->floor = 3;
    }
};

class FreshFruitJuice : public Refrigerator {
protected:
    string origin;
public:
    FreshFruitJuice(int Brix, string taste, string name, string origin) {
        this->Brix = Brix;
        this->taste = taste;
        this->name = name;
        this->origin = origin;
        this->floor = 1;
    }
};

class Tea : public Refrigerator {
protected:
    string origin, efficacy;
public:
    Tea(string name, string origin, string efficacy) {
        this->name = name;
        this->origin = origin;
        this->efficacy = efficacy;
        this->floor = 2;
    }
};
int main()
{
    CarbonatedDrink coke = CarbonatedDrink(8, "콜라", "코카콜라", "검정색");
    IonDrink toreta = IonDrink(4, "과일 및 채소", "토레타", "탄수화물/당류/나트륨");
    FreshFruitJuice orange = FreshFruitJuice(6, "오렌지", "오렌지 주스", "아르헨티나");
    Tea barley = Tea("보리차", "한국", "항염효과");
    Refrigerator refrigerator[4];
    refrigerator[0] = coke;
    refrigerator[1] = toreta;
    refrigerator[2] = orange;
    refrigerator[3] = barley;

    string beverage;
    cout << "음료 검색 : "; cin >> beverage;
    for (int i = 0; i < 4; i++) {
        refrigerator[i].showFloor(beverage);
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
