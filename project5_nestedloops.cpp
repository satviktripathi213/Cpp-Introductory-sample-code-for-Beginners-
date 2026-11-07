#include <iostream>
using namespace std;

int main()
{

    //square
    for (int i =1; i<=4; i++)
    {

        cout<<"*****"<<endl;
    }
    cout<<endl;

    //right triangle
   

    for (int i=1;i<=4;i++)
    
    {
     
        for(int j =0;j<i;j++)
       {
         cout<<"*";

       }
      
               cout<<endl;
    
        
    }
    cout<<endl;


    //inverted right angle triangle

    
    for (int i=1;i<=4;i++)
    
    {
     
        for(int j =5;j>i;j--)
       {
         cout<<"*";

       }
      
               cout<<endl;
        
    }

    //diamond shape aaaah shape


    for (int i=1;i <= 4;i++)
    {
      for(int j=3;j>=i;j--)
      {cout<<" ";}

      for(int k=0;k<i;k++)
      {cout<<"*";}

      for(int f=0;f<i;f++)
      {cout<<"*";}

          cout<<endl;
    }
        

}