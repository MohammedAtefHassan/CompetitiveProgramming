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
pair<ll, ll>arr[1000000];
bool cmp(pair<ll, ll>i, pair<ll, ll>j)
{
	return i.first < j.first;
}
int main()
{
	Mohammed_Atef_Hassan
		ll s;
	int n;
	cin >> s >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i].first >> arr[i].second;
	sort(arr, arr + n,cmp);
	int l = 0;
	for (int i = 0; i < n; i++)
	{
		if (s>arr[i].first)
		{
			l++;
			s += arr[i].second;
		}
	}
	cout << (l == n ? "YES" : "NO") << finl;
}
