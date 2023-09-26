#include <iostream>

using namespace std;
int a[100],N,i,j,w;
int main()
{
   cout << "Nhap N: ";
   cin >> N;
   for (i=1;i<=N;i++)
   {
    cout <<"Nhap phan tu cua mang: ";
    cin >>a[i];
   }
   cout <<"Sap xep cac phan tu cua mang: ";
   for (i=1;i<=N-1;i++)
   for (j=i+1;j=N;j++)
   if (a[i]>a[j])
    {
    w=a[i];
    a[i]=a[j];
    a[j]=w;
    }
   for (i=1;i<=N;i++)
   cout <<a[i];
   cout <<endl;
}