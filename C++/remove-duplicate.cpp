#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int arr[12] = {1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10};

    int n = sizeof(arr) / sizeof(arr[0]);

    int newArr[n] = {0};

    newArr[0] = arr[0];

    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != newArr[j])
        {
            newArr[j + 1] = arr[i];
            j++;
        }
    }

    // cout << "j = " << j << endl;

    for (int i = 0; i <= j; i++)
    {
        cout << newArr[i] << " ";
    }
    cout << endl;

    return 0;
}