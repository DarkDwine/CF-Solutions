// https://codeforces.com/contest/1695/problem/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> piles(n);
        long long mini = 1e9;
        vector<long long>::iterator ind;
        for(auto& i : piles){
            cin>>i;
            mini = min(mini, i);
        }
        //(i+1)%n
        if(n%2 == 1) cout<<"Mike\n";
        else {
            ind =find(piles.begin(), piles.end(), mini);
            const auto index = std::distance(piles.begin(), ind);
            if(index % 2 == 0) cout<<"Joe\n";
            else cout <<"Mike\n";
        }
    }
}