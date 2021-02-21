#include <iostream>
#include <vector>
#include <sstream>
#include <map>

int main()
{
	int m=4;
	do {
		std::cout << "Enter total number of products" << std::endl;
		std::cin >> m;
	} while (m <= 0 || m > 100);


	std::vector<int> products(m);

	std::map<std::string,int> actions = { {"ADD",1},{"SELL",2},{"DUMP",3},{"DUMPALL",4} };

	std::cout << "Enter the action..." << std::endl;

	std::string action;
	std::getline(std::cin, action); // ignoring first cin


	while (std::getline(std::cin, action))
	{
		std::istringstream stream(action);
		std::string actionname;
		stream >> actionname;
		int value;
		stream >> value;
		if (actionname == "DUMPALL")
			value = m;
		if (value == 0 || value > m)
			continue;


		switch (actions[actionname])
		{
		case 1:
			products[value - 1]++;
			break;
		case 2:
			if (products[value - 1] > 0)
			{
				products[value - 1]--;
			}
			else
			{
				std::cout << "Product can't be sold" << std::endl;
			}
			break;
		case 3:
			std::cout << products[value - 1] << std::endl;
			break;
		case 4:
			for (int i = 0; i < m; i++)
			{
				std::cout << products[i] << std::endl;
			}
			break;
			
		default:
			break;
		}
	}

}