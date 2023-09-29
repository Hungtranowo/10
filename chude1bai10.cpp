#include <iostream>

using namespace std;

void getInput(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

bool checkEven(int number)
{
    if (number % 2 == 1)
        return 1;
    return 0;
}

void print(int *arr, int n)
{
    cout << "Cac phan tu le: ";
    for (int i = 0; i < n; i++)
    {
        if (checkEven(arr[i]))
            cout << arr[i] << "    ";
    }
    cout << endl;

    cout << "Cac phan tu chan: ";
    for (int i = 0; i < n; i++)
    {
        if (!checkEven(arr[i]))
            cout << arr[i] << "    ";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("MANGCLBAI10.INP", "r", stdin);
    freopen("MANGCLBai10.OUT", "w", stdout);

    int n;
    cin >> n;
    int *arr = new int[n];

    getInput(arr, n);
    print(arr, n);

    return 0;
}
