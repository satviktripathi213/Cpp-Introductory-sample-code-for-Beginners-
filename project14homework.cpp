using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cctype>

int main ()
{
    string cleanstr = "";

    string s = "Hello123World";

    for (auto &x : s)
    {

        if ( isalpha(x))
        {
          
            cleanstr.push_back(tolower(x));;
            //to lower is not a function thing that will change its just a way of 
            //informing to change x to lowercase you have to type it again and again when you need it it wont 
            //change the original text to lowercase

        }
       
    }

    reverse(cleanstr.begin(),cleanstr.end());

    cout<<cleanstr;

}