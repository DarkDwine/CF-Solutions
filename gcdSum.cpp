// https://codeforces.com/problemset/problem/1498/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

long long int sum(long long int x){
    int sum=0;
    while (x){
        sum += (x%10);
        x = x/10;
    }
    return sum;
}

int main()
{
    fastIO;
    const int A = 1e9 + 1;
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int s = sum(n);
        long long int g = __gcd(n, s);
        while(g == 1){
            n++;
            s = sum(n);
            g = __gcd(n, s);
        }
        cout<<n<<"\n";
    }
}