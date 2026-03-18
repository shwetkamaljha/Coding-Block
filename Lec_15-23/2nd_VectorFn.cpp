#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> a = {2,5,7,6,3,8,10};
    sort(a.begin(),a.end());
    cout<<endl<<"Sorting Order Ascending"<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    cout<<endl<<"Sorting Order Descending"<<endl;
    sort(a.begin(),a.end(),greater<int>());
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    vector<int> b={2,3,4,5,6};
    reverse(b.begin() ,  b.end());
    cout<<endl<<"Reverse Order"<<endl;
    for(int i=0; i<b.size(); i++)
    {
     cout<<b[i]<<" ";
    }

    //vector ke first number par konsa number padha hai
      cout<<endl<<"First element "<<a.front()<<endl;

    //yeh batata hai ki vector ke last element par konsa number padha hai
    cout<<endl<<"Last element "<<a.back()<<endl;
   
    //humne particular index par pata krna hai kon sa number pada hai
    cout<<"Particular Index"<<a.at(2)<<endl;

    //hume vector k bich ek number insert karna hai 

    cout<<"After inserting"<<endl;
    a.insert(a.begin()+2,100);
    for(int i=0; i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //poori vector se saare element hatane hai
    a.clear();

    if(a.empty())
    {
        cout<<"Yes vector is empty"<<endl;
    }
    else {
        cout<<"Vector is not empty";
    }
    return 0;
}