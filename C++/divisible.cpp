#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 == 0 or i % 5 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}