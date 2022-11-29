#include<iostream>



int main()
{
	int n,x,m;
	std::cin >> n;
	int* mass = new int[n];
	for (int i = 0; i < n; i++)
		std::cin >> mass[i];

	for (int i = 1; i < n; i++)
	{
		for (int j = i+1; j < n; j--)
		{
			while (j > 1 && mass[i] > mass[j])
			{
				std::swap(mass[i], mass[i + 1]);
				
			}
		}
		
		
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << mass[i] << " ";
	}
}