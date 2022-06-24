// https://codeforces.com/problemset/problem/637/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n;
    cin>>n;
    map <int, int> freq;
    int x;
    int maxi = 0;
    int pic = 0;
    for(int i = 0; i<n; i++){
        cin>>x;
        freq[x]++;
        if(freq[x] > maxi){
            pic = x;
            maxi = freq[x];
        }
    }
    cout<<pic;
}