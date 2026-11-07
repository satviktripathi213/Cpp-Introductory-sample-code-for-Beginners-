#include <iostream>
using namespace std;
#include <vector>

int main ()
//largest number
{
int numbers[5] {43,555,233,11,3};
int largest=numbers[0];
for(int i =1;i<5;i++)
{
    if(numbers[i]>largest)
    {
        largest=numbers[i];
    }
}
cout<<largest<<endl;

//the sum of the array

int arry[6] {12,323,434,232,11,33};
int sum=0;
for (int i=0;i<6;i++)
{

    sum=sum+arry[i];
}
cout<<sum<<endl;
//number of even elements
int kaka[7] {23,54,3,12,65,88,13};
int even=0;

for (int i=0;i<7;i++)
{
if (kaka[i]%2==0)
{
    even++;
}
}
cout<<even<<endl;

// sum of even elements

int lala[4] {4,5,9,12};
vector<int> mama;
for (int i= 0; i<4;i++)
{
    if (lala[i]%2==0)
    {
        mama.push_back(lala[i]);
    }
}
int papa = 0;
for (int i=0; i<mama.size();i++)
{
    papa=papa+mama[i];
}
cout<<papa;
}