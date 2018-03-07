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
int arr[101][101];
int main()
{
	Mohammed_Atef_Hassan
		int n;
	while (cin >> n&&n)
	{
		int x = -1, y = -1;
		for (int i = 1; i <= n;i++)
		for (int j = 1; j <= n; j++)
			cin >> arr[i][j];

		bool b = true;
		for (int i = 1; i <=n; i++)
		{
			int sum = 0;
			for (int j = 1; j <= n; j++)
				sum += arr[i][j];
			if (sum & 1)
			{
				if (x == -1)
					x = i;
				else
					b = false;
			}
		}
		for (int i = 1; i <= n; i++)
		{
			int sum = 0;
			for (int j = 1; j <= n; j++)
				sum += arr[j][i];
			if (sum & 1)
			{
				if (y == -1)
					y = i;
				else
					b = false;
			}
		}
		if (b)
		{
			if (x==-1&&y==-1)
				cout << "OK" << finl;
			else if (x!=-1&&y!=-1)
			{
				cout << "Change bit (" << x << "," << y << ")" << finl;
			}
			else
				cout << "Corrupt" << finl;
		}
		else
			cout << "Corrupt" << finl;
			
	}
}