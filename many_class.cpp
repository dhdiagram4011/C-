#include <iostream>

//상속 : https://blog.hexabrain.net/173

using namespace std;

class Car 
{
    private:
        int width; //차체가로길이
        int vertical_length; //차체새로길이
        int height; //차체높이
        int weight; //중량
        int price;  //차량가격
    public:
        char car_name; //차량이름
        char release_date; //출시일
        int Fuel_efficiency; //연비
        char vehicle_type; //소형,중형,대형
        int numberof_passengers; //탑승인원
}


class Road
{
    private:
        int construction_cost; //건설비용
    public:
        char road_name; //도로명
        int construdction_date; //완공일
        int construction_period; //건설기간
        char contractor; //시공사
        char road_location; //도로위치
}


class AI
{
    private:
        char algorithm_language; //알고리즘 언어
        char develop_period; //개발기간
    public:
        char algorithm_name; //알고리즘명
        char algorithm_function; //알고리즘 기능
}


class obstacle
{
    private:
        int obstacle_location; //장애물 위치
        int obstacle_weight; //장애물 무게
    public:
        char obstacle_name; //장애물 이름
        int obstacle_width; //장애물 가로길이
        int obstacle_vertical; //장애물 세로길이
        int obstacle_height; //장애물 높이
}


//상속  --> Virtual_world  는 Road를 상속함
class Virtual_world : public Road {
    private:
        char name;
    public:
        Virtual_world(char _road_name, char * construction_date, char * construction_period, char * constructor, char * road_location) : Road(_road_name, _construction_date, _constructor, _road_location)
{
    strcpy(road_name, _road_name);
}
void getup()
{
    cout << "기상" << endl;
}
void sleep()
{
    cout << "취침" << endl;
}
void eat()
{
    cout << "식사" << endl;
}
void study()
{
    cout << "공부" << endl;
}

void roadInfo()
{
    showInfo();
        cout << "도로명:" << road_name << endl; 
}
};

int main()
{
    Virtual_world vtu("창업로","2020.1.1" , "2", "경기도시공사", "창업로42");
    vtu.showInfo();
    vtu.getup();
    vtu.eat();
    vtu.study();
    vtu.sleep();

    return 0;
}
