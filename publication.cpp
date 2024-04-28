#include <iostream>
#include <string>
using namespace std;

class publication{
    protected:
        string title;
        float price;
    public:
        publication():title(""),price(0.0){}
        void getdata(){
            cout<<"Enter the title: ";
            cin>>title;
            cout<<"Enter the price: ";
            cin>>price;
        }
        void putdata(){
            cout<<"Name: "<<title<<endl;
            cout<<"Price: "<<price<<endl;
        }
};

class Book: public publication{
    int page_count;
    public:
        Book():page_count(0){}
        void getdata(){
            publication::getdata();
            cout<<"Enter the page count: ";
            cin>>page_count;
            cout<<endl;
        }
        void putdata(){
            publication::putdata();
            cout<<"Page count: "<<page_count<<endl;
        }
};

class Tape: public publication{
    float playing_time;
    public:
        Tape():playing_time(0){}
        void getdata(){
            publication::getdata();
            cout<<"Enter the playing time: ";
            cin>>playing_time;
        }
        void putdata(){
            publication::putdata();
            cout<<"Playing Time: "<<playing_time<<endl;
        }
};

int main(){
    Book b1;
    Tape t1;
    cout<<"Enter the book details: \n";
    b1.getdata();

    cout<<"Enter the tape details: \n";
    t1.getdata();

    cout<<"Book Details: \n";
    b1.putdata();

    cout<<"Tape Details: \n";
    t1.putdata();

    return 0;
}