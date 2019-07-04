#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		try
		{
			if (a != b)
			{
				throw runtime_error("Data shoule same");
			}
			else
			{
				cout << "a=" << a<<" ; b="<<b<<endl;
				cout << "a+b=" << a + b;
				break;
			}
		}
		catch (runtime_error err)
		{
			cout << err.what() << endl;
			cout << "Are you coutinue" << endl;
			char c;
			cin >> c;
			if (c == 'N')
			{
				break;
			}
		}
	}
 
}