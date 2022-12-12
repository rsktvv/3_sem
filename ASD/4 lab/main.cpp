#include<iostream>
//методом причесывания
int main()
{
	int n,x,m,a;
	

	std::cin >> n;
	int* mass = new int[n];
	for (int i = 0; i < n; i++)
		std::cin >> mass[i];
	
	double fact = 1.2473309;
	int step = n - 1;
	

	while (step >= 1)
	{
		for (int i = 0; i + step < n; i++)
		{
			if (mass[i] > mass[i + step])
				std::swap(mass[i], mass[i + step]);
			step /= fact;
		}
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << mass[i] << " ";
	}
}