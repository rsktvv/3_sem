#include<iostream>
#include<math.h>


int main()
{

	int a, b, c;
	int x = 20;
	
	for(int i = 1; i < x; i++)
	{
		for (int k = 0; k < x; k++)
		{
			for (int l = 0; l < x ; l++)
			{
				for (int m = 0; m < x; m++)
				{
					a = std::pow(3, k);
					b = std::pow(5, l);
					c = std::pow(7, m);
					if (a * b * c == i)
						std::cout << i << " ";
				}
			}
		}
		
	}
	
}