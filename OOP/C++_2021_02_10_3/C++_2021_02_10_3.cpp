// C++_2021_02_10_3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
/*
다형성 실습 1
*/
#include <iostream>
#include <string>
using namespace std;

class SnackBasket {
protected:
    int price=0;
    string productName, manufactureCompany;
public:
    void showName() {
        cout << "이름 : " << this->productName << endl;
    }
};
class Candy : public SnackBasket {
protected:
    string taste;

public:
    Candy(int price, string productName, string manufactureCompany, string taste) {
        this->price = price;
        this->productName = productName;
        this->manufactureCompany = manufactureCompany;
        this->taste = taste;
    }
};
class Chocolate : public SnackBasket {
protected:
    string shape;

public:
    Chocolate(int price, string productName, string manufactureCompany, string shape) {
        this->price = price;
        this->productName = productName;
        this->manufactureCompany = manufactureCompany;
        this->shape = shape;
    }

};
int main()
{
    Candy chupaChups = Candy(200, "츄파춥스", "chupa chups", "과일맛");
    Candy mentos = Candy(500, "멘토스", "mentos", "과일맛");
    Chocolate gana = Chocolate(1000, "가나 초콜릿", "롯데 제과", "직사각형");
    Chocolate hershey = Chocolate(1500, "HERSHEY'S", "The Hershey Company", "직사각형");
    
    SnackBasket snackBasket[4];

    snackBasket[0] = chupaChups;
    snackBasket[1] = mentos;
    snackBasket[2] = gana;
    snackBasket[3] = hershey;

    for (int i = 0; i < 4; i++) {
        snackBasket[i].showName();
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
