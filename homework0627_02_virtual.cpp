#include <stdio.h>
#include <iostream>

/*
사람 클래스에서 학생, 교수, 운동선수 등 클래스 상속받아서 구현, --> virtual  함수사용
virtual 멤버함수의 원형;
가상함수 : 파생클레스에서 재정의할 것으로 기대되는 맴버함수를 의미
*/

using namespace std;

class Human {
    private:
        int age;
        char name[10];
        char hobby[10];
    public:
        Human(int _age, char * _name, char * _hobby);
        virtual void Print() { cout << "사람" << endl; }
};


class Student: public Human{
    private:
        char school[10];
    public:
        Student(int _age, char * _name, char * _hobby);
        virtual void Print() { cout << "학생" << endl; }

};

class Professor: public Human{
    private:
        char universty[20];
    public:
        Professor(int _age, char * _name, char * _hobby);
        virtual void Print() { cout << "교수" << endl; }
};

class Atlete: public Human{
    private:
        char sports[20];
    public:
        Atlete(int _age, char * _name, char * _hobby);
        virtual void Print() { cout << "운동선수" << endl; }
};

int main(void)
{
    Human* ptr;
    Human obj_a;
    Student obj_b;
    Professor obj_c;
    Atlete obj_d;

    ptr = &obj_a;
    ptr->Print();
    ptr = &obj_b;
    ptr->Print();
    ptr = &obj_c;
    ptr->Print();
    ptr = &obj_d;
    ptr->Print();
    return 0;
}