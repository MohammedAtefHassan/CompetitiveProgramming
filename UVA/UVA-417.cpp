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
	//	infile();
	//	outfile();
}
map<string, int>mp;
int main()
{
	Mohammed_Atef_Hassan
		int cnt = 0;
	string a = "";
	for (int i = 0; i < 26; i++)
	{
		cnt++;
		a += (char)(i + 'a');
		mp[a] = cnt;
		a = "";
	}
	for (int i = 0; i < 26;i++)
	for (int j =i+1; j< 26; j++)
	{
		cnt++;
		a += (char)(i + 'a'); a += (char)(j + 'a');
		mp[a] = cnt;
		a = "";
	}
	for (int k = 0; k < 26;k++)
	for (int i = k+1; i < 26; i++)
	for (int j = i + 1; j< 26; j++)
	{
		cnt++;
		a += (char)(k + 'a'); a += (char)(i + 'a'); a += (char)(j + 'a');
		mp[a] = cnt;
		a = "";
	}
	for (int l = 0; l < 26;l++)
	for (int k = l+1; k < 26; k++)
	for (int i = k + 1; i < 26; i++)
	for (int j = i + 1; j< 26; j++)
	{
		cnt++;
		a += (char)(l + 'a'); a += (char)(k + 'a'); a += (char)(i + 'a'); a += (char)(j + 'a');
		mp[a] = cnt;
		a = "";
	}
	for (int m = 0; m < 26;m++)
	for (int l = m+1; l < 26; l++)
	for (int k = l + 1; k < 26; k++)
	for (int i = k + 1; i < 26; i++)
	for (int j = i + 1; j< 26; j++)
	{
		cnt++;
		a += (char)(m + 'a'); a += (char)(l + 'a'); a += (char)(k + 'a'); a += (char)(i + 'a'); a += (char)(j + 'a');
		mp[a] = cnt;
		a = "";
	}
	while (cin >> a)
	{
		cout << mp[a] << finl;
	}
}