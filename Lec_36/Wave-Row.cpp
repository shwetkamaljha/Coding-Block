#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    // int arr[3][3];
    int r ,c;
    cin>>r>>c;
    vector <vector<int>> arr (r , vector<int>(c));

    cout << "Enter elements matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
     cout << "\nOriginal Matrix\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nWave-row-Print\n";
    for (int i = 0; i < r; i++) {
        if(i%2==0){
             for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        }
        else{
            for(int j=c-1;j>=0;j--){
                cout << arr[i][j] <<" ";
            }
        }
       
        cout << endl;
    }

    return 0;
}