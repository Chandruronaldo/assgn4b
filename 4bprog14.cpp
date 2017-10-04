#include<iostream>
using namespace std;

int arraySum(int arr[],int begin,int len)
{
	if(begin>=len)
	   return 0;
	else
	   return (arr[begin]+arraySum(arr,begin+1,len));
}

int main()
{
	int arr[100];
	int n,i,sum;
	cout<<"Enter the array size: "<<endl;
	cin>>n;
	cout<<"Enter the array elements: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sum=arraySum(arr,0,n);
	cout<<"Sum of the array elements: "<<sum<<endl;
}

