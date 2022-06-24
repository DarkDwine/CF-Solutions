// https://codeforces.com/contest/1700/problem/C

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long nat[n];
        long long decre = 0;
        for(long long i = 0; i< n; i++){
            cin>>nat[i];
            if(i!=0) {
                if(nat[i] - decre > nat[i-1]) decre += nat[i] - decre - nat[i-1];
                nat[i] = nat[i] - decre;
            }
        }
        if(nat[n-1]<0){
            decre += abs(nat[n-1]);
            for(long long i = 0; i<n; i++) nat[i] += abs(nat[n-1]);
        }
        decre += nat[0];
        cout<<decre<<'\n';
    }
}