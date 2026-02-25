#include<iostream>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter No. ";
        cin>>n;
        for(int i=1 ; i<=n ; i++)
        {
            for(int j=1 ; j<=i ; j++)
            {
                cout<<"* ";
            }
            for(int j=0;j<=2*(n-1)-1; j++)
            {
                cout<<"  ";
            }
            if(i==n){
            for (int j=1; j<=n-1;j++)
            {
                cout<<"* ";
            }
        }
            else {
                for(int j=1 ; j<=i ; j++)
                {
                    cout<<"* ";
                }
            }
        if (i==n){
            for(int j=1; j<=n-1 ; j++)
            {
                cout<<"* ";
            }
        }
        else{
            for(int j=1 ; j<=i ; j++)
            {
                cout<<"  ";
            }
        }
        cout<<endl;
        }

        return 0;
}