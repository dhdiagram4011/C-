#include <iostream>

class A
{
    public:
        int publicMember;
    protected:
        int protectedMember;
    private:
        int privateMember;
};


class B : public A
{   

};

class C : protected A
{
    
};

class D : private A
{
    
}