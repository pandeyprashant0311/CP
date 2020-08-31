#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string.h>
#include<stdio.h>
using namespace std;
#define ll long long
#define db double
#define S second
#define MOD 1000000007

const int  N = 1e9 + 7;
const int  P = 1e9;

vector<ll> m;
ll gcd (ll a, ll b) {return ( a ? gcd(b % a, a) : b );}

ll power(ll a, ll n) {ll p = 1; while (n > 0) {if (n % 2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1; while (n > 0) {if (n % 2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}
ll get(ll x)
{
	ll c = 0;
	while (x % 2 == 0)
	{
		c++;
		x = x / 2;
	}
	for (ll i = 3; i < sqrt(x); i += 2)
	{
		while (x % i == 0)
		{
			c++;
			x /= i;
		}
	}
	if (x > 1)
		c++;
	return c;
}
ll maxnum(ll a[], ll x, ll y)
{
	map<ll, ll> m;
	for (ll i = x; i <= y ; ++i)
	{
		m[a[i]]++;
	}
	ll h = INT_MIN;
	ll s = INT_MAX;
	for (auto i = m.begin(); i != m.end(); i++)
	{
		if (i->second > h)
		{
			h = i->second;
			s = i->first;

		}
	}
	cout << s << " " ;
	return s;
}
void solve() {
	int n;
	cin >> n;
	string s[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> s[i];
	}
	map<int, int> m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < s[i].length(); j++)
		{
			m[s[i][j]]++;
		}
	}
	for (auto i : m)
	{
		if (i.second % n != 0)
		{
			cout << "NO" << endl;
			return;
		}

	}
	cout << "YES" << endl;
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
	return 0;
}

