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
int arr[200];
int cr[200];
int main()
{   
	Mohammed_Atef_Hassan
		int n, a,x;
	cin >> n >> a;
	int cnt = 0;
	for (int i = 1; i <=n; i++)
	{
		cin >> x;
		if (x)
			cr[abs(a - i)]++;
		else
			cr[abs(a - i)]--;
	}
	for (int i = 0; i < n; i++)
	if (cr[i]>0)
		cnt += cr[i];
	cout << cnt << finl;
}