#include <iostream>

using namespace std;

//전역변수
int num1 = 10;

void local_var(void);


int main(void)
{

    static int b = 200; //정적변수 --> 여러개의 오브젝트가 이거 하나만 사용 --> 함수들이 공유, 함수안에 있으면 함수끼리 공유
    int a = 100;
    cout  << "main 함수의 a의 값:" ,
    local_var();
    return 0;
}


class many
{
    public:
        static int toy;  //--> 선언        
};
int many::toy = 1; // --> 초기화 --> 함수 안에 들어가 있을때 특징?


//static --> 언제나 그대로 유지,초기화 1면 되면 그 값은 그대로 유지, 변경해도 값은 그대로 유지

/*
변수의 범위 종류별로 하나씩 출력
변수의 범위 >> scope

지역변수, 전역변수, 정적변수, 레지스터변수

*/ 
