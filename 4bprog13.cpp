#include <iostream>
using namespace std;
#define MAX_SIZE 100
void printArray(int arr[],int begin,int len);
int main()
{
    int arr[MAX_SIZE];	
    int n,i;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    cout<<"Elements in the array: "<<endl;
    printArray(arr,0,n);
	return 0;
}

void printArray(int arr[],int begin,int len)
{
	if(begin>=len)
	   return;
	cout<<arr[begin];
	printArray(arr,begin+1,len);
}