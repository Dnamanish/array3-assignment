//Find the factorial of a large number.
#include<iostream>
#include<vector>
using namespace std;
 int factorial(int n)
 {
    if(n==0||n==1)
    {
        return 1;
    }
    else
     return n*factorial(n-1);
 }
int main()
{
  vector<int>v;
  v.push_back(6);
  v.push_back(3);
  v.push_back(7);
  v.push_back(1);
  v.push_back(2);
  v.push_back(9);
  v.push_back(0);
  v.push_back(3);
  int largest=v[0];
  for(int i=1;i<=v.size()-1;i++)
  {
    if(v[i]>largest)
    {
        largest=v[i];
    }
  }
  
  int result=factorial(largest);
  cout<<"Factorial of largest number is :"<< result;
  








}