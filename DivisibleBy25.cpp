// https://codeforces.com/problemset/problem/1593/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

const string sub[] = {"00", "25", "50", "75"};
const int inf = 80;

int Solution(string& s, string& t){
    int ans = 0;
    int siz = s.length();
    siz--;
    while(siz>=0 && s[siz] != t[1]){
        ans++;
        siz--;
    }

    if(siz<=0) return inf;

    siz--;
    while(siz>=0 && s[siz] != t[0]){
        ans++;
        siz--;
    }

    return siz<0 ? inf : ans;
}

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int ans = inf;
        for(auto t : sub) ans = min(ans, Solution(n, t));
        cout<<ans<<'\n';
    }
}