#include <iostream>
#include <vector>
#include <algorithm>
constexpr auto PI = 3.1415926;
using namespace std;

int main()
{
	int a[] = { 20, 30, 90, 10, 60 ,70};
	vector<int>b(a, a + 5);
	vector<int>::iterator p = max_element(b.begin(), b.end());
	vector<int>::iterator q = min_element(b.begin(), b.end());

	cout << (*p) << endl;
	cout << (*q) << endl;
	cout << distance(b.begin(), p) << endl;
	return 0;
}
