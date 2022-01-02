// MyTest.cpp: 定义应用程序的入口点。
//

#include "MyTest.h"
#include <vector>

using namespace std;

void my_test()
{
	auto x = 2.2;
	cout << x << endl;

	vector<int> v{ 1,2,3,4,5,6 };
	for (const auto& e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

int main()
{
	cout << "Hello CMake." << endl;
	my_test();

	return 0;
}
