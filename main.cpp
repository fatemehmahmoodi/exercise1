#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1,num2,sum,sub,mul,div;
    cout<<"Enter Number1 :";
    cin>>num1;
    cout<<"Enter Number2 :";
    cin>>num2;
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1%num2;

    cout<<sum<<endl;
    cout<<sub<<endl;
    cout<<mul<<endl;
    cout<<div<<endl;



    getch();
    return 0;
}

