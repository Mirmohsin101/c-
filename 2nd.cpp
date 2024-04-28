#include <iostream>
#include <string>
using namespace std;

class student
{
    protected:
        string name;
        int percentage;
    public:
        student():name(""),percentage(0)
        {}
};

class student_data: public student
{
    public:
    void get()
    {
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the percentage: ";
        cin>>percentage;
    }
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Percentage: "<<percentage<<endl;
        if (percentage > 40 && percentage <= 100)
            cout<<"Pass"<<endl;
        else if(percentage < 40 && percentage >= 0)
            cout<<"Fail"<<endl;
        else
            cout<<"Invalid Percentage"<<endl;
    }
};

int main(){
    student_data s1,s2;
    s1.get();
    s2.get();
    s1.show();
    s2.show();
}
