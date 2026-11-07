#include <iostream>
using namespace std;
#include <vector>

void add_10 (int number)
{
    number = number + 10;
    cout<<number<<endl;
}
void add_12(int &number2)
{
    number2= number2+12;
    cout<<number2<<endl;
}

void swap(int &x, int &y)
{
  
    // int z 
    // x=z
    //wont work because then z has a garbage value which get transferred to x instead of the other way around
    //z=x would still work coz the left side is the receiver side and right side is the giver side

  int z = x;
  int m = y;

    x = m;
    y = z;

}

int main()
{
    int ligma;
    cin>>ligma;

    add_10(ligma);

    cout<<ligma;

    //the value has not changed of ligma because the function is using a copy of ligma and thus 
    //creating unecessary memory space

    int sigma;
    cin>>sigma;

    add_12(sigma);

    cout<<sigma<<endl;

    // the value of sigma has changed because the function is not creating a copy rather playing with original sigma
    //thus not creating unecessary load in the memory

    // if we dont want to create a copy and also not change the original value then 
    //void printFirstElement(const vector<int> &v)

    //Homework
    //swap the values

   
    int x=10;
    int y = 20; 
    swap(x,y);

    cout<<x<<" "<<y;
}


