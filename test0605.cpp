#include <iostream>
using namespace std;

int main(void)
{
    cout << "hello world";
}

// global, local, static, extern --> C++ 에서 허용하는 유효범위
/*
global : 모든 함수에서 접근이 가능한 변수


void touch() {
    int b; --> touch 의 소유
    a = 10
}

int main (){
    //local variable
    int b = 10; --> main 의 소유
}

static 변수
int calc(int num){  Call 1
    static int a = 1; // a = 1, a = 2 --> calc  함수가 처음 불릴적에만 초기화 됨, 이 이후부터는 초기화 안됨. 그 값은 프로그램이 종료될때까지 계속 유지됨
    a += 1; a = 2 , a = 3
    return a * num; 2*2  , 3*2
}

*/

