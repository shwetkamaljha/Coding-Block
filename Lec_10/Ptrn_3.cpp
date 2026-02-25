#include<iostream>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter No. ";
        cin>>n;
        int m = (n+1)/2;
        for(int i=1 ; i<=m ; i++)
        {
            //left
            for(int j=1 ; j<=m-i ; j++)
            {
                cout<<"* ";
            }
            for(int j =1; j<=2*i; j++)
            {
                cout<<"  ";
            }
            //right
            for(int j = 1; j<=m-i; j++){
                cout<<"* ";
            }
                    cout<<endl;
        }
        for(int i=m-1 ; i>=1 ; i--)
        {
            //left
            for(int j=1 ; j<=m-i ; j++)
            {
                cout<<"* ";
            }
            for(int j =1; j<=2*i; j++)
            {
                cout<<"  ";
            }
            //right
            for(int j = 1; j<=m-i; j++){
                cout<<"* ";
            }
                    cout<<endl;
        }
        return 0;
    }