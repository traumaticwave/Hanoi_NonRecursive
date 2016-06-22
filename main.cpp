#include <iostream>
#include <vector>
#include "hanoi.h"

using namespace std;

void hanoi(int, pole, pole, pole);

int main()
{
	int height;
	/*
	cout << "Input the height of tower : ";
	cin >> height;

	hanoi(height, FROM, BY, TO);
	*/

	cout << "Nonrecursive method" << endl;

	typedef struct {
		int height;
		pole from;
		pole by;
		pole to;
	} tower;
	vector<tower> m_tower;

	int n = height;
	tower temp{ n, FROM, BY, TO };

	while (true) {
		while (n > 0) {
			m_tower.push_back(temp);
			n--;
			temp = { n, temp.from, temp.to, temp.by };
		}

		if (!m_tower.empty()) {
			temp = m_tower.back();
			m_tower.pop_back();
			cout << temp.height << " move from " << temp.from << " to " << temp.to << "!" << endl;
			n = temp.height - 1;
			temp = { n, temp.by, temp.from, temp.to };
		}
		else {
			break;
		}
	}

	return 0;
}