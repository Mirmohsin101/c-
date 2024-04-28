#include <iostream>
using namespace std;

class _operator
{
    int x , y;
    public:
        _operator(): x(0),y(0)
        {}
        void get(){
            cout<<"Enter the values of x and y: ";
            cin>>x>>y;
        }
        void show(){
            cout<<x<<endl<<y;
        }
        _operator operator +(_operator m)
        {
            _operator temp;
            temp.x = x + m.x;
            temp.y = y + m.y;
            return temp;
        }
};

int main(){
    _operator p1, p2, p3;
    p1.get();
    p2.get();
    p3 = p1 + p2;
    p3.show();
}
