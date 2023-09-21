#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int *arr = new int[n];

    for (int i=0; i<n; i++)
        cin >> arr[i];

    for (int i=0; i<n; i++){
        if (arr[i] % 2 == 0) cout << arr[i] <<  " le so chan" << endl;
        else cout << arr[i] << " la so le" << endl;
    }
    return 0;
}
