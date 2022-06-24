// https://codeforces.com/problemset/problem/1627/D

//Approach #1
// #include <bits/stdc++.h>
// using namespace std;
// #define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));
// const int A = 1e6 + 3;
// bool ar[A];
// vector<int> arr;
// int n;
// int cnt = 0;
// void solve(vector<int> arr){
//     int i=0, j=0;
//     int siz = n;
//     for(i=0; i<siz; i++){
//         for(j=i+1; j<siz; j++){
//             int ser = __gcd(arr[i], arr[j]);
//             if(!ar[ser]){
//                 cnt++;
//                 arr.push_back(ser);
//                 siz ++;
//                 ar[ser] = true;
//             }
//         }

//     }
// }

// int main()
// {
//     fastIO;
//     cin>>n;
//     int inp;
//     for(int i=0; i<n; i++){
//         cin>>inp;
//         ar[inp] = true;
//         arr.push_back(inp);
//     }
//     solve(arr);
//     cout<<cnt;
// }

// Approach #2

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));
const int A = 1e6;
vector<bool> ar(A, false);
int cnt=0;

void solve(){
    for(int i=1; i<A; i++){
        int g = 0;
        for(int j=i; j<A; j+=i){
            if(ar[j]){
                g = __gcd(g, j);
            }
        }
        if(g==i && !ar[i]){
            cnt++;
        }
        else assert(ar[i] or g>i or g==0);
    }
}

int main()
{
    fastIO;
    int n;
    cin>>n;
    int inp;
    int maxi = 0;
    for(int i=0; i<n; i++){
        cin>>inp;
        maxi = max(maxi, inp);
        ar[inp] = true;
    }
    solve();
    cout<<cnt;
}