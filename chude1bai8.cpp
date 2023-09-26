#include <bits/stdc++.h>

using namespace std;


void getInput(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void EvenorOdd(int *arr, int n)
{
    cout << "chan: ";
    for (int i=0; i<n; i++)
    {
        if (arr[i] % 2 == 0) cout << arr[i] << " ";
    }
    cout << "\nle: ";

    for (int i=0; i<n; i++)
    {
        if (arr[i] % 2 == 1) cout << arr[i] << " ";
    }
    cout << endl;
}

void sort(int *arr, int n)
{
    cout << "tang: ";
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    cout << "giam: ";
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n; cin >> n;
    int *arr = new int[n];
    getInput(arr, n);
    EvenorOdd(arr, n);
    sort(arr, n);
    return 0;
}
