// https://codeforces.com/problemset/problem/1598/C

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
        long long sum = 0;
        vector<int> arr(n);
        map<int, int> sankhya;
        for(auto &x : arr){
            cin>>x;
            sum += x;
            sankhya[x]++;
        }

        if((sum * 2)%n != 0){
            cout<<0<<'\n';
            continue;
        }

        long long avg0  = (sum * 2)/n;
        long long cnt = 0;
        for(int i = 0; i<n; i++){
            int a1 = arr[i];
            int a2 = avg0 - a1;
            if(sankhya[a2]) cnt += sankhya[a2];
            if(a1 == a2) cnt--;
        }
        cout<<cnt/2<<'\n';
    }
}