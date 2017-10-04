#include<iostream.h> 
#include<conio.h> 
using namespace std;
void main() 
{ 
      int total,sum(int),sum1(int),total1; 
     // clrscr(); 
      total=sum(2); 
	  total1=sum1(1);
      cout<<"Sum Of All Even Numbers From 0 To 10 : "<<total; 
	  cout<<"Sum of all odd numbers from 1 to 10: "<<total1;
      //getch(); 
} 
        int sum(int i) 
         { 
            static int even=0; 
            if(i<=10) 
             { 
                 even=even+i; 
                 sum(i+2); 
              } 
            return even; 
          } 
		int sum1(int j)
		{
			static int odd=0;
			if(j<=10)
			{
				 odd=odd+j;
				 sum1(j+2);
			}
			return odd;
		}
