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
ll arr[1000];
int main()
{
	Mohammed_Atef_Hassan
		int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i += 2)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[j] < arr[i])
				swap(arr[i], arr[j]);
		}
	}
	for (int i = 1; i < n; i += 2)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[j] > arr[i])
				swap(arr[i], arr[j]);
		}
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << finl;
}