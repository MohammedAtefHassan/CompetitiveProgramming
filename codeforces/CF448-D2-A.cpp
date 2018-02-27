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
int main()
{   
	Mohammed_Atef_Hassan
		int a, b, n;
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> a;
		sum1 += a;
	}
	for (int i = 0; i < 3; i++)
	{
		cin >> b;
		sum2 += b;
	}
	cin >> n;
	int total = sum1 / 5 + (sum1 % 5 ? 1 : 0) + sum2 / 10 + (sum2 % 10 ? 1 : 0);
	if (total <= n)
		cout << "YES" << finl;
	else
		cout << "NO" << finl;
}