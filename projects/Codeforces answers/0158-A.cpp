#include <iostream>
#include <cstring>
using namespace std;
 
int p[55];
 
int main()
{
	int n, k, ans;
 
	while(cin >> n >> k)
	{
		memset(p, 0, sizeof(p));
		ans = 0;
		for(int i = 0; i < n; i++)
			cin >> p[i];
		for(int i = 0; i < k; i++)
		{
			if(p[i] > 0)
				ans++;
			else
				break;
		}
		for(int i = k; i < n; i++)
		{
			if((p[i] > 0) && (p[i] >= p[k - 1]))
				ans++;
			else
				break;
		}
		cout << ans << endl;
	}
	return 0;
}
