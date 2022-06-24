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
        int sum = 0;
        int arr[n+2]= {};
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(i!=0 && i != n-1){
                sum += arr[i];
                if(arr[i]%2 == 0) arr[n]++;
                else arr[n+1] ++;
            }
        }

        int alrte = 0;
        int alrto = 0;
        int step = 0;

        if(arr[n]%2 == 1) alrte = 1;
        if(arr[n+1]%2 == 1) alrto = 1;
        if(arr[n] == 0) alrte = -1;
        if(arr[n+1] == 0) alrto = -1;

        for(int i = 1; i<n-1; i++){
            step += ceil((arr[i]/2.0));
        }
        if(sum == n-2){
            cout<<-1<<'\n';
            continue;
        }

        if(alrte == alrto || alrte == 0) cout<<step<<'\n';
        else if(alrte == 1 && alrto == 0) cout<<step-1<<'\n';
        else if(alrte == 1) cout<<step<<'\n';
        else if(alrte == -1 && arr[n+1]>1) cout<<step<<'\n';
        else cout<<-1<<'\n';
    }
}