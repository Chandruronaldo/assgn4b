#include<iostream>
#include<math.h>
using namespace std;

int reverse(int num);
int palindrome(int num);



int main()
{
    int num;
    cout<<"Enter any number"<<endl;
    cin>>num;
    if(palindrome(num) == 1)
    {
       cout<<num<<" is a palindrome"<<endl;
    }
    else
    {
        cout<<num<<" is not a palindrome"<<endl;
    }
    
    return 0;
}

int palindrome(int num)
{
    if(num == reverse(num))
    {
        return 1;
    }
    
    return 0;
}


int reverse(int num)
{
    int digit = (int)log10(num);
    if(num == 0)
        return 0;
    return ((num%10 * pow(10, digit)) + reverse(num/10));
}