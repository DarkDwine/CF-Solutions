// https://codeforces.com/contest/1692/problem/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int arr[4];
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
        int a = arr[0];
        sort(arr, arr+4);
        if(a==arr[0]) cout<< 3 <<'\n';
        else if(a==arr[1]) cout<< 2 <<'\n';
        else if(a==arr[2]) cout<< 1 <<'\n';
        else if(a==arr[3]) cout<< 0 <<'\n';
    }
}

