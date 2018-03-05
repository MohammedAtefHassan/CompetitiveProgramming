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
int arr[22];
int main()
{
	Mohammed_Atef_Hassan
		int t,n,k;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		bool b = true;
		for (int i = 1; i <(1<<n)&&b; i++)
		{
			int sum = 0;
			int m = i;
			for (int j = 0; m; j++)
			{
				if (m & 1)sum += arr[j];
				m=(m >> 1);
			}
			if (sum == k)
				cout << "Yes" << finl, b = false;
		}
		if (b)
			cout << "No" << finl;
	}
}