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
	//	infile();
	//	outfile();
}
int vis[200000];
ll arr[200000];
int main()
{   
	Mohammed_Atef_Hassan
		int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	int q;
	cin >> q;
	while (q--)
	{
		int l, r;
		cin >> l >> r;
		vis[l]+= 1;
		vis[r + 1]-=1;
	}
	for (int i = 1; i <= n; i++)
		vis[i] += vis[i - 1];
	cout << count(vis + 1, vis + n + 1, 0) << endl;
	for (int i = 1; i <= n; i++)
	{
		if (vis[i] == 0)
			cout << arr[i] << " ";
	}
	cout << endl;
}