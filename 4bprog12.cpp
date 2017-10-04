#include<iostream>
using namespace std;

int lcm(int a,int b)
{
   static int temp = 1;
    if(temp % b == 0 && temp % a == 0)
         return temp;
    temp++;
    lcm(a,b);
   return temp;
}

int main()
{
    int a,b,l;
    cout<<"Enter the first positive integer"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    if(a>b)
    l = lcm(a,b);
    else
        l = lcm(b,a);
    cout<<"LCM of two inttegers is "<<l<<endl;
    return 0;
}

