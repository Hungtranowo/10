#include <iostream>
#include <math.h>

using namespace std;

int sum(long long n){
    long long sum = 0, temp;
    for (int i=1; i<=n; i++){
        temp = i*i - pow((i -1), 2);
        sum += temp;
    }
    return sum;
}

int main(){
    long long n; cin >> n;
    cout << sum(n);
    return 0;
}
