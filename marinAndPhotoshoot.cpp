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
        int f=0;
        char s[n];
        for(int i = 0; i<n; i++){
            cin>>s[i];
        }
        for(int j = 1; j<n; j++){
            if(s[j] == '0'){
                if(s[j-1] == '1'){
                    if(j>=2){
                        if(s[j-2] == '1') continue;
                        else f++;
                    }
                    else continue;
                }
                if(s[j-1] == '0') f = f + 2;
            }
            if(s[j] == '1') continue;
        }
        cout<<f<<'\n';
    }
}