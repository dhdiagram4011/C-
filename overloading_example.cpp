#include <stdio.h>
#include <iostream>

//오버로딩 --> 리턴형이 같아야 함
//오버라이딩
//동물, 고양이, 인간...


using namespace std;

// 상속 받아야 함,  --> 오버라이딩 --> 

class A{
    public:
        virtual void over() {
            cout << "A class" << endl;
        }
};

class B : public A { // B가 상속
    public:
        void over() {
            cout << "B class" << endl;
        }
};

//virtual 은 부모쪽에 

int main()
{
    //A a;   
    //a.over();
    B b;
    b.over();
    return 0;
}
