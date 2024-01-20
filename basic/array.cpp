#include <iostream>
#include <array>

using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::array;

int main()
{
	int array[5] = {4, 5};
	array<int, 10> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// for (int i = 0; i < 5; ++i)
	// {
	// 	printf("%d ", array[i]);
	// }

	cout << "array size: " << sizeof array/sizeof array[0] << endl;
	cout << "array size: " << arr.size() << endl;

	// {4, 5, 0, 0, 0}

	return 0;
}
