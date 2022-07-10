//함수템플릿 : 함수를 만드는 도구

#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
T adder(T n1, T n2)
{
    return n1 + n2;
}

int main(void)
{
    cout << adder<int>(1,2) << endl;
    cout << adder<double>(1.5, 2.5) << endl;
    cout << adder<int>(1.5 , 2.5) << endl;
    cout << adder<double> (3.15, 2.75) << endl;
    
    return 0;
}

