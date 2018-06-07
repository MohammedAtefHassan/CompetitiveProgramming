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
#define Mohammed_Atef_Hassan fast();
#define mod 1000000007
#define INF 1000000000000000000;
#define PI acos(-1)
void fast(){

	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

#ifdef ONLINE_JUDGE
//	freopen("palindrome.in", "r", stdin);

	//freopen("palindrome.out", "w", stdout);
#endif
#ifndef ONLINE_JUDGE
//	freopen("input.in", "r", stdin);

	//freopen("output.out", "w", stdout);
#endif
}
int arr[502][502];
int cnt[502][502];
int main()
{
	Mohammed_Atef_Hassan
		int n, m,k;
	while (cin >> n >> m >> k&&n&&m)
	{
		memset(arr, 0, sizeof arr); memset(cnt, 0, sizeof cnt);
		while (k--)
		{
			int x1, x2, y1, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			if (x1 > x2)
				swap(x1, x2);
			if (y1 > y2)
				swap(y1, y2);
			arr[x1][y1]++;
			arr[x2 + 1][y1]--;
			arr[x1][y2 + 1]--;
			arr[x2 + 1][y2 + 1]++;
		}
		for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			arr[i][j] += arr[i][j - 1];

		for (int j = 1; j <= m; j++)
		for (int i = 1; i <= n; i++)
			arr[i][j] += arr[i-1][j];

		for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cnt[i][j] += cnt[i][j - 1] + (arr[i][j] >= 1);

		for (int j = 1; j <= m; j++)
		for (int i = 1; i <= n; i++)
			cnt[i][j] += cnt[i-1][j];
		
		if (n*m - cnt[n][m] <= 1)
			cout << "There is " << (n*m - cnt[n][m] == 0 ? "no empty spots." : "one empty spot.") << finl;
		else
			cout << "There are " << n*m - cnt[n][m] << " empty spots." << finl;
	}
	
} 
