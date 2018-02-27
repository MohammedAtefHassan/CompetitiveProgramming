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
int cr[200];
string ss[100000];
string arr[100000];
int main()
{   
	Mohammed_Atef_Hassan
		string s = "";
	getline(cin,s);
	int id = 0;
	bool b = true;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
		{
			if (b)
			{
				id++;
				b = false;
			}
			continue;
		}
		arr[id] += s[i];
		b = true;
	}
	id++;
	for (int i = 0; i < id; i++)
	{
		b = false;
		for (int j = 0; j < arr[i].size(); j++)
		{
				cout << arr[i][j];
				if (arr[i][j]<'a' || arr[i][j]>'z')
				{
					if (j < arr[i].size() - 1)
						cout << " ";
				}
				b = true;
		}
		if (arr[i + 1][0]<'a' || arr[i + 1][0]>'z')
		{
			if (i < id - 1)
			{
				cout << arr[i + 1][0];
				arr[i + 1].erase(arr[i + 1].begin());
			}
		}
		if (i<id-1&&b)
		cout << " ";
	}
	
}