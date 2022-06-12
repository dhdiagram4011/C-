#include<stdio.h>
#include<iostream>

using namespace std;

void Local(void);
void StaticVar(void);


int main(void)
{
    for (int i = 0; i < 3; i++) //3보다 작을때까지
    {
        Local();
        StaticVar();
    }
    return 0;
}

void Local(void)
{
    int count = 1; //지역변수 -->  함수의 호출이 종료될적마다 메모리에서 사라짐
    cout << "Local()  함수가" << count << "번째 호출되었습니다" << endl;
    count++;
}

void StaticVar(void)
{
    static int static_count = 1; //정적변수 --> 함수의 호출이 끝나도 메모리에서 사리지지 않음
    cout << "StaticVar() 함수가" << static_count << "번째 호출되었습니다" << endl;
    static_count++;
}


