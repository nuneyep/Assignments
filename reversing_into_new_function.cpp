#include <iostream>
#include <vector>


std::vector<std::string> reversingVectorIntoNew(std::vector<std::string>& sourceV)
{
	std::vector<std::string> targetV(sourceV.size());
	int i = 0;
	for (std::vector<std::string>::reverse_iterator it = sourceV.rbegin(); it != sourceV.rend(); it++)
	{
		targetV[i++] = *it;
	}
	return targetV;
}


void printVector(const std::vector<std::string>& v)
{
	for (auto elem : v)
	{
		std::cout << elem << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::vector<std::string> v1 = { "Testing","reversing","function","of","vector","of","strings"};

	std::vector<std::string> v2 = reversingVectorIntoNew(v1);
	printVector(v1);
	printVector(v2);
}