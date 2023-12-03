#include <iostream>

using namespace std;

int main(){
    unsigned int n; cin >> n;

    unsigned int sum = 0;

    for (unsigned int i=9; i<n; i+=9){
        if (i%9==0){
            sum += i;
        }
    } 

    cout << sum;
    return 0;
}