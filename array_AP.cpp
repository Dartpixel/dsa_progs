#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the limit :" << endl;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ap = 1;
    for (i = 0; i < n - 2; i++)
    {
        if ((arr[i + 1] - arr[i]) != (arr[i + 2] - arr[i + 1]))
        {
            ap = 0;
            break;
        }
    }
    if (ap == 1)
    {
        cout << "Array is an AP" << endl;
    }
    else
    {
        cout << "Array is not an AP" << endl;
    }
    return 0;
}
