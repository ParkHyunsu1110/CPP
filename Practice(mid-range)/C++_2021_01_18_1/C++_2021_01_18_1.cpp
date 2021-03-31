﻿// C++_2021_01_18_1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
/*
마방진 만들기
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cout << "마방진의 크기 n(단, n은 3 이상의 홀수이다.) : "; cin >> n;
    if (n % 2 == 0) {
        cout << "n이 조건에 알맞지 않습니다.\n종료합니다." << endl;
        return 0;
    }
    int size = n * n;
    int **magicSquare = new int *[size];
    int num = 1, i, j, row = 0, colum = n / 2;
    for (i = 0; i < n; i++) magicSquare[i] = new int[n];
    for (num = 1; num <= size; num++) {
        magicSquare[row][colum] = num;
        if (num % n == 0) row++;
        else {
            row--; colum--;
            if (row < 0) row = n - 1;
            else if (colum < 0) colum = n - 1;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout.setf(ios::left);
            cout << setw(3) << magicSquare[i][j];
        }
        cout << endl;
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
