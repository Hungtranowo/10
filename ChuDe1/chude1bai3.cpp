#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int *arr = new int[n];

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int sum = 0, sumOfOdd = 0, sumOfEven = 0;

    for (int i=0; i<n; i++){
        sum += arr[i];
        if (arr[i] % 2 == 0){
            sumOfEven += arr[i];
        }
        else {
            sumOfOdd += arr[i];
        }


    }

    cout << "Tong mang: " << sum << endl;
    cout << "Tong so chan: " << sumOfEven << endl;
    cout << "Tong so le: " << sumOfOdd << endl;
    return 0;
}
