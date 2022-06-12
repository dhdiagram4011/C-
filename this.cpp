#include <stdio.h>
#include <iostream>

using namespace std;

class Book // Book 에서 web_book, html_book 파생됨
{
private:
    int current_page_;
    void set_percent();
public:
    Book(const string& title, int total_page);
    string title_;
    int total_page_;
    double percent_;
    void Move(int page);
    void Open();
    void Read();
    const Book& ThickerBook(const Book&);
};

int main(void)

{ 
    Book web_book("HTML과 CSS" , 350); //디폴트 생성자의 암시적 호출 --> Book(const string& title, int total_page);
    Book html_book("HTML 레퍼런스", 150); // --> Book(const string& title, int total_page);

    cout << web_book.ThickerBook(web_book).title_; //더 두꺼운 책을 출력함 --> 드라이브 코드 // web_book --> this
    return 0;
}

Book::Book(const string& title, int total_page) // Book 클레스의 생성자 원형 Book(const string& --> 복사 생성자의 원형
{
    total_page_ = total_page; // 책의 총 페이지를 초기화
    title_ = title; // 책의 제목을 초기화
    current_page_ = 0; //  현재 페이지를 0페이지로 초기화
    set_percent();
}

void Book::set_percent() { percent_ = (double) current_page_ / total_page_ * 100; }

const Book & Book ::ThickerBook(const Book& comp_book)
{
    if(comp_book.total_page_ > this->total_page_)
    {
        return comp_book;
    }
    else
    {
        return *this;
    }
}