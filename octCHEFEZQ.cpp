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
#define sz(v) int(v.size())
#define all(v) v.begin(), v.end()

const int  N = 1e9 + 7;
const int  P = 1e9;

bool *visited = new bool[100000];
bool *visit = new bool[100000];




ll gcd (ll a, ll b) {return ( a ? gcd(b % a, a) : b );}
ll power(ll a, ll n) {ll p = 1; while (n > 0) {if (n % 2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1; while (n > 0) {if (n % 2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}



void solve() {
	ll n, k;
	cin >> n >> k;
	ll a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	ll x = 0;
	ll r = 0;
	for (int i = 0; i < n; ++i)
	{
		a[i] += r;
		r = 0;
		r = a[i] - k;
		x++;
		if (a[i] / k == 0)
			break;

	}
	if (r > k)
	{
		x += r / k;
		cout << x + 1 << endl;
	}
	else
	{
		x += r / k;

		cout << x << endl;
	}

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

