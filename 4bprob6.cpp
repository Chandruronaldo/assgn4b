#include<iostream>
using namespace std;
int sum=0,rem;
int reverse_function(int num){
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      reverse_function(num/10);
   }
   else
      return sum;
   return sum;
}
int main(){
   int num,reverse_number;
   cout<<"Enter any number: "<<endl;
   cin>>num;
   reverse_number=reverse_function(num);
   cout<<"The number after reversing is " <<reverse_number;
   return 0;
}
