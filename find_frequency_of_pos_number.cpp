#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10], f[100] = {0};
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
        f[arr[i]]++;
    for (int i = 0; i < 10; i++)
        if (f[arr[i]] > 0)
        {
            cout << arr[i] << "\t" << f[arr[i]] << endl;
            f[arr[i]] = -1;
        }
    return 0;
}