#include <stdio.h> 
 #include<iostream>
 using namespace std;

 int lucas(int n) 
 { 
     if (n == 0) 
         return 2; 
     if (n == 1) 
         return 1; 

     return lucas(n - 1) +  lucas(n - 2); 
 } 


 int main() 
 { 
     int n ;
     cout<<"enter the position of the element of the series ";
     cin>>n;
     printf("%d", lucas(n)); 
     return 0; 
 } 
