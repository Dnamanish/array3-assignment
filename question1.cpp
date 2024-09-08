// Count the number of triplets whose sum is equal to the given value x.

#include<iostream>
#include<vector>
using namespace std;
int main()
{ 
  vector<int>v1;
  v1.push_back(6);
  v1.push_back(3);
  v1.push_back(7);
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(9);
  v1.push_back(0);
  v1.push_back(3);
  v1.push_back(2);
  v1.push_back(1);
  v1.push_back(5);
  v1.push_back(8);

  int target,n1,n2,n3;
  cout<<"Enter value for target:";
  cin>>target;
  for(int i=0;i<=v1.size()-1;i++)
  {
    for(int j=i+1;j<=v1.size()-1;j++)
    {
      for(int k=j+1;k<=v1.size()-1;k++)
      {
       if(v1[i]+v1[j]+v1[k]==target)
        {
          n1=v1[i];
          n2=v1[j];
          n3=v1[k];
          cout<<"("<< n1 <<","<< n2 <<","<<n3<<")"<<endl;
        }
      }
    }
  }

}