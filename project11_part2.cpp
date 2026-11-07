#include <iostream>
using namespace std;
#include <vector>

void normalization ( vector<int> &n )
{
    for(int i = 0 ; i<n.size();i++)
    {
        n[i]=n[i]*2;  
    }
}

int main ()
{
 
    vector<int> kaka {12,14,15,21};

    normalization (kaka);

    for (int i = 0; i<kaka.size();i++)

    cout<<kaka[i]<<" ";
}
