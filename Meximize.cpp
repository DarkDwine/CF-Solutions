// https://codeforces.com/problemset/problem/1497/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    const int A = 1e9 + 1;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> aa(n);
        for(int i=0; i<n; i++) cin>>aa[i];
        sort(aa.begin(), aa.end());
        vector<int> bb;
        for(int i=0; i<n; i++){
            if(i==0 || aa[i]!=aa[i-1]){
                bb.emplace_back(aa[i]);
            }
        }
        for(int i=1; i<n; i++){
            if(aa[i] == aa[i-1]){
                bb.emplace_back(aa[i]);
            }
        }
        for(int i=0; i<n; i++) cout<<bb[i]<<" ";
        cout<<"\n";
    }
}