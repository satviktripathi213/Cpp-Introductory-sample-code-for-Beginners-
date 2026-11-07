#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main(){
    vector<int> kaka {1,14,16,111,11}; 
    //sort for increasing order
    sort(kaka.begin(),kaka.end());
    for(int i=0;i<kaka.size();i++)
    {
        cout<<kaka[i]<<" ";
    }
cout<<endl;
// sort but with greater int gives decreasing order

vector <int> lala {12,111,623,123,634};
sort(lala.begin(),lala.end(),greater<int>());
for(int i=0;i<lala.size();i++)
{cout<<lala[i]<<" ";}

//reverse for reverse
//reverse(kaka.begin(),kaka.end());
//finding something

auto finding = find(lala.begin(),lala.end(),123);
// auto means i dont know data type you find yourself
if (finding != lala.end())
{
    cout<<"Found"<<endl;

}
else
{
    cout<<"Not Found";
}

//for array
int fafa[6] {12,16,111,654,33,4};
sort(fafa,fafa+6);
reverse(fafa,fafa+6);
for (int i = 0; i<6;i++)
{
    cout<<fafa[i]<<" ";
}
cout<<endl;
auto shit = find(fafa,fafa+6,33);
if (shit != fafa+6)

{
    cout<<"found";

}
else
{
    cout<<"Not Found";
}


}