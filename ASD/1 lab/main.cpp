#include <iostream>
#include <stack>
#include <string>

int main()
{
	int n = 0;
	std::string a;
	std::cin >> a;
	std::stack <char> steck;
	std::cout << "1";

	while (n != a.length())
	{

		if ((a[n] == '(') || (a[n] == '{') || (a[n] == '['))
			steck.push(a[n]);

		if (((a[n] == ')') && (steck.top() == '(')) || ((a[n] == '}' && steck.top() == '{')) || ((a[n] == ']') && (steck.top() == '[')))
			steck.pop();
		/*else
			if ((a[n] == ')') || (a[n] == '}') || (a[n] == ']'))
				steck.push(a[n]);*/
			
		n++;
	}


	if (steck.size() == 0)
		std::cout << "good";
	else
		std::cout << "bad";

	return 0;

}