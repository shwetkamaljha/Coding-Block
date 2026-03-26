#include<iostream>
using namespace std;
int main()
{     int n;
    int key;
    cout<<"Enter Size of Array: ";
    cin>>n;
    int a[n];
    cout<<"Enter element of Array: "<<endl;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }  
    cout<<"Enter element to search: ";
    cin>>key;
    
    for(int i=0;i<n;i++){
        if(a[i] == key){
            cout<<"At Index: "<<i;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}

