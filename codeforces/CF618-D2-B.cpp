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
int x[55][55];
int arr[55];
bool b[55];
int main()
{   
	Mohammed_Atef_Hassan
		int n;
	cin >> n;
	int id = 0;
	for (int i = 1; i <= n;i++)
	for (int j = 1; j <= n; j++)
		cin >> x[i][j];
		
	for (int i = 1; i <= n; i++)
	{
		bool s = true;
		for (int j = 1; j <= n; j++)
		{
			b[x[i][j]] = true;
		}
		for (int j = 1; j < n;j++)
		if (b[j] == false)
			s = false;
		if (s)
		{
			for (int j = 1; j <= n; j++)
			{
				cout << (x[i][j] ? x[i][j] : n) << " ";
			}
			cout << finl;
			return 0;
		}
		for (int j = 1; j <= n; j++)
			b[j] = false;
	}
	
}