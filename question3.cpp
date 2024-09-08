//Find the first non-repeating element in the array .

#include<iostream>
#include<vector>
using namespace std;
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
  int no=0;
  bool flag=true;

  for(int i=0;i<=v.size()-1;i++)
  {
    for(int j=i+1;j<=v.size()-1;j++)
    {
      if(v[i]==v[j])
      {
            
      }
      else
      {
        no=v[i];
        if(no!=0)
        {
          flag=false;
        }
      }
      if(flag==false){
       break;
      }
    }
    if(flag==false)
    {
       break;
    }  
  }
  cout<< no;
}