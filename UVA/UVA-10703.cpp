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
	//    infile();
	//	outfile();
}
bool arr[502][502];
int main()
{
	Mohammed_Atef_Hassan
		int w, h, n;
	int x1, y1, x2, y2;
	while (cin >> w >> h >> n&&w&&h)
	{
		int cnt = 0;
		while (n--)
		{
			cin >> x1 >> y1 >> x2 >> y2;
			for (int i = min(x1, x2); i <= max(x1, x2);i++)
			for (int j = min(y1, y2); j <= max(y1, y2); j++)
				arr[i][j] = true;
		}

		for (int i = 1; i <= w; i++)
		for (int j = 1; j <= h; j++)
		if (arr[i][j] == false)
			cnt++;

		cout << "There ";
		if (cnt == 0)
			cout << "is no empty spots." << finl;
		else if (cnt == 1)
			cout << "is one empty spot." << finl;
		else
			cout <<"are "<< cnt<< " empty spots." << finl;
		for (int i = 1; i <= w;i++)
		for (int j = 1; j <= h; j++)
			arr[i][j] = false;	
	}
}