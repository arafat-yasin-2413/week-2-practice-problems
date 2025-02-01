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
    cout << "Enter a number : ";
    cin >> n;

    if (n == 0)
        cout << "Zero (not odd, not even)" << endl;
    else if (n % 2 == 0)
        cout << "Even" << endl;

    else
        cout << "Odd" << endl;

    return 0;
}