#include <stdio.h>
#include <iostream>

/*
클레스템플릿 --> 클레스의 일반화된 선언
*/

using namespace std;

template <typename T> // --> 템플릿에 전달된 인수 타입을 명시 --> 타입이름 선언

class Data // --> 클레스 템플릿 이름
{
private:
    T data_;
public:
    Data(T dt);
    T get_data();
};

int main(void)
{
    Data<string> str_data("C++ 수업");
    Data<int> int_data(12);

    cout << "str_data :" << str_data.get_data() << endl;
    cout << "int_data :" << int_data.get_data() << endl;
    return 0;
}

template < typename T >
Data<T>::Data(T dt)
{
    data_ = dt;
}

template < typename T >
T Data<T>::get_data()
{
    return data_;
}