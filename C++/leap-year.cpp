#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

//

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int year;
    cout << "Enter a year : ";
    cin >> year;

    // cout<<year<<endl;

    if (year % 4 == 0 && year % 100 != 0)
        cout << year << " is Leap Year." << endl;
    else if (year % 400 == 0)
        cout << year << " is Leap Year." << endl;
    else
        cout << year << " is not a Leap Year.";

    return 0;
}