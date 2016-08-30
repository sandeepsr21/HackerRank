#include<iostream>
#include<vector>
using namespace std;
class Matrix {
public:
	vector<vector<int>> a;
	Matrix operator + (Matrix m2) {
		for (int i = 0; i<a.size(); i++)
		{
			for (int j = 0; j<a[0].size(); j++)
			{
				this->a[i][j] = this->a[i][j] + m2.a[i][j];
			}
		}
		return *this;
	}
};