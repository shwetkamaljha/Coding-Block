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

    cout << "\nWave-Column-Print\n";
    for (int j = 0; j < c; j++) {
        if(j%2==0){
             for (int i = 0; i < r; i++) {
            cout << arr[i][j] << " ";
        }
        }
        else{
            for(int i=r-1;i>=0;i--){
                cout << arr[i][j] <<" ";
            }
        }
       
        cout << endl;
    }

    return 0;
}