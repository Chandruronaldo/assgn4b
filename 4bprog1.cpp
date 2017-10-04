#include <iostream>
using namespace std;

int calculatePower(int base,int powerRaised)
{
 if(powerRaised!=0)
  return(base*calculatePower(base,powerRaised-1));
 else
  return 1;
}

int main()
{
 int base,powerRaised,result;
 cout<<"Enter the base number"<<endl;
 cin>>base;
 cout<<"Enter a positive integer for power"<<endl;
 cin>>powerRaised;
 result=calculatePower(base,powerRaised);
 cout<<base<<"^"<<powerRaised<<"="<<result<<endl;
 return 0;
}

