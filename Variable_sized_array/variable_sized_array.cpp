#include<iostream>
using namespace std;
int main()
{
	int n, q, k;
	int q1, q2;
	cin >> n >> q;
	int **a = new int*[n];
	for (int i = 0; i<n; i++)
	{
		cin >> k;
		a[i] = new int[k];
		for (int j = 0; j<k; j++)
			cin >> a[i][j];

	}
	for (int i = 0; i<q; i++)
	{
		cin >> q1 >> q2;
		cout << a[q1][q2] << endl;
	}
	for (int i = 0; i<n; i++)
	{
		delete[] a[i];
	}
	delete[] a;
	return 0;
}
