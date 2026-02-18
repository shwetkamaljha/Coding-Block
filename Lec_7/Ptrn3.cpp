#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter No. ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
    	//space
        for (int j = 1; j <= i-1; j++) {
            	cout<<"_ ";
	        }
        for (int k = 1; k <=2*(n-i+1)-1; k++) {
        	cout<<"* ";
        }
	        
        cout << endl;
    }
    return 0;
}
//skj

