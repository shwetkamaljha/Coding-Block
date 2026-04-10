#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
     int r ,c;
    cin>>r>>c;
    vector <vector<int>> arr (r , vector<int>(c));

    cout << "Enter elements matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
    return 0;
}