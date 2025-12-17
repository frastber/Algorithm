#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int arr[]{ 1, 2, 3, 5, 7 };
	int p = 0, r = 4, q;
	int x = 7;

	while (p <= r)
	{
		q = (p + r) / 2;

		if (arr[q] == x)
		{
			cout << q << endl;
			break;
		}
		else if (arr[q] > x)
			r = q - 1;
		else
			p = q + 1;
	}

	return 0;
}
