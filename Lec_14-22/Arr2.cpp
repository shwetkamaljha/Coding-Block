#include <iostream>
using namespace std;
int main() {
    // 1 size pata hai jisme number nhi pata
    int a[5];
    // 2 jisme size aur number dono pata hai
    int arr[] = {10, 20, 30, 40,50};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Size of array: " << size;
    // 3 create array jisme humne size nahi pata hai aur number bhi nhi pata hai

    // int sz;
    // cin>>sz;
    // int c[sz];

    

    return 0;
}