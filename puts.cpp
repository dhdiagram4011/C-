#include <stdio.h> //표준 입출력 함수를 위한 함수 원형 탑제
#include <iostream>

using namespace std;

int main(void) {
    char str[100]; //문자열 제한(100글자로 제한)
    for (int i = 0; i < 3; i++) //for문 안에서 2번까지만 input/output 반복함 
    {
        std::cout << "input : " << endl;
        gets(str);

        std::cout << "output : " << endl;
        puts(str);
    }
        return 0;
}