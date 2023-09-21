#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort(int *arr, int ele)
{
    for (int i = 0; i < ele; i++)
    {
        for (int j = i + 1; j < ele; j++)
        {
            if (arr[j] > arr[i])
                swap(arr[i], arr[j]);
        }
    }
}

int main()
{
    int ele;

    do
    {
        cout << "Enter size of array (x>1): ";
        cin >> ele;
    } while (ele < 2);

    int arr[1000];

    for (int i = 0; i < ele; i++)
    {
        cin >> arr[i];
    }
    int max = 0;
    for (int i = 0; i < ele; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }

    int count = 0;
    for (int i = 0; i < ele; i++)
    {
        if (max == arr[i]) count++;
    }

    if (count < 2)
    {
        sort(arr, ele);

        cout << "second max = " << arr[1];
    }
    else
    {
        cout << "Not found second max!";
    }
    return 0;
}