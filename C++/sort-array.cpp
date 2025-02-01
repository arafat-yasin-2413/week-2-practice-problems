#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int n;
    cin >> n;

    int ar[n];

    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int mx = ar[0];

    for (int i = 1; i < n; i++)
    {
        if (ar[i] >= mx)
        {
            mx = ar[i];
        }
    }

    cout << mx << endl;

    return 0;
}