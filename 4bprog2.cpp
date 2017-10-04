#include <iostream>
using namespace std;

int print(int lowlim,int uplim)
{
  if(lowlim>uplim)
    return 0;
  else
  {
    if(lowlim!=0)
    {
      cout<<" "<<lowlim;
    }
  }
  print(lowlim+1,uplim);
}

int main()
{
  int lowlim,uplim;
  cout<<"Enter the lowlimit: "<<endl;
  cin>>lowlim;
  cout<<"Enter the uplimit: "<<endl;
  cin>>uplim;
  cout<<"\n numbers are: "<<endl;
  print(lowlim,uplim);
    return 0;
}