//binary to decimal
#include<iostream>
using namespace std;
//function to convert binary to decimal
int binarytodecimal(int n)
{
    int num=n;
    int dec_value=0;
    //initializing base value to 1,that is 2 power 0
    int base=1;
    int temp=num;
    while(temp) 
    {
        int last_digit=temp%10;
        temp=temp/10;
        dec_value+=last_digit*base;
        base=base*2;
    }
    return dec_value;
}
int main()
{
    //driver program to test above function
    int num=10101001;
    cout<< binarytodecimal(num)<<endl;

return 0;
}
