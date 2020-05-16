#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,j,k;
    cin>>a>>b;
    if(a==1 || b==1)
    cout<<"Akshat"<<"\n";
    else
    {
      j=max(a,b);
      k=min(a,b);
      if(k%2!=0)
      cout<<"Akshat"<<"\n";
      else
      cout<<"Malvika"<<"\n";
    }
}
