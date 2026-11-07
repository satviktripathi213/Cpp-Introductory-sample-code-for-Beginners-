#include <iostream>
using namespace std;

int main ()
{

int Price;
int quantity;
double GST;
double Discount;

cout<<"tell the price: ";
cin>>Price;
cout<<"tell the quantity";
cin>>quantity;
cout<<"tell the GST%";
cin>>GST;
cout<<"tell the discount%: ";
cin>>Discount;

double FinalPrice = (Price+(GST/100)*Price-(Discount/100)*Price)*quantity;
cout<< FinalPrice;




}