#include <iostream>
using namespace std;

int RecursiveBinarySearch(int A[], int p, int r, int x)
{

	if (p > r)
		return 0;
	else if (p <= r) {

		int q = (p + r) / 2;

		if (A[q] == x)
			return q;
		else if (A[q] > x)
			return RecursiveBinarySearch(A, p, q - 1, x);
		else if (A[q] < x)
			return RecursiveBinarySearch(A, q + 1, r, x);

	}

	return 0;
}

int main()
{
	setlocale(0, "");

	int arr[]{ 1, 2, 3, 5, 7 };
	int p = 0, r = 4, q;
	int x = 7;

	cout << RecursiveBinarySearch(arr, p, r, x);

	return 0;
}
