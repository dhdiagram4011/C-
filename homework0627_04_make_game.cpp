#include <stdio.h>
#include <iostream>

using namespace std;


/*
만들고 싶은 게임에서 사용할 추상 클래스나 최상단 클래스가 될만한 클래스를 작성해보자.
왜 필요한지 왜 그렇게 만들었는지 설명해보자
*/

//1. 만들고 싶은 게임 --> 음악디제잉 게임.  (손으로 디제잉, 원판 돌리기)


class MusicDJGame{ //게임이름 : 뮤직디제잉게임
    public:
        virtual ~MusicDJGame() {} // 게임 종료 , 소멸자
        virtual void MusicSelect()=0; //가상함수 선언 --> 기능 : 디제잉할 음악을 선택하는 기능
};


//음악을 선택하면 화면에 메시지를 출력해 주기 위하여 필요함 (01번 음악 선택시)
class Music01 : public MusicDJGame //게임이름
{
    public:
        virtual void MusicSelect() { cout << "01번음악이 선택되었습니다" << endl; }
};


//음악을 선택하면 화면에 메시지를 출력해 주기 위하여 필요함 (02번 음악 선택시)
class Music02 : public MusicDJGame
{
    public:
        virtual void MusicSelect() { cout << "02번음악이 선택되었습니다" << endl; }
};


class DJSounding{ //게임 사운드 재생기능
    private:
        char sound; //사운드 기능 
    public:
        char getSound() { return sound; } //사운드 기능
        void SoundPlay(){ //사운드재생기능 --> 실제 사운드 재생기능 대신 0부터 100까지 숫자 증가출력 
            for (int i = 0; i >= 100; ++i){
                cout << i << "" ;
            }
        }
        void SoundStop(){ //사운드중지기능
            cout << "디제잉을 중지합니다" <<  endl;
        }
        void SoundRevert(){ //사운드되돌리기 기능
            for (int i = 100; i <= 0; --i ){ //사운드 되돌리기 기능 --> 실제 사운드 되돌리기 기능 대신 숫자 감소출력
                cout << i  << "" ;
            }
        }
        void SoundDownload(){ //사운드 다운로드 기능
            for (int i = 0; i < 100; ++i ){
                if ( i == 5 )
                    cout << "음악 다운로드를 시작합니다" << endl; 
            }
        }
        void SoundPayment(){ //사운드 구매기능
                char answer;
                cout << "해당 음악을 구매 하시겠습니까?(yes 또는 no 만 입력 가능합니다)" <<  endl;
                cin >> answer;
        }
};


class DJFunction{ //디제잉 LP판 조작기능
    private:
        char LPPlayer;
    public:
        char getLPPlayer() { return LPPlayer; }
        void LPleftConsole(){ //LP판 왼쪽으로 돌리기 기능
            cout << "왼쪽으로 돌아갑니다" << endl;
        }
        void LPrightConsole(){ //LP판 오른쪽으로 돌리기 기능
            cout << "오른쪽으로 돌아갑니다" << endl; 
        }
        void LPEmergencyStop(){ //LP판 비상정지기능
            cout << "디제잉을 비상중지합니다" << endl;
        }
}; 


int main(void)
{
    Music01 Giveme5; //Giveme5 -->  음악이름
    Giveme5.MusicSelect();
    Music02 Trip; // Trip --> 음악이름
    Trip.MusicSelect();
    return 0;
}


DJSounding sounding = DJSounding();

sounding.SoundPlay();
sounding.SoundStop();
sounding.SoundRevert();
sounding.SoundDownload();
sounding.SoundPayment();

DJFunction function = DJFunction();

function.LPleftConsole();
function.LPrightConsole();
function.LPEmergencyStop();












