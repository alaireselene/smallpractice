#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 0)
        return 0;
    int a[n];
    a[0] = a[1] = 1;
    for (int k = 2; k <= n; k++)
    {
        a[k] = a[k - 1] + a[k - 2];
    }
    cout << a[n];
    return 0;
}