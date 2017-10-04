#include <iostream>
using namespace std;
#define MAX_SIZE 50

int maximum(int array[], int index, int len)
{
    int max;
    if(index >= len-2)
    {
        if(array[index] > array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }
    max = maximum(array, index + 1, len);
    if(array[index] > max)
        return array[index];
    else
        return max;
}
int minimum(int array[], int index, int len)
{
    int min;
    if(index >= len-2)
    {
        if(array[index] < array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }
    min = minimum(array, index + 1, len);
    if(array[index] < min)
        return array[index];
    else
        return min;
}
int main()
{
    int array[MAX_SIZE], n, max, min;
    int i;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    cout<<"Enter the array elements: "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    max = maximum(array, 0, n);
    min = minimum(array, 0, n);
    cout<<"Minimum element of the array: "<<min<<endl;
    cout<<"Maximum element of the array: "<<max<<endl;
    return 0;
}


