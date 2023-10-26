// 4_27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << " <500 :\n\n";

	for (int i = 0; i < 500; i++)
	{
		for (int j = 0; j < 500; j++)
		{
			for (int k = 0; k < 500; k++)
			{
				if ((i * i) == (j * j) + (k * k) && i != 0 && j != 0 && k != 0)
					cout << "	" << i << "	" << j << "	" << k << "\n";
			}
		}
	}
}


