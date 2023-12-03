#include <iostream>

bool check(int number)
{
    if (number%2==0)
    {
        return 1;
    }
    return 0;
}

void print(int number){
    if (check(number)) std::cout << number << " is even number!";
    else std::cout << number << " is odd number!";
}

int main(){
    int n; std::cin >> n;
    print(n);
    return 0;
}
