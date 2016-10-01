#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
	vector<int> result;
	int temp = 0;
	stringstream ss(str);
	int it = 0;
	char ch;
	while (ss >> temp)
	{
		result.push_back(temp);
		ss >> ch;
	}
	return result;
}

int main() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for (int i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n";
	}

	return 0;
}