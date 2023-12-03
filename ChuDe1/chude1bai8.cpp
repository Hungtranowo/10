#include <bits/stdc++.h>

using namespace std;


void getInput(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void EvenorOdd(int *arr, int n)
{
    int countchan = 0, countle = 0;
    cout << "chan: ";
    for (int i=0; i<n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
            countchan++;
        }
    }

    cout << "\nle: ";
    for (int i=0; i<n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            cout << arr[i] << " ";
            countle++;
        }
    }
    cout << endl;
    cout << "co " << countchan << " phan tu chan" << endl;
    cout << "co " << countle << " phan tu le" << endl;
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

void max(int *arr, int n)
{
    cout << "max: " << arr[0] << endl;
    for (int i=0; i<n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << "max chan = " << arr[i];
            break;
        }
    }
    cout << endl;
    for (int i=0; i<n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            cout << "max le = " << arr[i];
            break;
        }

    }
    cout << endl;
}

void findk(int *arr, int n)
{
    cout << endl;
    cout << "nhap k:";
    int k; cin >> k;
    for (int i=0; i<n; i++){
        if (arr[i] == k)
        {
            cout << "trong mang co chua phan tu bang k" << endl;
            break;
        }
        else
        {
            cout << "trong mang KHONG chua phan tu bang k" << endl;
            break;
        }
    }
}
void sum(int *arr, int n)
{
    int sum = 0;
    for (int i=0; i<n; i++) sum += arr[i];
    cout << "sum = " << sum << endl;

    int sumf = 0;
    for (int i=0; i<n; i++){
        if (arr[i] % 5 == 0)sumf += arr[i];
    }
    cout << "sum chia het cho 5 = " << sumf << endl;

    int sumnf = 0;
    for (int i=0; i<n; i++){
        if (arr[i] % 5 != 0)sumnf += arr[i];
    }
    cout << "sum khong chia het cho 5 = " << sumnf << endl;
}

int main()
{
    int n;
    do
    {
        cout << "Enter length of array(length>0): ";
        cin >> n;
    } while (n<=0);
    int *arr = new int[n];
    getInput(arr, n);
    EvenorOdd(arr, n);
    sort(arr, n);
    max(arr, n);
    findk(arr, n);
    sum(arr, n);
    return 0;
}
