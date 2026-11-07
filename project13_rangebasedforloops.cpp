using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
int main (){
//range based loops to avoid the hassle to type loop again and again

vector<int> kaka = {12,34,54,123};

// for just printing no change
for(int x : kaka)
{
    cout<<x<<" "<<endl;
}


// for printing and changing the original value

for( int &x : kaka)
{
    x=x+5;
    cout<<x<<" "<<endl;
}

//for printing without change but no doubling of variable (a efficiency thing)


for ( const int &x : kaka)
{
    cout<<x<<" "<<endl;
}


//finally taking abuot pairing 

pair <int , string> nigger (12,"lalaland");
cout<<nigger.first<<endl;
cout<<nigger.second<<endl;


//pairing the vectors
vector<pair<int,int>> niga = {{19,114},{15,16},{90,32}};

sort(niga.begin(),niga.end());

for (pair<int,int> x : niga)
{
    cout<<x.first<<",";
    cout<<x.second<<endl;
}
for (pair<int,int>x : niga)
{
cout<<"this is the roll no " << x.first<<endl;
cout<<"this is the bench no " << x.second<<endl;
}
}