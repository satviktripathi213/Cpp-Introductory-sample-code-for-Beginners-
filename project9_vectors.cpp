#include <iostream>
#include <vector>
using namespace std;


//vectors can hold values without a fixed number unlike array where you have to define the number 

int main() 
{

vector<int> kaka;

//to add pushback 

kaka.push_back(10);
kaka.push_back(20);
kaka.push_back(30);

for (int i=0;i<kaka.size();i++)
{
    cout<<kaka[i]<<" "<<endl;
}

// v.pop_back() means removing the last element
//v.front() is the first element
//v.back() is the last elemetn


// reversing a vector

int n;
cout<<"how many elements are there lil niggu"<<endl;
cin>>n;
cout<<"write the elements now niggu"<<endl;
vector<int> lala;
for (int i=0; i<n; i++)
{
    int x;
    cin>>x;
    lala.push_back(x);
}

for(int i=0; i<n;i++)
//.empty() a float thing which can be true or false true when it is empty
{
    cout<<lala.back()<<" ";
    lala.pop_back();
}



}