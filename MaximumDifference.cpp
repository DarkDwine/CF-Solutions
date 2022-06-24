// https://codeforces.com/gym/351948/problem/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));
 
int main()
{
    fastIO;
    int n;
 
 
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int inp;
        cin>>inp;
        arr.push_back(inp);
    }
    int q;
    cin>>q;
    int mem1=0, mem2=arr.back();
    int previ = 0, prevj = n-1;
    while(q--){
        int l, r;
        int ai=0, ar =0;
        cin>>l>>r;
        int k = 0;
        if(l>mem1){
            int i=previ;
            while(arr[i]<l){
                i++;
            }
            if(i<=n-2) {
                ai = arr[i];
                mem1 = l;
                previ = i;
            }
            else {
                cout<<-1<<"\n";
                k=1;
                continue;
            }
 
        }
        else {
            if(l == mem1){
                ai = arr[previ];
            }
            else{                   // l < mem1
                int i = previ;
                if(i>0 && arr[i-1] == l){
                    ai = arr[i-1];
                }
                else{
                    while(arr[i] >= l){
                        if(i>0) i--;
                        else break;
                    }
                    if(arr[i] < l) i++;
                    ai = arr[i];
                    previ = i;
                    mem1 = l;
                }
            }
        }
        
        if(r>mem2){
            int j=prevj;
            while(arr[j]<=r){
                if(j<n-1) j++;
                else break;
            }
            if(arr[j] > r) {
                j--;
                ar = arr[j];
            }
            else if(j == n-1) ar = arr[j];
            
            mem2 = r;
            prevj = j;
 
        }
        else {
            if(r == mem2){
                ar = arr[prevj];
            }
            else{                   // r < mem2
                int j = prevj;
                {
                    while(arr[j] > r){
                        if(j>0) j--;
                        else {
                            cout<<-1<<"\n";
                            k=1;
                            break;
                        }
                    }
                    ar = arr[j];
                    prevj = j;
                    mem2 = r;
                }
            }
        }
        if(k) {
            mem1=0; mem2=arr.back();
            previ = 0; prevj = n-1;
            continue;
        }
        int ans = ar - ai;
        if(ans <= 0) {
            cout<<-1<<"\n";
            mem1=0; mem2=arr.back();
            previ = 0; prevj = n-1;
        }
        else cout<< ans<<"\n";
    }
}