#include <iostream>
#include "hanoi.h"

using namespace std;

void hanoi(int n, pole from, pole by, pole to)
{
	if (n < 1)
		return;

	hanoi(n - 1, from, to, by);
	cout << n << " th disk move from " << from << " to " << to << "!" << endl;
	hanoi(n - 1, by, from, to);

	return;
}