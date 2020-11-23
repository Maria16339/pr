#include <iostream>
#include <iomanip>
using namespace std;
void Print(int** a, const int m, const int n)
{
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}
int main()
{
	bool symmetric;
	int m, n;
	cout << "Enter rows count: "; cin >> m;
	cout << "Enter columns count: "; cin >> n;
	int** a = new int* [m];
	for (int i = 0; i < m; i++)
		a[i] = new int[n];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "," << j << "] = "; cin >> a[i][j];
		}
			Print(a, m, n);
			for (int i = 0; i < m; i++)
				symmetric = true;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (a[i][j] != a[j][i]) symmetric = false;
				}
			}
			
			if (symmetric) cout << "YES";
			else cout << "NO";
				
			delete[] a;
			return 0;
		}