#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int steps(long long n){
    
}
int main()
{
    fastIO;
    long long n;
    cin>>n;
    int step = 0;
    while(n!=0){
        long long p = n;
        long long a = 0;
        while(p!=0){
            a = max(a, p%10);
            p = p/10;
        }
        n = n - a;
        step++;
    }
    cout<<step;    
}