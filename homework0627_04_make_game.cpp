#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

/*
만들고 싶은 게임에서 사용할 추상 클래스나 최상단 클래스가 될만한 클래스를 작성해보자.
왜 필요한지 왜 그렇게 만들었는지 설명해보자
*/

//1. 만들고 싶은 게임 --> 음악디제잉 게임. (손으로 디제잉, 원판 돌리기)


//뮤직 디제잉 게임의 기능정의
class MusicDJGame{ //게임이름 : 뮤직디제잉게임
    private:
        string copyrightHolder; //이름
        int age; //게임제한연령
        string musicName; //음악이름
        string playTime; //재생시간
    public:
        string getMusicName() { return musicName; }
        string getPlayTime() { return playTime; }
        void helpkey(){
            //도움말
        }
        void SoundPlay(){
            //음악재생기능
        }
        void SoundStop(){
            //음악중지기능
        }
        void musicSelect(){
            //음악선택기능
        }
        void musicPrice(){
            //음악구매기능
        }
        void musicSave(){
            //음악저장기능
        }
        void beatCtrl(){
            //음악비트조절기능
        }
//        virtual ~MusicDJGame() {} // 게임 종료 , 소멸자
//        virtual void MusicSelect()=0; //가상함수
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


//class 상속
class Music03 : public MusicDJGame
{
    public:
}


class DJSounding{ //게임 사운드 재생기능
    private:
        char sound; //사운드 기능 
    public:
        char getSound() { return sound; } //사운드 기능
        void SoundPlay(){ //사운드재생기능 --> 실제 사운드 재생기능 대신 0부터 100까지 숫자 증가출력 
            for (int i = 0; i >= 100; i++){
                cout << i << endl;
            }
        }
        void SoundStop(){ //사운드중지기능
            cout << "디제잉을 중지합니다" <<  endl;
        }
        void SoundRevert(){ //사운드되돌리기 기능
            for (int i = 100; i <= 0; i-- ){ //사운드 되돌리기 기능 --> 실제 사운드 되돌리기 기능 대신 숫자 감소출력
                cout << i << endl;
            }
        }
        void SoundDownload(){ //사운드 다운로드 기능
            for (int i = 0; i <= 15; i++ ){
                if ( i == 5 )
                    cout << i << endl;
                    cout << "음악 다운로드를 시작합니다" << endl;
                if ( i == 10)
                    cout << "음악 다운로드가 완료되었습니다" << endl;
            }
        }

        void SoundPayment(){ //사운드 구매기능
                string answer;
                cout << "해당 음악을 구매 하시겠습니까?(yes 또는 no 만 입력 가능합니다)" <<  endl;
                cin >> answer;
                cout << answer << "를 선택하셨습니다" << endl;
            }

        void MusicPlay(){
            string select;
            const char* selectResult = "yes"; //char* --> 문자열, 포인터 변수(*)는 문자열을 담기 위하여 사용
            cout <<"현재 재생되고 있는 음악을 Ctrl 하시겠습니까?(yes or no만 입력가능)" << endl;
            cin >> select;
            if (strcmp(select, selectResult) == 0)  //ctrl ok //strcmp --> 두개의 문자열이 같은지 다른지 검사
                cout << "음악을 조정합니다" << endl;
           else if (strcmp(select, selectResult) == 0)
                cout << "현 상태를 유지합니다" << endl;
        }
};


class DJFunction{                               //디제잉 LP판 조작기능
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



int main(void) //메인함수는 프로그램의 시작 인자를 넘겨줄 수 있음.
{
    Music01 Giveme5; //Giveme5 -->  음악이름
    Giveme5.MusicSelect();
    Music02 Trip; // Trip --> 음악이름
    Trip.MusicSelect();
    cout << "Trip" << endl;

    DJSounding sounding = DJSounding();
    sounding.SoundPlay();
    sounding.SoundStop();
    sounding.SoundRevert();
    sounding.SoundDownload();
    sounding.SoundPayment();
    sounding.MusicPlay();

    DJFunction player = DJFunction();
    player.LPleftConsole();
    player.LPrightConsole();
    player.LPEmergencyStop();

}


















