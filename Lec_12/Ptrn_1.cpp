#include<iostream>
using namespace std;
int main(){
    int n ;
     cout<<"Enter Number: ";
     cin>>n;
    //  int count=1;
     for(int i=1; i<=n ; i++)
     {
        for(int j=1; j<=n-i; j++){
            cout<<"\t";
        }
        for(int j=1; j<=i; j++)
        {   
            cout<<j<<"\t";
            
        }
        for(int j=i-1; j>=1; j--)
        {   
            cout<<j<<"\t";
            
        }
        for(int j=1; j<=n-i; j++){
            cout<<"\t";
        }
        cout<<endl;
     }
     return 0;

}
