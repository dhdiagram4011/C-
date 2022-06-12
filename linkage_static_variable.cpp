//내부연결을 가지는 정적변수

#include <stdio.h>
#include <iostream>
using namespace std;

static int var;
void Local(void);

int main(void)
{
    cout << "변수 var의 초기값은" <<  var << "입니다." << endl; //0
    int i = 5;
    int var = 10; //자동변수선언
    cout << "main() 함수 내의 자동변수 var의 값은" << var << "입니다" << endl; //10 

    if(i < 10)
    {
        Local();
        cout << "현재 변수 var의 값은" <<  var <<  "입니다" <<  endl; //자동변수접근 ,  //10
    }
    cout << "더 이상 main() 함수에서는 정적변수 var에 접근할 수가 없습니다" <<  endl; 
    return 0;
}

void Local(void) 
{
    var = 20;
    cout << "Local() 함수 내에서 접근한 정적 변수 var의 값은" << var << "입니다" << endl;
}