// virtual table

#include <stdio.h>
#include <iostream>

class Animal
{
public:
    virtual void speak() //8 --> 16
    {
        std::cout << "Animal" << std::endl;
    }
    virtual ~Animal()=default;
private:
    double height;
};

class Cat: public Animal //Cat이 Animal 상속받음
{
public:
    void speak() override  //16 -> 24
    {
        std::cout << "meow~" << std::endl;
    }
private:
    double weight; //키와 몸무게 정보를 같이 가지고 있음
};

int main()
{
    Animal * polyAnimal = new Cat(); // Cat() --> Animal()로 바꾸어줄 경우 Animal의 VT를 바라봄 
    polyAnimal -> speak();
    delete polyAnimal; //오브젝트 해제
    //std::cout << "Animal Size:" << sizeof(Animal) << std::endl;
    //std::cout << "Cat Size:" << sizeof(Cat) << std::endl;
    
    return 0;
}




