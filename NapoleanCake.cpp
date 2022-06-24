// https://codeforces.com/problemset/problem/1501/B

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
        int cake[n];

        int ans[n];
        for(int i=0; i<n; i++) ans[i] = 1;

        vector<int> zeroes;

        for(int i=0; i<=6; i++){
            zeroes.push_back(i);
        }

        cout<<zeroes.end() - zeroes.begin();
        for(int i=0; i<n; i++){
            cin>>cake[i];
            if(cake[i] == 0){
                ans[i] = 0;
                zeroes.push_back(i);
                continue;
            }
            if(cake[i] > 1){
                int j = i-cake[i];
                // if(j<=0){
                //     while(!zeroes.empty()){
                //         int p = zeroes.back();
                //         ans[p] = 1;
                //         zeroes.pop_back();
                //     }
                //     continue;
                // }
                while(!zeroes.empty()){
                    int p = zeroes.back();
                    if(p>j){
                        ans[p] = 1;
                        zeroes.pop_back();
                    }
                    else break;    
                }
            }
        }
        for(int k = 0; k < n; k ++){
            cout<<ans[k]<<' ';
        }
        cout<<"\n";
    }
}