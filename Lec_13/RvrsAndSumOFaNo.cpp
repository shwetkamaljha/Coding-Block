#include<iostream>
using namespace std;
   int main()
    {
        // reverse of a number;
        int n; 
        cin>>n;
        int rev=0;
        while(n!=0){
            int k = n%10;
            rev= rev*10+k;
            n=n/10;
        }
        cout<<rev<<endl;
//sum of a number 
        int sum=0;
        while(n!=0){
            int k = n% 10 ;
            sum = sum +k;
            n= n /10;
        }
        cout<<sum<<endl;
        return 0;
    }

