// C++_2021_02_17_1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//



#include <iostream>
using namespace std;
class Parents {
public:
	void overiding_function() {
		cout << "부모 클래스의 일반 함수 1" << endl;
	}

	void normal_function() {
		cout << "부모 클래스의 일반 함수 2" << endl;
	}
};

class Childs : public Parents {
public:
	void function_childs1() {
		cout << "Childs의 함수" << endl;
	}
};

class NewChilds : public Parents {
public:
	void function_childs2() {
		cout << "NewChilds의 함수" << endl;
	}
};

int main(void) {
	Childs child = Childs();
	NewChilds newChild = NewChilds();

	Parents array_parents[2];

	array_parents[0] = child;
	array_parents[1] = newChild;

	array_parents[0].function_childs1();
	array_parents[0].function_childs2();
}

/*
# 1. 새로 정의하고자 하는 함수가 반드시 상위 클래스에 존재해야 한다.
# 2. 메소드 이름이 상위 클래스에 있는 새로 정의하고자 하는 함수와 같아야 한다.
# 3. 메소드의 인자 개수, 인자의 자료형이 같아야 한다.
# 4. 메소드의 리턴형이 같아야 한다.
# 5. 원래 메소드의 내용과 같거나 추가, 수정되어야 한다.
*/

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
