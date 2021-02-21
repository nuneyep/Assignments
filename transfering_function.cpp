#include <iostream>
#include <vector>
void transferingFromVectToVect(std::vector<std::string>& sourceV,std::vector<std::string>& targetV)
{
	targetV.resize(sourceV.size());
	for (int i = 0; i< sourceV.size();++i)
	{
		targetV[i] = sourceV[i];
		
	}

	sourceV.clear();

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
	std::vector<std::string> v1 = { "Hey!","How","are","you?" };
	std::vector<std::string> v2 = { "I'm","good." };
	
	std::cout << "Before transfering data from v1 to v2..." << std::endl;
	std::cout << "Source Vector" << std::endl;
	printVector(v1);
	std::cout << "Target Vector" << std::endl;
	printVector(v2);

	transferingFromVectToVect(v1, v2);

	std::cout << std::endl;
	std::cout << "After transfering data from v1 to v2..." << std::endl;
	std::cout << "Source Vector" << std::endl;
	printVector(v1);
	std::cout << "Target Vector" << std::endl;
	printVector(v2);
}