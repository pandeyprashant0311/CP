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
ll gcd (ll a, ll b) {return ( a ? gcd(b % a, a) : b );}
ll power(ll a, ll n) {ll p = 1; while (n > 0) {if (n % 2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1; while (n > 0) {if (n % 2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}
int get(int x)
{
	int c = 0;
	while (x % 2 == 0)
	{
		c++;
		x = x / 2;
	}
	for (int i = 3; i < sqrt(x); i += 2)
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
int check(int i)
{

	int c = 0;
	int x = 0 ;
	while (i != 0)
	{
		x = i % 10;
		i = i / 10;
		if (x == 4 || x == 7)
			c = 0;
		else
		{
			c = 1;
			break;
		}

	}
	return c;
}
void solve()
{
	int n;
	cin >> n;
	int a[n];
	int s[n], l[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	s[0] = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (s[i - 1] <= a[i])
			s[i] = s[i - 1];
		else
			s[i] = a[i];

	}
	l[n - 1] = a[n - 1];

	for (int i = n - 2; i >= 0 ; i--)
	{
		if (l[i + 1] >= a[i])
			l[i] = l[i + 1];
		else
			l[i] = a[i];

	}
	int i = 0;
	int j = 0;
	int m = -1;
	while (j < n && i < n)
	{
		if (s[i] <= l[j])
		{
			m = max(m, j - i);
			j++;
		}
		else
			i++;



	}
	if (m == -1)
		cout << "0" << endl;
	else
		cout << m << endl;



}








int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--)
	{

		solve();

	}
	return 0;

}

