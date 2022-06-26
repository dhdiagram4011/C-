#include <stdio.h>
#include <iostream>

/*
기계가 쓰는 변수의 예제코드, 정적맴버/상수맴버 예제코드 작성
클레스의 모든 객체가 공유하는 맴버
*/

//상수맴버
#include <stdio.h>
#include <iostream>


//참고 : https://hwan-shell.tistory.com/63

/*
상수맴버변수;
선언시 const 변수는 데이터 영역에 들어가게 되며 컴파일과 동시에 데이터 영역 메모리로 올라감
*/

using namespace std;

class A {
private:
    int num;
    string name;
public:
    A() {}

    A() {
    A(int num, string name); {
        this->num = num;
        this->name = name;
    }
    
    void const show_Print() { //값의 변경이 이루어 지는것을 방지 목적,
        cout << "hi" << endl;
        num = 10;
    }
};

int main(void) {
    A a;
    a.show_Print();

    return 0;
}