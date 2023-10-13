#include <bits/stdc++.h>

using namespace std;

int countCp = 0;
int countPf = 0;


bool checkCp(int n){
    int i = 1;
    while (i*i<=n){
        if (i*i==n){
            return 1;
        }
        i++;
    }
    return 0;
}

void printCp(int n){
    if (checkCp(n)){
        cout << n << " la chinh phuong" << endl;
    }
}

bool isPf(int n){
    int sum = 0;
    for (int i=1; i<n; i++){
        if (n%i==0) sum += i;
    }
    if (n==sum && n!=0) return 1;
    else return 0;
}

void printPf(int n){
    if (isPf(n)){
        cout << n << " la so hoan hao" << endl;
    }
}

int sumCp(int *arr, int size){
    int sum = 0;
    for (int i=0; i<size; i++){
        if (checkCp(arr[i])){
            sum += arr[i];
            countCp++;
        }
    }
    return sum;
}

int sumPf(int *arr, int size){
    int sum = 0;
    for (int i=0; i<size; i++){
        if (isPf(arr[i])){
         sum += arr[i];
         countPf++;
        }
    }
    return sum;
}

int main(){
    freopen("BAI13cphh.INP", "r", stdin);
    freopen("BAI13cphh.OUT", "w", stdout);

    int n; cin >> n;
    int *arr = new int[n];

    for (int i=0; i<n; i++) cin >> arr[i];

    for (int i=0; i<n; i++){
        printCp(arr[i]);
        printPf(arr[i]);
    }
    cout << endl;
    cout << "tong chinh phuong " << sumCp(arr, n) << endl;
    cout << "tong hoan hao " << sumPf(arr, n) << endl;
    cout << endl;
    cout << "co " << countCp << " so chinh phuong" << endl;
    cout << "co " << countPf << " so hoan hao" << endl;
    return 0;
}
