#include <iostream>
using namespace std;

long hms_to_secs(int h, int m, int s){
    return h*3600+m*60+s;
}

int main(){
    int h,m,s;
    char c;
    cout<<"Enter the time:(HH:MM:SS)"<<endl;
    cin>>h>>c>>m>>c>>s;
    cout<<"Total seconds = "<<hms_to_secs(h,m,s);
}