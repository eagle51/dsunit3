#include <iostream>
#include "Vector.h"
using namespace std;
int main(void)
{
	Vector<int> Vi;

	Vi.push_back(1);
	Vi.push_back(3);
	Vi.push_back(5);
	Vi.push_back(7);
	cout << Vi[0];

	system("pause");
	return 0;
}