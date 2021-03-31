#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name, birth, gender, address, education, job, phone;
public :
    Person(string name, string birth, string gender, string address, string education, string job, string phone) {
        this->name = name;
        this->birth = birth;
        this->gender = gender;
        this->address = address;
        this->education = education;
        this->job = job;
        this->phone = phone;
    }
    void printInfo() {
        cout << name << ", " << birth << ", " << gender << endl;
    }
};

int main()
{
    string name, birth, gender, address, education, job, phone;
    cout << "이름 : "; cin >> name;
    cout << "생년월일 : "; cin >> birth;
    cout << "성별 : "; cin >> gender;
    cout << "주소 : "; cin >> address;
    cout << "학력 : ";  cin >> education;
    cout << "직업 : "; cin >> job;
    cout << "전화번호 : ";  cin >> phone;
    Person newInfo = Person(name, birth, gender, address, education, job, phone);
    newInfo.printInfo();
}