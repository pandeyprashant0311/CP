#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string.h>
#include<stdio.h>
using namespace std;
#define ll long long
#define db long double
#define S second
#define MOD 1000000007

const int  N = 1e9 + 7;
const int  P = 1e9;

bool *visited = new bool[100000];
bool *visit = new bool[100000];




ll gcd (ll a, ll b) {return ( a ? gcd(b % a, a) : b );}

ll power(ll a, ll n) {ll p = 1; while (n > 0) {if (n % 2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1; while (n > 0) {if (n % 2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}


ll cell(ll a)
{
	return (a * (a + 1)) / 2;
}

void solve() {
	ll x;
	cin >> x;
	int ans = 0;
	for (int i = 1; cell((1LL << i) - 1) <= x; i++) {
		ans++;
		x -= cell((1LL << i) - 1);
	}
	cout << ans << '\n';
}




int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll t;
	cin >> t;


	while (t--)
	{


		solve();

	}
	//solve();
	return 0;
}

