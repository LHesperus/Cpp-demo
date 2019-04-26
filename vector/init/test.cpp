// test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivec;
	cout << ivec.empty() << endl;
	for (int i = 0; i < 10; i++)
	{
		ivec.push_back(i);
	}
	cout << ivec.empty() << endl;
	cout << ivec.size() << endl;
	


}
