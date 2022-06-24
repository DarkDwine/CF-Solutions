// https://codeforces.com/problemset/problem/1472/C

// Using Dynamic Programming

//Better Approach, Less time Requirement, More Space Complexity

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
        vector<int> v(n);
        for(int &x : v){
            cin>>x;
        }

        vector<int> dp(n);

        for(int i = n-1; i>=0; i--){
            dp[i] = v[i];
            int j = i + v[i];
            if(j<n) dp[i] += dp[j];
        }

        cout<<*max_element(dp.begin(), dp.end())<<'\n';
    }
}

//Using Recursion
// More time Requirement, Less Space Complexity

// #include <bits/stdc++.h>
// using namespace std;
// #define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

// int p;

// int score(int arr[], int n, int i){
//     int scor = arr[i];
//     p = i + scor;
//     return p > n ? scor : scor+=score(arr, n, p);
// }

// int main()
// {
//     fastIO;
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n+1];
//         arr[0] = 0;
//         int scor = 0;
//         for(int i = 1; i<=n; i++) cin>>arr[i];
//         for(int i = 1; i<=n; i++){
//             scor = max(scor, score(arr, n, i));
//         }
//         cout<<scor<<'\n';
//     }
// }