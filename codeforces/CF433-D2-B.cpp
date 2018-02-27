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
ll sum2[200000];
ll sum1[200000];
int main()
{   
	Mohammed_Atef_Hassan
		int n;
	cin >> n;
	for (int i = 1; i <=n; i++)
	{
		cin >> sum1[i];
		sum2[i] = sum1[i];
	}
	sort(sum2+1, sum2 + n+1);
	for (int i = 1; i <=n; i++)
	{
		sum1[i] += sum1[i - 1];
		sum2[i] += sum2[i - 1];
	}
	int m;
	cin >> m;
	int k, l, r;
	while (m--)
	{
		cin >> k >> l >> r;
		if (k == 1)
			cout << sum1[r] - sum1[l - 1];
		else
			cout << sum2[r] - sum2[l - 1];
		cout << finl;
	}
}