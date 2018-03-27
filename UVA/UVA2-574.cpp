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
#define INF 1000000000000000000;
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
   // 	outfile();
}
int n, k;
int arr[100];
int f[100];
map<vector<int>,int>mp;
vector<int>c;
int rec(int i, int sum,vector<int>v)
{
	if (i == n&&(sum!=0||sum==0&&mp[v]==1))
		return 0;
	if (sum == 0&&mp[v]==0)
	{
		for (int j = 0; j < v.size() - 1; j++)
			cout << v[j] << "+";
		cout << v[v.size() - 1] << finl;
		mp[v] = 1;
		return 1;
	}
	int x = 0, y = 0;
	v.push_back(arr[i]);
	x = rec(i + 1, sum - arr[i], v);
	v.erase(v.begin() + v.size() - 1);
	y = rec(i + 1, sum, v);
	return max(x, y);
}
int main()
{
	Mohammed_Atef_Hassan
	while (cin >> k >> n&&n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		cout << "Sums of " << k << ":" << finl;
		int x = rec(0, k,c);
		if (x == 0)
			cout << "NONE" << finl;
		mp.clear();
	}

}
