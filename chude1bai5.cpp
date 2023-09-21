#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int *arr = new int[n];

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int max = arr[0];
    int maxmod3 = arr[0];
    int maxnmod3 = arr[0];

    for (int i=0; i<n; i++){
        if (max<arr[i]) max = arr[i];
    }

    for (int i=0; i<n; i++){
        if (maxmod3<arr[i] && arr[i] % 3 ==0) maxmod3 = arr[i];
    }

    for (int i=0; i<n; i++){
        if (maxnmod3<arr[i] && arr[i] % 3 != 0) maxnmod3 = arr[i];
    }

    cout << "max = " << max << "\n" << "max chia het cho 3 = " << maxmod3 << "\n" << "max khong chia het cho 3 = " << maxnmod3;
    return 0;
}
