#include<iostream>
//shelд
int main()
{
	int n,x,m,step;

	std::cin >> n;
	int* mass = new int[n];

	for (int i = 0; i < n; i++)
		std::cin >> mass[i];

	for (step = n / 2; step > 0; step /= 2)
	{
		for (int i = step; i < n; ++i)
		{
			for (int j = i-step; j >= 0 && mass[j]>mass[j+step]; j -= step)
			{
				std::swap(mass[j], mass[j + step]);
			}
		}
	}
    
	for (int i = 0; i < n; i++)
		std::cout << mass[i] << " ";
}