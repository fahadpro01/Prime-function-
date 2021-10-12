#include<iostream>
#include <math.h>
using namespace  std;


bool Prime(int n){
  for(int i=2;i<=sqrt(n);i++){
  if(n%i==0){
  
  return false;
  }
  }

  return true;
  }



int main()
{
  int a,b;

  cin>>a;
  cin>>b;

  for(int i=a;i<=b;i++){
    if(Prime(i))
    {
      cout<<i <<endl;
    }
  }

}
