#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
 
#define limit 8
 
//회원가입 함수
void join(char a[],int i); //가입
int login(char a[],int i); //로그인
 
int main()
{
    char id[limit+1] = "";
    char password[limit + 1] = "";
    int key_code;
 
    puts("<회원가입>");
    puts("글자수 : 8글자 이내");
    puts("글자제한 : 영어 소문자와 숫자만 사용가능");
    puts("주의사항은, 아이디와 비밀번호 동일하게 적용");
 
    join(id,0);
    join(password,1);
 
    system("cls");
    puts("회원가입이 완료되었습니다.");
    puts("");
    puts("로그인 하세요.");
 
    do
    {
        key_code = (login(id, 0) && login(password, 1));
 
        if (key_code == 1)
            puts("로그인 되었습니다.");
        else
            puts("로그인에 실패했습니다.");
    } while (key_code != 1);
 
    return 0;
}
 
void join(char a[], int i)
{
    if (i == 0)
    {
        puts("아이디를 입력하시오");
        scanf("%s", a);
    }
 
    if (i == 1)
    {
        puts("비밀번호를 입력하시오");
        scanf("%s", a);
    }
 
    char *p = a;
 
    out:
 
    while (strlen(a) > limit)
    {
        puts("글자수를 초과했습니다");
        scanf("%s", a);
    }
 
    //do
    {
        for (int i = 0; i <= limit; i++)
        {
            if (islower(*(p + i)) == 0)
            {
                if (isdigit(*(p + i)) == 0)
                {
                    if (*(p + i) != NULL)
                    {
                        printf("%s\n", a);
                        puts("잘못된 문자가 입력되어 있습니다.");
                        scanf("%s", a);
                        goto out;
                        //break;
                    }
                }
            }
        }
        //break;
    } while (1);
 
    puts("");
}
 
int login(char a[], int i)
{
    char arr[limit + 1] = "";
 
    if (i == 0)
    {
        printf("아이디 : ");
        scanf("%s", arr);
    }
 
    if (i == 1)
    {
        printf("비밀번호 : ");
        scanf("%s", arr);
    }
 
    if (strcmp(a, arr) != 0)
        return 0;
    else
        return 1;
 
}
