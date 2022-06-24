// https://codeforces.com/problemset/problem/522/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n;
    cin>>n;

    int w[n], h[n];
    vector<int> hei;
    int width = 0;
    for(int i = 0; i<n; i++){
        cin>>w[i]>>h[i];
        width += w[i];
        hei.push_back(h[i]);
    }
    sort(h, h+n);
    int maxi = h[n-1], sec = h[n-2];
    vector<int> :: iterator it = find(hei.begin(), hei.end(), maxi);
    int ind = distance(hei.begin(), it);
    for(int i = 0; i<n; i++){
        int pix;
        if(i!=ind) pix = (width - w[i]) * maxi;
        else pix = (width - w[i]) * sec;
        cout<<pix<<' ';
    }

}