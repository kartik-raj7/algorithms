#include <iostream>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <math.h>
#include <cstdio>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
using namespace std;
vector<bool>check(1e8,true);
// vector<ll> checks(3000,0);
// ll ans[8000000];
int main(){
long long n,m;
cin>>n>>m;
vector<int>ans;
    vector<bool> v(n,true);
    v[0]=v[1]=false;
    set<int>s;
    for(int i=2;i<=n;i++){
        if(v[i]){
            for(int j=i*i;j<=n;j+=i)
            v[j]=false;
        }
    }
    for(int i=0;i<=n;i++){
        if(v[i]==true){
            ans.pb(i);
            s.insert(i);
        }
    }
    // for(auto i:ans){
    //     cout<<i<<endl;
    // }
   int c=0;
   for(int i=0;i<ans.size()-1;i++){
    int k = ans[i]+ans[i+1]+1;
    int m = ans[i]+ans[i+1];
    if(s.find(k)!=s.end()||s.find(m)!=s.end()){
        c++;
    }
   }
   if(c>=m){
    py;
   }
   else pn;
}