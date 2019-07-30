#include<iostream>
#include<queue>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, num;
		cin >> n;
		priority_queue< int, vector<int>, greater<int> > min_heap;
		priority_queue<int> max_heap;
		for (int i = 1; i <= n; i++) {
			cin >> num;
			if (max_heap.size() == min_heap.size()) {
				if (min_heap.empty()) {
					max_heap.push(num);
				}
				else {
					if (min_heap.top() <= num) {
						int t = min_heap.top();
						min_heap.pop();
						min_heap.push(num);
						num = t;
					}
					max_heap.push(num);
				}
			}
			else {
				if (max_heap.top() > num) {
					int t = max_heap.top();
					max_heap.pop();
					max_heap.push(num);
					num = t;
				}
				min_heap.push(num);
			}
			cout << max_heap.top() << " ";
		}
		cout << endl;
	}

	return 0;
}
