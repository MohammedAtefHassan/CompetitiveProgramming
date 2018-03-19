#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define  ull unsigned long long
#define  ul unsigned long
#define all(v) v.begin(),v.end()
#define sz(n) (int)n.size()
#define pb(s) push_back(s);
#define format(n) fixed<<setprecision(n)
#define finl "\n"
#define Mohammed_Atef_Hassan fastt();
#define mod 1000000007
#define INF 1000000000000000000
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
void infile()
{
	freopen("input.in", "r", stdin);
}
void outfile()
{
	freopen("output.in", "w", stdout);
}

void fastt(){
	fast();
	//   infile();
	//	outfile();
}
int n;
ll arr[1000000];
bool valid1(int mid, ll x)
{
	return arr[mid] < x;
}
bool valid2(int mid, ll x)
{
	return arr[mid]>x;
}
int lower(ll x)
{
	int l = 0, r = n-1;
	int mn= -1;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (valid1(mid, x))
		{
			l = mid + 1;
			mn = mid;
		}
		else
			r = mid - 1;
	}
	return mn;
}
int upper(ll x)
{
	int l = 0, r = n-1;
	int mx = n;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (valid2(mid, x))
		{
			r = mid - 1;
			mx = mid;
		}
		else
			l = mid + 1;
	}
	return mx;
}
int main()
{
	Mohammed_Atef_Hassan
	while (cin >> n)
	{
		for (int i = 0; i <n; i++)
		{
			cin >> arr[i];
		}
		int q;
		cin >> q;
		ll x;
		while (q--)
		{
			cin >> x;
			int a = lower(x);
			int b = upper(x);
			if (a == -1)
				cout << "X";
			else
				cout << arr[a];
			cout << " ";
			if (b==n)
				cout << "X";
			else
				cout << arr[b];
			cout << endl;
		}
	}

}