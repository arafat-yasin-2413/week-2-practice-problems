#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

// 

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    vector <string> friends = {"rahim","karim","abdul", "sadsd", "heroAlom"};

    int maxLength = -1;
    string maxName = "";

    for (auto fd : friends)
    {
        int len = fd.length();
        if(len > maxLength)
        {
            maxLength = len;
            maxName = fd;
        }
    }

    cout<<maxName<<endl;
    

    return 0;
}