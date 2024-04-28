#include <iostream>
using namespace std;

class Time{
    int hrs,min,sec;
    public:
    Time():hrs(0),min(0),sec(0){}
    Time (int h, int m, int s): hrs(h),min(m),sec(s){}
    void show(){
        cout<<hrs<<":"<<min<<":"<<sec<<endl;
    }
    Time operator +(Time m){
        Time temp;
        int total_sec = m.hrs*3600 + m.min *60 + m.sec + hrs*3600 + min*60 + sec;
        temp.hrs = total_sec / 3600;
        temp.min = (total_sec % 3600) / 60;
        temp.sec = total_sec % 60;
        return temp; 
    }
};
int main()
{
    Time t1(2,15,30),t2(1,45,45),t3;
    t3 = t1+t2;
    t1.show();
    t2.show();
    t3.show();
    return 0;
}