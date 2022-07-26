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
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<bool> v(n,true);
    v[0]=v[1]=false;
    
    for(int i=2;i<=n;i++){
        if(v[i]){
            for(int j=i*i;j<=n;j+=i)
            v[j]=false;
        }
    }
    for(int i=0;i<=n;i++){
        if(v[i]==true){
            printf("%d \n",i);
        }
    }
}