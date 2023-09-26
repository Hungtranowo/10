#include <iostream>

using namespace std;

bool check(int number){
    if (number % 2 == 0) return true;
    return false;
}

int main(){
    int number; cin >> number;
    if (check(number)){
        cout << number << " la so chan";
    }
    else {
        cout << number << " la so le";
    }

    return 0;
}
