#include <iostream>
using namespace std;

int main (){
    //length

    string name;
    cin>>name;

    cout<<name.length()<<endl;

    //more than one word as a input

    // get line is used to write strings thus allowing spaces
    string lala;
    getline(cin,lala);
    cout<<lala.length()<<endl;

    //counting number of vowels
    //for string "" for character'' and characters to be compared seperately with or 

    int vowels=0;
    for (int i=0;i<lala.length()+1;i++)
    {
        if(lala[i] == 'a' || lala[i]=='e' || lala[i] == 'i' || lala[i] == 'o'|| lala[i] == 'u')
        {

        vowels++;

        }

    }

    cout<<vowels;


}
