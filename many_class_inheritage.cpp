#include <iostream>

//상속 : https://blog.hexabrain.net/173

using namespace std;

//맴버변수는 private
//함수는 public 으로 선언

class Car 
{
    private:
        int width; //차체가로길이
        int vertical_length; //차체새로길이
        int height; //차체높이
        int weight; //중량
        int price;  //차량가격
        char car_name; //차량이름
        char release_date; //출시일
        int Fuel_efficiency; //연비
        char vehicle_type; //소형,중형,대형
        int numberof_passengers; //탑승인원
    public:
        int getPrice() {return price;}
        int getcar_name() {return car_name;} 
        //--> 맴버함수선언
        // 자동차 구동,  직진,
        // 헤드라이트 구동
        // 깜빡이 구동
        // 와이퍼 구동
        // 트렁크 오픈
        // 라디오 on/off
        // ...
        // door open / close
        // 자동차 시동 on,off....
        // 리모콘으로 잠금 해제,
        //--> 맴벼변수 선언
        void lock(){
        
        }

        void unlock(){  //명령어 모음 , 이하
        
        }

        void open_door(){
            
        }

        void close_door(){ 
        
        }

        void engine_start(){
        
        }

        void gear_shift(){ 

        }
        
        void speed_up(){

        }

        void reduce_speed(){

        } 
        
        void direction_blinker(){

        }

        void turnOn_direction_blinker_right(){

        }

        void turnOn_direction_blinker_left(){

        }

        void change_handle(){

        }



};


class Road
{
    private:
        int construction_cost; //건설비용
        string road_name; //도로명
        int construdction_date; //완공일
        int construction_period; //건설기간
        char contractor; //시공사
        string road_location; //도로위치
    public:
        string getRoadname() { return road_name; }
        string getRoadlocation() { return road_location; }
        
};


class AI_Pathfinder //길찾기 AI , pathfinder
{
    private:
        string moving_section;//이동구간
        string arrival;//출발
        string departure;//도착치
        string waypoint;//경유지
        int traval_time;//이동시간
        int traval_price;//이동요금

    
    public: //set_get
        string getArrival() { return arrival; }
        string getdeparture() { return departure; }
        void setWayproint( string newWayporint ) { //함수 동작 방법
            waypoint = newWayporint;
        }
        
        void settraval_price( int newTraval_price ) {
            traval_price = newTraval_price;
        }

        void setmoving_section( string newMoving_section ) {
            moving_section = newMoving_section;
        }

        //길을 찾는 맴버함수
        void find_path(string arrival, string departure){
            //출발, 도착치 --> 언리얼 엔진 라이브러리 삽입
        }

  //새로운 값을 받아옴

};


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
};


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
