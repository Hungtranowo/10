#include <iostream>

bool isPrime(int number){
    for (int i=2; i*i<=number; i++){
        if (number % i ==0)
            return 0;
    }
    return number > 1;
}
int main(){
    int number; std::cin >> number;
    if (isPrime(number)) std::cout << number << " la so nguyen to";
    else std::cout << number << " khong phai so nguyen to";
    return 0;
}