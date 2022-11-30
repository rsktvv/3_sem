#include<iostream>

int main()
{
	int n,x,m;
	std::cin >> n;
	int* mass = new int[n];
	for (int i = 0; i < n; i++)
		std::cin >> mass[i];

    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (mass[j] < mass[min])
                min = j;
        }
            
        if (min != i)
            std::swap(mass[i], mass[min]);
    }

	for (int i = 0; i < n; i++)
		std::cout << mass[i] << " ";
}