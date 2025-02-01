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

    int maxNumber = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxNumber)
        {
            maxNumber = arr[i];
        }
    }

    cout << maxNumber << endl;

    return 0;
}