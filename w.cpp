#include<stdio.h>
 #include <iostream>
 using namespace std ;
 int multiply(int , int) ;
 
 int main()
 {
    int a, b, c;
     
        printf("Enter two numbers to add\n");
	   scanf("%d%d",&a,&b);
	   cout << multiply(a, b) ;
	       c = a + b ;
		   printf("Sum of entered numbers = %d\n",c);
		    
		       return 0;
}

int multiply(int a , int b )
{
	return a*b ;
}

