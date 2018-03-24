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
int arr[1000];
int main()
{
	Mohammed_Atef_Hassan
		int n;
	string s;
	while (cin >> n&&n)
	{
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			cin.ignore();
			getline(cin, s);
			for (int j = 0; j < s.size(); j++)
			{
				if (s[j] != 'X')
					arr[i]++;
			}
		}
		int x = *min_element(arr, arr + n);

		for (int i = 0; i < n; i++)
			cnt += arr[i] - x;

		cout << cnt << finl;
		fill(arr, arr + 1000, 0);
	}
	

}
