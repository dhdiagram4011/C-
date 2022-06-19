/*
메타버스 게임에서 쓰일 SoundManager클래스를 작성해보세요!
언리얼, 유니티, SFML 등 플랫폼 종속적으로 만드셔도 되고,
더 추상화된 형태의 클래스를 디자인해서 만들어 보셔도 좋습니다!
*/

#include <iostream>
#include <windows.h>
#pragma comment(lib, "winmm.lib")
#include <mmsystem.h>
//#include <CSound.h>
#include <ctime>
#include <string>

using namespace std;


/*열거형*/
enum PlaySong{
    Track01,
    Track02,
    Track03,
    Track04,
    Track05,
};


enum StopSong{
    Track01,
    Track02,
    Track03,
    Track04,
    Track05,
}

//C# 에서만 쓰이는 코드, C++에서는 안먹힘
//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;


/*사운드의 종류*/

/* 음악을 재생하는 사운드 매니저 */

class SoundManager{
    private:
        string bgm_name;
        int play_time;
        int volume_select; //up, down

    public:
        void volume_up(){
            for (int count = 0; count <= 10; count++) {
              std::cout << count;
              std::cout << "결과는" << count << "입니다";
          }          
        } 
        void volume_down(){
            for (int count = 0; count >= 10; count--) {
              std::cout << count;
              std::cout << "결과는" << count << "입니다";
          }          
        }

        void sound_play(){
            std::cout << "에프엑스 - 누예삐오";
            time_t curTime = time(NULL);
            //timer
            struct tm *pLocal = localtime(&curTime); //*pLocal = 호출이 성공적일 경우 pLocal은 반환결과를 가리키는 포인터
            std::cout << "%04d-%02d-%02dT%02d:%02d:%02d", pLocal-> tm_year + 1900, pLocal -> tm_mon + 1, pLocal -> tm_mday, pLocal -> tm_hour, pLocal -> tm_min, pLocal -> tm_sec;
        }
        void sound_stop(StopSong song){
            //값 입력받기
            std::cout << "중지할 노래를 선택해 주세요:";
            std::cin >> song;
            if (song == Track01)
                std::cout << "노래1중지";
            else if(song == Track02)
                std::cout << "노래2중지";
            else if(song == Track03)
                std::cout << "노래3중지";
            else if(song == Track04)
                std::cout << "노래4중지";
            else if(song == Track05)
                std::cout << "노래5중지";    
        }
        void sound_on(PlaySong song){
            std::cout << "재생할 노래를 선택해 주세요:";
            std::cin >> song;
            if (song == Track01)
                std::cout << "노래1재생";
            else if(song == Track02)
                std::cout << "노래2재생";
            else if(song == Track03)
                std::cout << "노래3재생";
            else if(song == Track04)
                std::cout << "노래4재생";
            else if(song == Track05)
                std::cout << "노래5재생";
        }
        void sound_off(){
            
        }
        void sound_shuffle(){ //노래 반복재생
            int i = 0;
            while ( i <= 100){
                std::cout << "sound_shuffle :" << endl;
                i++;
            }
        }
        
};