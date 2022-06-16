/*
클래스를 사용하여 사칙연산계산기 프로그램 작성
https://jesus12.tistory.com/516
*/

#include <iostream>

using namespace std;

class calc
{
    int num1, num2;

public:
    int add(int a, int b);
    int min(int a, int b);
    int mul(int a, int b);
    double div(int a, int b);
};

int calc::add(int a, int b)
{
    return a + b;
}

int calc::min(int a, int b)
{
    return a - b;
}

int calc::mul(int a , int b)
{
    return a * b;
}

double calc::div(int a, int b)
{
    return (double)a / (double)b;
}


/*https://webcreate.tistory.com/entry/error-main-must-return-int-%ED%95%B4%EA%B2%B0%EB%B0%A9%EB%B2%95*/

int main()
{
    float num1, num2;
    float add, min, mul, div;
    float output;
    
    calc cal;
    cout << "cal.add(10,19) = " << cal.add(10,19) << endl;
    cout << "cal.min(10,19) = " << cal.min(10,19) << endl;
    cout << "cal.mul(10,19) = " << cal.mul(10,19) << endl;
    cout << "cal.div(10,19) = " << cal.div(1,0) << endl; //-> 예외처리 infinity -> cal.div(10,19) = inf

}