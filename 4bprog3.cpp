#include <iostream>
using namespace std;

int even(int lowlim,int uplim)
{
  if(lowlim>uplim)
    return 0;
  else
  {
    if(lowlim%2==0)
    {
      cout<<" "<<lowlim;
    }
  }
  even(lowlim+1,uplim);
}

int odd(int lowlim,int uplim)
{
  if(lowlim>uplim)
    return 0;
  else
  {
    if(lowlim%2!=0)
    {
      cout<<" "<<lowlim;
    }
  }
  odd(lowlim+1,uplim);
}

int main()
{
  int lowlim,uplim;
  cout<<"Enter the lowlimit: "<<endl;
  cin>>lowlim;
  cout<<"Enter the uplimit: "<<endl;
  cin>>uplim;
  cout<<"\nEven numbers are: "<<endl;
  even(lowlim,uplim);
  cout<<"\nThe odd numbers are: " <<endl;
  odd(lowlim,uplim);
  return 0;
}