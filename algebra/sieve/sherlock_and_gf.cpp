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
ll ans[8000000];
int main(){
long long n;
cin>>n;
ll c=0;
check[0]=false;
check[1] = false;
ans[0]=ans[1]=1;
ans[2]=ans[3]=0;
////////////////////////
for(ll i=4;i<=n;i+=2){
    ans[i]=1;
}
for(ll i=2;i*i<=n+1;i++){
    if(ans[i]==0){
for(ll j=2*i;j<=n+1;j+=i)
     ans[j]=1;
}
}
if(n<3){
    cout<<1<<endl;
}
else cout<<2<<endl;
for(int i=2;i<=n+1;i++){
    cout<<ans[i]+1<<" ";
}
}
