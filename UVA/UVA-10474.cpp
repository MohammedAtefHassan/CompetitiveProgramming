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
	//    infile();
	//	outfile();
}
int n;
int arr[1000000];
bool valid(int i, int x)
{
	return arr[i] >= x;
}
int bn(int x)
{
	int l = 0, r = n;
	int id = n;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (valid(mid, x))
			id = mid, r = mid - 1;
		else
			l = mid + 1;
	}
	if (id == n || arr[id] != x)
		return -1;
	return id;
}
int main()
{
	Mohammed_Atef_Hassan
		int cnt = 1;
	int q;
	int x;
	while (cin >> n >> q&&n&&q)
	{
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		cout << "CASE# " << cnt << ":" << finl;
		while (q--)
		{
			cin >> x;
			int y = bn(x);
			if (y == -1)
				cout << x << " not found" << finl;
			else
				cout << x << " found at " << y+1<< finl;
		}
		cnt++;
	}
}