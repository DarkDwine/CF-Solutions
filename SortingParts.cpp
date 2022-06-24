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
        int arr[n+1] = {};
        int sor=0;
        int chk = 0;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            if(arr[i]<sor) arr[n] = 1;
            sor = arr[i];
        }
        if(arr[n]) cout<<"YES\n";
        else cout<<"NO\n";
    }

}