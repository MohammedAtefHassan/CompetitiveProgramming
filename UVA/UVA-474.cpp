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
	//	outfile();
}
vector<vector<int> >v;
map<vector<int>, bool>mp;
int n, k;
int arr[100000];
int main()
{
	Mohammed_Atef_Hassan
		vector<int>s;
	while (cin >> k >> n&&n)
	{
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		for( ll i = 1; i < (1 << n);i++)
		{
			ll sum = 0, m = i; int j = 0;
			while (m)
			{
				if (m & 1)
					sum += arr[j], s.push_back(arr[j]);
				j++; m = m >> 1;
			}
			if (sum == k)
			{
				if (mp[s] == false)
					v.push_back(s), mp[s] = true;
			}
			s.clear();
		}
		cout << "Sums of " << k << ":" << finl;
		if (mp.size() == 0)
			cout << "NONE" << finl;
		for (map<vector<int>, bool>::reverse_iterator i = mp.rbegin(); i != mp.rend(); i++)
		{
			for (int j = 0; j < i->first.size() - 1; j++)
				cout << i->first[j] << "+";
			cout << i->first[i->first.size() - 1] << finl;
		}
		v.clear();
		mp.clear();
	}
}
