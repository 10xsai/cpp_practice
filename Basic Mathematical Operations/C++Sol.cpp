//This program consists of functions that are used to perform various basic mathematical operations such as addition , difference , multiplication
// division , permutation and to check whether or not the two inputed values are divisble by one another , there is an integer varibale time that 
// accepts the number of times the use wants to input the data and after the user inputs the value , all the functions are performed "time" times while
//the user inputs the two values n times for each round of execution.


#include<iostream>
using namespace std;


int number1 , number2 ;
int sum=0 , prod , division , diff , permu1=1, permu2=1;

void INPUT(); void SUM(); void DIFF();  void PROD(); void DIV(); void PERM(); void DIVIS(); void FACT();




void INPUT()
{
	cout<<"\nenter two numbers"<<endl;
	 cin>>number1>>number2;
}
void SUM()
{
	sum=number1+number2;
	cout<<"Sum of "<<" "<<number1<<" "<<"and"<<" "<<number2<<" "<<"is :" <<sum<<endl;
}

void DIFF()
{
	 diff=number1-number2;
	 cout<<"Absolute Difference of "<<" "<<number1<<" "<<"and"<<" "<<number2<<" "<<"is :" <<abs(diff)<<endl;
}
void PROD()
{
	prod=number1*number2;
	 cout<<"Product of "<<" "<<number1<<" "<<"and"<<" "<<number2<<" "<<"is :" <<prod<<endl;
}

void DIV()
{

   division=(max(number1 , number2))/(min(number1 , number2));
   cout<<"Division of the numbers is :" <<division<<endl;
 
}

void PERM()
{
  for(int i =number1 ; i>0 ; i--)
  {
	  permu1=permu1*i;
  }
  cout<<"Permutaion of "<<" "<<number1<<" "<<" is "<<" "<<permu1<<endl;
 
}

void FACT()
{
for(int i =number2; i>0 ;i--)
  {
	  permu2=permu2*i;
  }
 cout<<"Permutaion of "<<" "<<number2<<" "<<" is "<<" "<<permu2<<endl;
}

void DIVIS()
{
 if(number1<=number2)
 {
	 if(number2%number1==0)
	 {
		cout<<number2<<" "<<"is divisible by"<<" "<<number1<<endl;
	 } else
	 {
		 cout<<number2<<" "<<"is not divisible by"<<" "<<number1<<endl;
	 }
	 
 }
 else if (number1>=number2)
 {
   if (number1%number2==0)
	 {
		cout<<number1<<" "<<"is divisible by"<<" "<<number2<<endl;
	 } else
	 {
		 cout<<number1<<" "<<"is not divisible by"<<" "<<number2<<endl;
	 }
 }
 else
 {
	 cout<<"Neither numbers are divisible by one another "<<endl;
 }
}

int main()
{ 
	 int time;
	cout<<"Enter number of times";
    cin>>time;
	if(time>0)
	{
	while(time--)
	{
	 INPUT();
	 SUM();
	 DIFF();
	 PROD();
	 DIV();
	 PERM();
	 FACT();
	 DIVIS();
	}
	}
	else
	{
		cout<<"No Operations performed";
	}
		return 0;
}
