#include <iostream>

class Base
{
    private:
        int pri;
        void setPRI(int n)
        {
            pri = n;
        }
    public:
        int pub;
        void setPUB(int n)
        {
            pub = n;
        }
    protected:
        int pro;
        void setPRO(int n)
        {
            pro = n;
        }
};

int main(int argc, char const *argv[])
{
    Base base;
    //base.setPRI(10);

    base.pro = 10000; //public으로 바로 접근 
    // 컴파일 오류발생 : 'int Base::pri' is private within this context
    std::cout << base.pro << std::endl;

    return 0;
}