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
	//   infile();
//	outfile();
}
int arr[1000000];
int co[1000000];
ll cnt; int n;
void mergesort(int l, int r)
{
	if (r - l <= 1)
		return;
	int mid = (l + r) / 2;
	mergesort(l, mid); mergesort(mid, r);
	int x = l, y = mid;
	int ind = 0;
	while (x <mid&&y < r)
	{
		if (arr[x] <= arr[y])
			co[ind++] = arr[x], x++;
		else
		{
			co[ind++] = arr[y], y++;
			cnt+=mid-x;
		}
			
	}
	while (x < mid)
		co[ind++] = arr[x], x++;
	while (y < r)
		co[ind++] = arr[y], y++;
	ind = 0;
	for (int i = l; i <r; i++)
		arr[i] = co[ind++];
}
int main()
{
	Mohammed_Atef_Hassan
		int t;
	cin >> t;
	while (t--)
	{
		cnt = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		mergesort(0, n);
		cout << cnt << finl;
	}
}
