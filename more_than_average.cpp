#include <iostream>
#include <vector>

int main()
{
	int n;
	

	do{
		std::cout << "Enter total number of students..." << std::endl;
		std::cin >> n;
	} 
	while (n <= 0 || n > 100);

	std::vector<int> grades;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		int k;
		
		do{
			std::cout << "Enter the grade of " << i + 1 << "th student..." << std::endl;
			std::cin >> k;
		} while (k < 0 || k>100);
		
		grades.push_back(k);
		sum += k;
	}


	std::cout << "List of student ID's with more than average grade..." << std::endl;

	for (int i = 0; i < n; ++i)
	{
		if (grades[i] > (sum / n))
		{
			std::cout << i + 1 << std::endl;
		}
	}

	
}