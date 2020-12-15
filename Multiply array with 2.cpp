#include <iostream>
using namespace std;


int pro(int arr[], int n)
{
    int pro = 1;
    int ro = 1;


    for (int i = 0; i < n; i++)
    ro =ro*arr[i];
pro=ro*2;
    return pro;
}


int main()
{int arr[4];
cout<<"Enter 4 numbers to multipy \n";
   for (int i = 0; i < 4; ++i) {
        cin >> arr[i];
    }

    int n = 4;
    cout << "Product of given array is " << pro(arr, n);
    return 0;
}
