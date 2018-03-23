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
	// infile();
	//	  outfile();
}
ll arr[1000000];
ll vis[1010];
int main()
{
	Mohammed_Atef_Hassan
		int n, k, t, mn, m, j;
	while (cin >> t)
	{
		j = 1;
		while (t--)
		{
			cin >> n >> m >> k;
			mn = n + 1;
			for (int i = 0; i < n; i++)
			{
				if (i < 3)
					arr[i] = i + 1;
				else
					arr[i] = 1 + (arr[i - 1] + arr[i - 2] + arr[i - 3]) % m;
			}
			int l = 0, r = 0,cnt=0; bool b =true;
			while (l < n&&r < n)
			{
				cnt = 0;
				if (b)
					vis[arr[r]]++;
				for (int i = 1; i <= k; i++)
				{
					if (vis[i] == 0)
						cnt++;
				}
				if (cnt>0)
					b = true,r++;
				else
				{
					b = false;
					mn = min(mn, r - l + 1);
					vis[arr[l++]]--;
				}

			}
			cout << "Case " << j++ << ": ";
			if (mn == n + 1)
				cout << "sequence nai" << finl;
			else
				cout << mn << finl;
			memset(vis, 0, 1010);
		}
	}

}
