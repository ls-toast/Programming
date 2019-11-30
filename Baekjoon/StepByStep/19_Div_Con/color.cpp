#include <iostream>
using namespace std;

int map[129][129];
int blue;
int white;

void divide(int x_st, int y_st, int x_ed, int y_ed) {
	int cntB = 0;
	int cntW = 0;
	for (int i = y_st; i <= y_ed; i++) {
		for (int j = x_st; j <= x_ed; j++) {
			if (map[i][j] == 1) 
                cntB++;
			else 
                cntW++;
		}
	}

	if (cntB == 0) { 
		white++; 
	}
	else if (cntW == 0) { 
		blue++;
	}
	else {
		divide(x_st, y_st, (x_st+x_ed)/2, (y_st+y_ed)/2); //1
		divide((x_st+x_ed)/2+1, y_st, x_ed, (y_st+y_ed)/2); //2
		divide(x_st, (y_st+y_ed)/2+1, (x_st+x_ed)/2, y_ed); //3
		divide((x_st+x_ed)/2+1, (y_st+y_ed)/2+1, x_ed, y_ed); //4
	}
	return;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			map[i][j] = x;
		}
	}

	divide(0, 0, n-1, n-1);
	cout << white << endl << blue;
}
