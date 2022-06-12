/*
메타버스 게임에서 쓰일 SoundManager클래스를 작성해보세요!
언리얼, 유니티, SFML 등 플랫폼 종속적으로 만드셔도 되고,
더 추상화된 형태의 클래스를 디자인해서 만들어 보셔도 좋습니다!
*/


#include <iostream>
#include <windows.h>
#pragma comment(lib, "winmm.lib")
#include <mmsystem.h>
#include <CSound.h>

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*사운드의 종류*/

/* 음악을 재생하는 사운드 매니저 */

class SoundManager
{
public:
        char bgm_name; //배경음악이름
        int play_time = 0; //총 재생시간

public:
    void running_time() {
        this -> play_time ++; //재생시간 초단위로 증가
    }

    void sing_name() {
        this -> bgm_name;
    }

    void inform() {
        std::cout << "배경음악이름 :" << bgm_name << endl;
        std::cout << "재생경과시간 :" << play_time << "초" << endl; 
    }


int main() {
    CSound* sound = new CSound("Sugarsweet.wav", false);
    PlaySound(TEXT("Sugarsweet.wav"), NULL, SND_LOOP);

    while(true){
        if() {
            sound -> play(); //맴버접근연산자 , sound의 play에 접근
        }
        if() {
            sound -> pause(); //맴버접근연산자 , sound의 중지에 접근
        }
        if() {
            sound -> resume(); //맴버접근연산자 , sound의 재시작에 접근
        }
        if() {
            sound -> stop(); ////맴버접근연산자 , sound의 종료에 접근
        }
    }
}




};






