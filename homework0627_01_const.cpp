//<상수맴버>

#include <stdio.h>
#include <iostream>

/*
기계가 쓰는 변수의 예제코드, 정적맴버/상수맴버 예제코드 작성
클레스의 모든 객체가 공유하는 맴버
*/



//참고 : https://hwan-shell.tistory.com/63

/*
상수맴버변수;
선언시 const 변수는 데이터 영역에 들어가게 되며 컴파일과 동시에 데이터 영역 메모리로 올라감
*/

using namespace std;

class A {
private:
    const int num = 10; //static 과 동일 --> final (java) : 
    const int num1;
    //int num;
    //string name;

public:
    A(int _num1) : num1(_num1) {} // --> 선언과 동시에 정의되어 있는 상태
   //함수 정의 안에 함수 정의 불가 --> 중첩함수 불가

    int sum() const {
        return  num + num1;
    }   

    const int sum(int num, int num1) {
        return num + num1; //10 , ?
    }
};


    //A(int num, string name) {
    //    const int* ptr = &num; // ptr 상수화???
        //num = 2;
        //this->num = num;
    //    this->name = name;
   // }

    //void const show_Print() { //값의 변경이 이루어 지는것을 방지 목적,
        //cout << "hi" << endl;
    //    cout << num << endl; //10
    //    cout << &num << endl; //상수화?
        
        //num = 10;
   // }

//};   

int main(void) {
    A a(100);
    A b(50);
    //A a;
    //cout << a.sum() << endl; // --> sum = num(10) + num1(?)
    cout << b.sum() << endl;
    //const int nums = a.sum(10,20);
    const int nums2 = b.sum(10,20); 
    //cout << nums << endl;
    cout << nums2 << endl;

    //a.show_Print();
    return 0;
    }