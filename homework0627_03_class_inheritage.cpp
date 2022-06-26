#include <stdio.h>
#include <iostream>

/*
1. 동물클래스 생성
2. 동물 클래스를 상속받아 사람클래스 생성
3. 동물 클래스를 상복받아 고양이클래스 생성
4. 사람이 고양이에게 음식을 먹이게?
5/ 고양이가 사람을 공격하게?
*/

using namespace std;


class Animal {  //동물클레스 생성
    private:
        int age; //나이
        int height; //키
        int weight; //몸무게
        char gender; //성별
        char habit; //습성
    public:
        Animal(int * _age, int * _height, int * _weight, char * gender, char * habit);  //_{name} --> 생성자
        void Print() { cout << "동물" << endl; }
};


class Human : public Animal{ //동물 클레스를 상속받아 사람클레스 생성
    private:
        char name;
        char hobby;
    public:
        Human(int _age, int _height, int weight, char * gender, char * habit, char * name, char * hobby);
        void Print() { cout << "사람" << endl; }

};

class Cat: public Animal { //동물 클래스를 상복받아 고양이클래스 생성
    private:
        char food; //먹이
        char scientific_name; //학명
    public:
        Cat(int _age, int _height, int weight, char * gender, char * habit, char * food, char * scientific_name);
        void Print() { cout << "고양이" << endl; }
};


//사람이 고양이에게 음식을 먹이게?
class Cat : public Human {
    private:
        char food;
        char scientific_name;
    public:
        Cat(int _age, int _height, int weight, char * gender, char * habit, char * food, char * scientific_name);
        void Print() { cout << "사람이 고양이에게 음식을 먹이게?" << endl; }
};



//고양이가 사람을 공격하게?
class Human : public Cat {
    private:
        char food;
        char scientific_name;
    private:
        Human(char * _name, char *_hobby, char * _food, char * scientific_name);
};


int main(void)
{
    Animal* ptr;
    Animal obj_a;
    Human obj_b;
    Cat obj_c;
    
    ptr = &obj_a;
    ptr->Print();
    ptr = &obj_b;
    ptr->Print();
    ptr = &obj_c;
    ptr->Print();
    return 0;
}