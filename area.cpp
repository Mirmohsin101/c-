#include <iostream>
using namespace std;

float circarea(float r){
    return 3.14*r*r;
}

int main()
{
    float r;
    cout<<"enter the radius of circle: ";
    cin>>r;
    cout<<"Area of circle = "<<circarea(r)<<endl;
}