// https://codeforces.com/problemset/problem/727/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

void dfs (long long a, long long b){
    vector<long long> stor;
    stor.push_back(b);
    while(b>a){
        if(b % 10 == 1){
            b = b/10;
            stor.push_back(b);
        }
        else if(b % 2 == 0){
            b = b/2;
            stor.push_back(b);
        }
        else {
            break;
        }
    }
    if(b == a){
        cout<<"YES\n";
        int siz = stor.size();
        cout<<siz<<"\n";
        vector<long long> :: iterator it;
        for(it = stor.end() - 1; it>= stor.begin(); it--){
            cout<< *it <<' ';
        }
    }
    else cout<<"NO\n";
}
int main()
{
    fastIO;
    long long a;
    long long b;
    cin>>a>>b;
    dfs(a,b);
}