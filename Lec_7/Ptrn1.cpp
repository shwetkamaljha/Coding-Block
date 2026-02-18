#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter No. ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
    	//space
        for (int j = 1; j <=2*i-2; j++) {
            	cout<<"_ ";
	        }
        for (int k = 1; k <=n-i+1; k++) {
        	cout<<"* ";
        }
	        
        cout << endl;
    }
    return 0;
}

