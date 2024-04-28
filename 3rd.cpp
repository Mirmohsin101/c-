#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class product
{
    protected:
    string name;
    int price;
    public:
    product():name(""),price(0)
    {}
    void get(){
        cout<<"Enter the name of product: ";
        cin>>name;
        cout<<"Enter the price: ";
        cin>>price;
    }

};

class electronics: public product
{
    public:
    void show(){
        cout<<name<<setw(10)<<price<<endl;
    }
};
class clothing: public product
{
    public:
    void show(){
        cout<<name<<setw(10)<<price<<endl;
    }
};
class books: public product
{
    public:
    void show(){
        cout<<name<<setw(10)<<price<<endl;
    }
};

int main()
{
    electronics e1;
    clothing c1;
    books b1;
    e1.get();
    c1.get();
    b1.get();
    cout<<"Name"<<setw(10)<<"price"<<endl;
    e1.show();
    c1.show();
    b1.show();
}