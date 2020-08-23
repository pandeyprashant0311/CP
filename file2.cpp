#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string.h>
#include<stdio.h>
using namespace std;
#define ll long long
void solve()
{
	ll n, m, x, y;
	cin >> n >> m >> x >> y;
	ll res = 0;
	if (y / 2 <= x && y % 2 == 0)
	{
		y = y - x;
	}
	else if (y / 2 <= x && y % 2 != 0)
	{
		if (y / 2 == x)
		{
			y = x;
		}
		else
		{
			y = y - x;
		}
	}

	else
	{
		y = x;
	}
	if (m % 2 == 0 && n % 2 == 0)
	{
		res =  (((y + x) * m) / 2) * n;
	}
	else if (m % 2 != 0 && n % 2 == 0)
	{
		res = ((((m / 2) + 1) * x) + ((m / 2) * y)) * (n / 2);
		res += (((m / 2) * x) + (((m / 2) + 1) * y)) * (n / 2);
	}
	else if (m % 2 != 0 && n % 2 != 0)
	{
		res = ((((m / 2) + 1) * x) + ((m / 2) * y)) * ((n / 2) + 1);
		res += (((m / 2) * x) + (((m / 2) + 1) * y)) * (n / 2);

	}
	else if (m % 2 == 0 && n % 2 != 0)
	{
		res =  (((y + x) * m) / 2) * n;

	}


	cout << res << endl;
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

