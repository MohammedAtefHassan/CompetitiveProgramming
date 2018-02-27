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
int arr[200000];
int x[200000];
int main()
{   
	Mohammed_Atef_Hassan
		int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> x[i];
		vis[x[i]]++;
	}
	int cnt = 0;
	for (int i = 1; i <= 100000; i++)
		cnt += (vis[i] ? 1 : 0);
	arr[1] = cnt;
	for (int i = 2; i <= n; i++)
	{
		vis[x[i-1]]--;
		if (vis[x[i-1]]==false)
			cnt--;
		arr[i] = cnt;
	}
	int l;
	while (m--)
	{
		cin >> l;
		cout << arr[l] << finl;
	}
}