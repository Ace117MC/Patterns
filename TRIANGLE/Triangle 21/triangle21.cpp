#include <iostream>

using namespace std;

int main () {
    int n=5;
    for(int i=n; i>=1; i--) {
        for(int j=n-1; j>=i; j--) {
            cout<<"  ";
        }
        for(int k=1; k<=i; k++) {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
