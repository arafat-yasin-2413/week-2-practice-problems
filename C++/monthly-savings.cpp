#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

string monthlySavings(vector<int> arr, int living_cost)
{
    int total_income = 0;
    for (auto el : arr)
    {
        // cout<<el<<" ";
        total_income += el;
    }
    // cout<<endl;

    // cout<<"Living cost : "<<living_cost<<endl;

    int total_tax = 0;
    int total_savings = 0;

    int costable_money = 0;

    for (auto el : arr)
    {
        if (el >= 3000)
        {
            int tax = (20 * el) / 100;
            total_tax += tax;

            costable_money += (el - tax);
        }

        else
        {
            costable_money += el;
        }
    }

    // cout<<"Total Income was : "<<total_income<<endl;
    // cout<<"Total costable money : "<<costable_money<<endl;
    // cout<<"Total Tax Paid : "<<total_tax<<endl;
    total_savings = costable_money - living_cost;

    // cout<<"Savings : "<<total_savings<<endl;

    if (total_savings < 0)
    {
        return "earn more";
    }

    else
    {
        return to_string(total_savings);
    }
}

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int n;

    cout << "Enter number of payments : ";
    cin >> n;

    vector<int> ar;
    cout << "Enter payments : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ar.push_back(x);
    }

    cout << "Enter living cost : ";
    int living_cost;
    cin >> living_cost;

    // for(auto el: ar)
    // {
    //     cout<<el<<endl;
    // }

    string result = monthlySavings(ar, living_cost);

    cout<<result<<endl;

    return 0;
}