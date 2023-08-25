#include <bits/stdc++.h>
using namespace std;

int main()
{
	cout << "RADHE RADHE RAM RAM" << endl;
	int t;
	cin >> t;
	auto Solve = []() {
		int n, m;
		cin >> n >> m;
		
		char vika[4] = {'v', 'i', 'k', 'a'};
		
		vector <string> v(n);
		
		for(auto &s: v)
			cin >> s;
		
		int ind = 0, currChar = 0;
		
		while(ind < m and currChar < 4)
		{
			for(int i=0;i<n;i++)
			{
				if(v[i][ind] == vika[currChar])
				{
					currChar++;
					break;
				}
			}
		}
		
		if(currChar == 4)
			cout << "YES\n";
		else
			cout << "NO\n";
	};
	
	while(t--)
		Solve();	
	return 0;	
}
