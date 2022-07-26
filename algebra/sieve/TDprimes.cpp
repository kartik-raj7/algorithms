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
int ans[8000000];
int main(){
long long n = 1e8;
check[0]=false;
check[1] = false;
for(ll i=4;i<=n;i+=2){
    check[i]=false;
}
for(ll i=3;i*i<=n;i++){
    if(check[i]){
for(ll j=i*i;j<=n;j=j+(2*i))
     check[j]=false;
}
}
ans[0]=2;
ll j = 0;
for(ll i =3;i<=n;i+=2){
    if(check[i]){
        ans[++j]=i;
    }
}
for(ll i=1;i<=j;i+=100){
    cout<<ans[i-1]<<"\n";
}
}