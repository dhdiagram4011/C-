#include <iostream>

class Animal
{
    public:
        void sleep() const
        {
            std::cout << "I'am sleeping" << std::endl;
        }
};

class Human : public Animal
{
    public:
        void driveCar() const
        {
            std::cout << "I'am driving" << std::endl;
        }
};

int main(int argc, char const *argv[])
{
    Human nocope;
    nocope.driveCar();
    nocope.sleep();

    return 0;
}
    
