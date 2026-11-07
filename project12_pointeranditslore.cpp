#include <iostream>
using namespace std;
#include <vector>

//simply finding the adress of the variable no rocket science

int main ()
{
    int age = 21;
    cout<<"the variable is "<< age<<endl;

    cout<<"the adress of the variable is "<< &age<<endl;

    // the adress of a variable cant be stored without a pointer you may try


    int* ptr = &age;
    cout<<ptr<<endl;

    cout<<*ptr;

    
}