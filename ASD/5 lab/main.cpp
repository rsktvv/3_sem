#include<iostream>
//вставками
int main()
{
	
	int n,x,m,a;
	int key, j;
	
	std::cin >> n;
	int* mass = new int[n];

	for (int i = 0; i < n; i++)
		std::cin >> mass[i];

	for (int i = 1; i < n;i++)
	{
		 key = mass[i];
		 j = i - 1;
		while (j >= 0 &&  key < mass[j])
		{
			mass[j + 1] = mass[j];
			j =j- 1;
		}
		mass[j + 1] = key;
	}


	for (int i = 0; i < n; i++)
	{
		std::cout << mass[i] << " ";
	}
}