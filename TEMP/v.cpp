#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n][3];

    for (int i=0; i<n; i++){
        for (int j=0; j<3; j++){
            cin >> a[i][j];
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<3; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}