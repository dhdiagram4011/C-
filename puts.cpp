#include <stdio.h> //표준 입출력 함수를 위한 함수 원형 탑제
#include <iostream>
#include <fstream>


using namespace std;

int main(void) {

    std::ifstream in ("scenarioDatat.txt");
    std::string scenario;

    char str[100]; //문자열 제한(100글자로 제한)
    
    for (int i = 0; i < 3; i++) //for문 안에서 input/output 반복 
    {
        if(in.is_open()) {
        in >> scenario;
        std::cout << "시나리오명 : " << endl;
        gets(str);

        in >> scenario;
        std::cout << "시나리오파일(.xosc) : " << endl;
        puts(str);
        
        in >> scenario;
        std::cout << "날씨 :" << endl;
        puts(str);

        in >> scenario;
        std::cout << "EgoCar모델명 :" << endl;
        puts(str);

        in >> scenario;
        std::cout << "NPC댓수 : " << endl;
        puts(str);

        in >> scenario;
        std::cout << "도로형태 :" << endl;
        puts(str);

        in >> scenario;
        std::cout << "EgoCar속도 : " << endl;
        puts(str);
    }
        return 0;
        }        
        
}