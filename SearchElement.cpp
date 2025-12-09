#include <iostream>
using namespace std;


int main()
{
	setlocale(0, "");

	int arr[] = { 3,6,86,34,7,1 };
	int n = 5;
	int element = 11;

	int last = arr[n];
	arr[n] = element;
	int i = 0;

	while (arr[i] != element)
	{
		++i;
	}

	arr[n] = last;

	if (i < n || arr[n] == element)
		cout << i << endl;
	else
		cout << "Not found\n";

	return 0;
}



