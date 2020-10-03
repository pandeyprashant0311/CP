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

ll ispow(ll n)
{
	if (n == 0 || n == 1)
		return 0;
	else
		return (ceil(log2(n)) == floor(log2(n))) ? 1 : 0;
}
ll check(ll a[], ll n)
{
	ll f = 1;
	for (int i = 1; i < n; ++i)
	{
		if (a[i]&a[i + 1] == 0)
		{
			f = 0;
			return f;
		}

	}
	return f;

}

void solve() {
	ll n;
	cin >> n;
	if (ispow(n) == 1)
	{
		cout << "-1" << endl;
		return;
	}
	if (n == 1) {
		cout << "1" << endl;
		return;
	}

	ll a[n + 1];
	for (int i = 0; i <= n; ++i)
	{
		a[i] = i;

	}
	a[1] = 2;
	a[2] = 3;
	a[3] = 1;
	for (int i = 4; i <= n ; ++i)
	{
		if (ispow(a[i]) == 1)
		{
			swap(a[i], a[i + 1]);
			i++;
		}
		else
			a[i] = i;
	}
	if (check(a, n) == 1)
	{
		for (int i = 1; i <= n; ++i)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;

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

