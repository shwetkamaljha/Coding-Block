#include<iostream>
using namespace std;
// No argu No return
void greet()
{
    cout<<"Good Morning"<<endl;

}
// no argu and return
int subtract ()
{   
    int a=5;
    int b=2;
    int sub=5-2;
    return sub;
}
//  argu and no return
void hello(string name){
    cout<<"Hello "<<name<<endl;
}
// Argu and Return
int add (int a , int b){
    int c=a+b;
    return c;
}

int main(){
    greet();
    cout<<subtract()<<endl;
    hello("SKJ");
    cout<<add(10,15)<<endl;


     return 0;
    }

