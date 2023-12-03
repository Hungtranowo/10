#include <iostream>

using namespace std;

int battay(int n){
    int count = 0;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            count++;
        }
    }
    return count;
}

int main(){
    int n; cin >> n;
    cout << battay(n);
    return 0;
}
