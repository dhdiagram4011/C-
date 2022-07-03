#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

/*
����� ���� ���ӿ��� ����� �߻� Ŭ������ �ֻ�� Ŭ������ �ɸ��� Ŭ������ �ۼ��غ���.
�� �ʿ����� �� �׷��� ��������� �����غ���
*/

//1. ����� ���� ���� --> ���ǵ����� ����. (������ ������, ���� ������)


class MusicDJGame{ //�����̸� : ���������װ���
    public:
        virtual ~MusicDJGame() {} // ���� ���� , �Ҹ���
        virtual void MusicSelect()=0; //�����Լ�
};


//������ �����ϸ� ȭ�鿡 �޽����� ����� �ֱ� ���Ͽ� �ʿ��� (01�� ���� ���ý�)

class Music01 : public MusicDJGame //�����̸�
{
    public:
        virtual void MusicSelect() { cout << "01�������� ���õǾ����ϴ�" << endl; }
};


//������ �����ϸ� ȭ�鿡 �޽����� ����� �ֱ� ���Ͽ� �ʿ��� (02�� ���� ���ý�)
class Music02 : public MusicDJGame
{
    public:
        virtual void MusicSelect() { cout << "02�������� ���õǾ����ϴ�" << endl; }
};


class DJSounding{ //���� ���� ������
    private:
        char sound; //���� ��� 
    public:
        char getSound() { return sound; } //���� ���
        void SoundPlay(){ //���������� --> ���� ���� ������ ��� 0���� 100���� ���� ������� 
            for (int i = 0; i >= 100; i++){
                cout << i << endl;
            }
        }
        void SoundStop(){ //�����������
            cout << "�������� �����մϴ�" <<  endl;
        }
        void SoundRevert(){ //����ǵ����� ���
            for (int i = 100; i <= 0; i-- ){ //���� �ǵ����� ��� --> ���� ���� �ǵ����� ��� ��� ���� �������
                cout << i << endl;
            }
        }
        void SoundDownload(){ //���� �ٿ�ε� ���
            for (int i = 0; i <= 15; i++ ){
                if ( i == 5 )
                    cout << i << endl;
                    cout << "���� �ٿ�ε带 �����մϴ�" << endl;
                if ( i == 10)
                    cout << "���� �ٿ�ε尡 �Ϸ�Ǿ����ϴ�" << endl;
            }
        }

        void SoundPayment(){ //���� ���ű��
                string answer;
                cout << "�ش� ������ ���� �Ͻðڽ��ϱ�?(yes �Ǵ� no �� �Է� �����մϴ�)" <<  endl;
                cin >> answer;
                cout << answer << "�� �����ϼ̽��ϴ�" << endl;
            }

        void MusicPlay(){
            char select;
            cout <<"���� ����ǰ� �ִ� ������ Ctrl �Ͻðڽ��ϱ�?(yes or no�� �Է°���)" << endl;
            cin >> select;
            if ( strcmp(select, "yes") == 0)  //ctrl ok
                cout << "������ �����մϴ�" << endl;
           else if ( strcmp(select, "no") == 0)
                cout << "�� ���¸� �����մϴ�" << endl;
        }
};



class DJFunction{                               //������ LP�� ���۱��
    private:
        char LPPlayer;
    public:
        char getLPPlayer() { return LPPlayer; }
        void LPleftConsole(){ //LP�� �������� ������ ���
            cout << "�������� ���ư��ϴ�" << endl;
        }
        void LPrightConsole(){ //LP�� ���������� ������ ���
            cout << "���������� ���ư��ϴ�" << endl; 
        }
        void LPEmergencyStop(){ //LP�� ����������
            cout << "�������� ��������մϴ�" << endl;
        }
}; 



int main(void) //�����Լ��� ���α׷��� ���� ���ڸ� �Ѱ��� �� ����.
{
    Music01 Giveme5; //Giveme5 -->  �����̸�
    Giveme5.MusicSelect();
    Music02 Trip; // Trip --> �����̸�
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


















