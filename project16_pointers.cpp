using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cctype>
// more of a login than a concept 
//this below code is only valid when there is no space or anything standard use is of while coz we dont exactly know till when to  run
//we just know the logic when to run not the mathematical condition when to run you get my point i hope
//refert to 125 valid palindrome problem for the proper solution 
int main () 
{
 vector<int> nigge {1,2,3,2,1};

 int left = 0;
 int right = nigge.size()-1;

 for (int i = 0; i<(nigge.size())/2; i++)
 {
    if (nigge[left] == nigge[right])
 {
    left++;
    right--;
 }

 
 }
 // standard while method
}