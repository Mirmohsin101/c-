//reading multiple lines

#include <iostream>
using namespace std;

int main()
{
    const int max = 1000;
    char str[max];
    cout<<"\n Enter the text: ";
    cin.get(str,max,'9');  // terminate with 9
    cout<<endl<<"you entered : "<<str;
    return 0;
}