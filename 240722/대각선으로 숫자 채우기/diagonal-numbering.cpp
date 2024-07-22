#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int arr[100][100];
	int num = 1;
	// 1) n = m 정사각형
	if (m == n) {
		for (int i = 0; i < n + m - 1; i++) {
			if (i <= m - 1) {
				for (int j = i; j >= 0; j--) {
					arr[i - j][j] = num;
					num++;
				}
			}
			else {
				for (int j = m - 1; i - j < m; j--) {
					arr[i - j][j] = num;
					num++;
				}
			}
		}
	}
	// 2) n > m 아래로 길쭉한 직사각형
	else if (n > m) {
		for (int i = 0; i < n + m - 1; i++) {
			if (i == 0) {
				arr[0][0] = num;
				num++;
			}
			else {
				for (int j = m - 1; i - j <= i; j--) {
					arr[i - j][j] = num;
					num++;
				}
			}
		}
	}
	// 3) m > n 옆으로 길쭉한 직사각형
	else {
		for (int i = 0; i < n + m - 1; i++) {
			if (i <= m - 1) {
				if (i < n) {
					for (int j = i; j >= 0; j--) {
						arr[i - j][j] = num;
						num++;
					}
				}
				else if (i < m) {
					for (int j = i; i - j < n; j--) {
						arr[i - j][j] = num;
						num++;
					}
				}
			}
			else {
				for (int j = m - 1; i - j < n; j--) {
					arr[i - j][j] = num;
					num++;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}