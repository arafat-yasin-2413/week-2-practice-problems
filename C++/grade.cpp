#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

// 

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    cout << "Enter a number (between 0 and 100): ";
    int n;
    cin >> n;

    if(n<33)
        cout<<"You Are Failed."<<endl;

    else if(n >= 33 && n<=39)
        cout<<"D Grade"<<endl;
    else if(n >= 40 && n<= 49)
        cout<<"C Grade"<<endl;

    else if(n >= 50 && n<=59)
        cout<<"B Grade"<<endl;
    
    else if(n >= 60 && n <= 69)
        cout<<"A- Grade"<<endl;

    else if(n >= 70 && n <= 79)
        cout<<"A Grade"<<endl;
    
    else if(n >= 80 && n<= 100)
        cout<<"A+ Grade"<<endl;

    else
        cout<<"Invalid Number"<<endl;


    return 0;
}