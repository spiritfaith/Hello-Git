#include <iostream>
#include <queue>

#define SIZE 99
using namespace std;
int main() {
	// int n, m;
	// cin >> n >> m;
	queue<int> q;
	for(int i = 1; i <= SIZE; i++) {
		q.push(i);
	}
	int cur = 1;        //计数变量
	while(q.size() > 1) {
		int x = q.front();
		q.pop();
		if(cur == 5) {
			cur = 1;
		} else {
			q.push(x);
			cur++;
		}
	}
	cout << q.front() << endl;
	return 0;
}