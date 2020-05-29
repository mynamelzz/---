#include <iostream>
using namespace std;

void binary_search(int a[], int n, int m)
{
    int min = 0, max = n - 1, mid;
    while (max >= min)
    {
        mid = (min + max) / 2;
        if (a[mid] > m)
            max = mid - 1;
        else if (a[mid] < m)
            min = mid + 1;
        else
        {
            cout << a[mid];
            break;
        }
    }
    if (min > max)
        cout << "查找的数不在该数组中";
}

int main()
{
    int a[100];
    int n, m, i;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    binary_search(a, n, m);
}