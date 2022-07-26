#include <iostream>
using namespace std;
///basically if n is odd to a^(n-1/2)^2 * a 
/// if n is even then we can directly a^n/2*a^n/2
///recursive code////
long long solve(long long a,long long n){
    if(n==0)return 1;
    long long res = solve(a,n/2);
    if(n%2){
        return res*res*a;
    }
    else return res*res;
}
////////////////////
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
//////////////////////////a*b%m
uint64_t mul_mod(uint64_t a, uint64_t b, uint64_t m)
{
  long double x;
  uint64_t c;
  int64_t r;
  if (a >= m) a %= m;
  if (b >= m) b %= m;
  x = a;
  c = x * b / m;
  r = (int64_t)(a * b - c * m) % (int64_t)m;
  return r < 0 ? r + m : r;
}
///////////////////////
int main(){
    cout<<solve(2,13)<<endl;
}