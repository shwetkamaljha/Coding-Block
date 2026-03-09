#include<iostream>
using namespace std;
    int main()
    {
     int a, b;
     cin>>a>>b;
     int ans = 1 ;
     for(int i=min(a,b); i>=2; i--)
     {
        if(a%i==0 and b%i==0){
        ans =i;
        break;
        }
     }
     cout<<ans<<endl;

     return 0;
    }

