// Check if an array is a subset of another
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>arr1(8);
  vector<int>arr2(6);
  int count;
  cout<<"enter elements of arr1:";
  for(int i=0;i<=arr1.size()-1;i++)
  {
    cin>>arr1[i];
  }
  cout<<"enter elements of arr2:";
  for(int j=0;j<=arr1.size()-1;j++)
  {
    cin>>arr2[j];
  }

  for(int i=0;i<=arr2.size()-1;i++)
  {
    for(int j=0;j<=arr1.size()-1;j++)
    {
      if(arr2[i]==arr1[j])
       {
        count++;
        break;
       }      
    }
  }
  if(count==arr2.size())
  {
    cout<<"array2 is a subset of array1";
  }
  else
  {
    cout<<"array2 is not a subset of array1";
  }
}