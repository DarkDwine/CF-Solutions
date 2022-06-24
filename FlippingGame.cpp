// https://codeforces.com/problemset/problem/327/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    vector<int> q;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        sum += arr[i];
        if(!arr[i]) q.push_back(i);
    }
    int siz = q.size();
    int ans = 0, test = 0;
    int chk = 1;
    for(int i = 0; i<siz; i++){
        int a1 = q[i];
        for(int j = i; j<siz; j++){
            test = sum;
            if(j==i) test++;
            else{
                int a2 = q[j];
                test += j-i+1;
                while(a2!=a1){
                    if(arr[a2]) test--;
                    a2--;
                }
            }
            ans = max(test, ans);
        }
        chk = 0;
    }
    ans = max(sum, ans);
    if(chk) ans--;
    cout<<ans;
}