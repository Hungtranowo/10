#include <iostream>

using namespace std;

int find(int num1, int num2)
{
    while (num1 != num2)
    {
        if (num1 > num2) num1 -= num2;
        else num2 -= num1;
    }
    return num1;
}

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    freopen("BAI12ucln.INP", "r", stdin);
    freopen("BAI12ucln.OUT", "w", stdout);

    int number;
    cin >> number;
    int *arr = new int[number];

    for (int i = 0; i < number; i++) cin >> arr[i];

    int ucln = find(arr[0], arr[1]);

    for (int i = 2; i < number; i++) 
        ucln = find(ucln, arr[i]);

    cout << ucln;
    return 0;
}