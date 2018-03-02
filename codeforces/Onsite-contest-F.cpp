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
ll arr[26];
int main()
{
	Mohammed_Atef_Hassan
		string s; int id = -1;
	cin >> s;
	for (int i = 0; i < 26; i++)
		cin >> arr[i];
	for (int i = 0; i < s.size(); i++)
	{
		ll mn = INT_MAX;
		char c = 'a';
		if (s[i]!='?')
		{
			if (id==-1)
			{
				if (i != 0)
				{
					for (int j = 0; j <=(int)(s[i] - 'a'); j++)
					{
						if (mn > abs(arr[(int)(s[i] - 'a')] - arr[j]))
						{
							c = (char)(j + 'a');
							mn = abs(arr[(int)(s[i] - 'a')] - arr[j]);
						}
					}
					for (int j = 0; j < i; j++)
						s[j] = c;
				}
			}
			else
			{
				for (int j = 0; j <=(int)(min(s[i],s[id])-'a'); j++)
				{
					if (mn > abs(arr[(int)(s[i] - 'a')] - arr[j]) + abs(arr[(int)(s[id] - 'a')] - arr[j]))
					{
						c = (char)(j + 'a');
						mn = abs(arr[(int)(s[i] - 'a')] - arr[j]) + abs(arr[(int)(s[id] - 'a')] - arr[j]);
					}
				}
				for (int j = id+1; j < i; j++)
					s[j] = c;
			}
			id = i;
		}
	}

	ll mn =100000;
	char c = 'a';
	if (id != s.size() - 1)
	{
		if (id != -1)
		{
			for (int j = 0; j <= (int)(s[id] - 'a'); j++)
			{
					if (mn > abs(arr[(int)(s[id] - 'a')] - arr[j]))
					{
						c = (char)(j + 'a');
						mn = abs(arr[(int)(s[id] - 'a')] - arr[j]);
					}
			}
		}
		for (int j = id + 1; j < s.size(); j++)
			s[j] = c;
	}
	ll sum = 0;
	for (int i = 1; i < s.size(); i++)
		sum += abs(arr[(int)(s[i] - 'a')] - arr[(int)(s[i - 1] - 'a')]);
	cout << sum << finl << s << finl;

}