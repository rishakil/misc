#include<bits/stdc++.h>
using namespace std;
#define gap ' '
#define endl '\n'
#define pb push_back
#define ll long long
#define all(x) x.begin(), x.end()
#define cin(line) scanf(" %[^\n]%*c", line)
#define sf(x, y) fixed << setprecision(x) << y

ll _llsqrt(ll a) { ll x = sqrt(a) + 2; while (x * x > a) x--; return x; }
ll _digit(ll x) { ll cnt = 0; while (x > 0) { x /= 10; cnt++; } return cnt; }
bool is_prime(ll x) { if(x==2) return true; else {bool flag = false; for(ll i = 2; i*i<=x; i++) {if(x%i==0) { flag = true; break; }} return flag ? false : true; }}
long long GCD(long long x, long long y) { if (y == 0) return x; return GCD(y, x%y); }
bool isUp(char c) {if(c>='A' && c<='Z') return true; else return false;}
bool isPowerOfTwo (int x) {return x && (!(x&(x-1)));}
int main() {
	return 0;
}
