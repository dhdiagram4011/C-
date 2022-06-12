#include <iostream>

using namespace std;

// 지역변수

void local_var(void);

int main(void)
{
    int a = 100;
    cout  << "main 함수의 a의 값:" ,
    local_var();
    return 0;
}




/*
변수의 범위 종류별로 하나씩 출력
변수의 범위 >> scope

지역변수, 전역변수, 정적변수, 레지스터변수

*/ 
