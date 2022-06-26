#include <stdio.h>
#include <iostream>

/*
기계가 쓰는 변수의 예제코드, 정적맴버/상수맴버 예제코드 작성
클레스의 모든 객체가 공유하는 맴버
*/

//정적맴버
using namespace std;

class Person
{
private:
    string name_;
    int age_;
public:
    static int person_count_; //정적맴버변수
    static int person_count(); 
        // static없을경우 : 4199137번째 사람이 생성되었습니다 , 1987866518번째 사람이 생성되었습니다
    Person(const string& name, int age);
    ~Person() { person_count_--; }
    void ShowPersonInfo();
};

int Person::person_count_ = 0; //초기화 << 숫자 1을 넣을 경우 2번째사람 3번째 사람으로 생성,,, 

int main(void)
{
    Person hong("길동", 29);
    hong.ShowPersonInfo();
    Person lee("순신", 35);
    lee.ShowPersonInfo();

    return 0;
}

Person::Person(const string& name, int age)
{
    name_ = name;
    age_ = age; 
    cout << ++person_count_ << "번째 사람이 생성되었습니다" << endl; //앞에 ++ 없을경우 0번째 사람으로 출력
}

void Person::ShowPersonInfo()
{
    cout << "이 사람의 이름은" <<  name_ << "이고, 나이는" << age_ << "살 입니다" << endl;
}