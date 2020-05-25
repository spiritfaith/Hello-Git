#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
#define ms(x, n) memset(x,n,sizeof(x));
typedef  long long LL;
const int inf = 1<<30;
const LL maxn = 1e6+10;

int main()
{
	int i, j;
	while(cin >> i >> j){
		int n = 0;
		for(int k = min(i, j); k <= max(i, j); k++){
            int cnt = 1, cur = k;
            while(cur!=1){
                cur = (cur%2==0)?cur>>1:cur*3+1;
                cnt++;
            }
            n = max(n, cnt);
		}
		cout << i << ' ' << j << ' ' << n << endl;
	}

	return 0;
}
