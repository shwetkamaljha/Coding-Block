#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40,50};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Size of array: " << size;
    return 0;
}