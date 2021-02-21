#include <iostream>
#include <vector>

void reversingVector(std::vector<std::string>& v)
{
	//std::reverse(v.begin(), v.end());
	
	for (int i = 0; i < v.size() / 2; ++i)
	{
		std::string tmp = v[i];
		v[i] = v[v.size() - i - 1];
		v[v.size() - i - 1] = tmp;

	}
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
	std::vector<std::string> v = { "Testing","reversing","function","of","vector","of","strings" };
	printVector(v);
	reversingVector(v);
	printVector(v);
}