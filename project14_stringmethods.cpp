using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cctype>

int main()
{
    string kaka = "satvik tripathi";

    //taking some character out of the strings

    string lala = kaka.substr(7,8); // to start from 7th character and to print 8 characters

    cout<<lala<<endl;
    //conversion of integer to string

    int number = 23;

    string mama = to_string(number);
    int fafa = stoi(mama);

    cout<< mama<<endl;
    cout<<fafa<<endl;
    //checking if things are things or not
    //isalnum(c): Returns true if character is a letter or number (ignores spaces/punctuation). isalpha||isdigit type shit
    //isalpha(c): Returns true if letter.
    //isdigit(c): Returns true if digit (0-9).
    //tolower(c): Converts uppercase to lowercase.
    
    int chacha = '1';

    if (isalnum(chacha))
    {

        cout<<"ji bolo";
    }

    else 
    {

        cout<<"hellnah";
    }
}