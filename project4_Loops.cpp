#include <iostream>
using namespace std;

int main()
{
int number;
cout<<"enter a number";
cin>>number;
//multiplication table

for(int i=1; i<=10;i++)
{

    cout<<number<<" X "<<i<<" = "<<number*i<<endl;
}

//sum till N
int sum;
sum=0;
for(int i= 1; i<=number; i++)
{
    sum=i+sum;
if(i<number)
{
    continue;
}

cout<<"this is the sum of all natural numbers till "<<number <<" "<<sum<<endl;

}
//factorial
int factorial;
factorial=1;
for (int i=1;i<=number;i++)
{
    factorial=factorial*i;
    if(i<number)
    {
        continue;
    }
    cout<<"this is the factorial "<<factorial;
}

}
