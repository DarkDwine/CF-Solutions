// https://codeforces.com/contest/1632/problem/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int Solution(int n)
{
    if (n == 0) return 0;
    int msb = 0;
    n = n/2;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
    return (1 << msb);
}

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int answer[n];
        int lime = Solution(n-1);
        int lim = lime;
        int chk = 0;
        if(n - lime == 1) chk = 1;
        answer[0] = 0;
        int i=1;
        while(lim < n){
            answer[i] = lim;
            i++;
            lim++;
        }
        n--;
        int l1 = n ^ lime;
        int l2 = l1;
        while(l1 < lime){
            answer[i] = l1;
            l1++;
            i++;
        }
        int p = 1;
        while(p<l2){
            answer[i] = p;
            i++;
            p++;
        }
        if(chk){
            answer[2] = lime-1;
            answer[1] = 0;
            answer[0] = lime;
        }

        for(int a = 0; a<=n; a++){
            cout<<answer[a]<<' ';
        }
        cout<<"\n";
    }
}