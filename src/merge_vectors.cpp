#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::vector<int> firstVector{1,2,3,4,5};
	std::vector<int> secondVector{1,8,10,30,40};
	std::vector<int> mergeVector(10);
      
	std::merge (firstVector.begin(),firstVector.end(), secondVector.begin(),secondVector.end(),mergeVector.begin());

	for (auto const& value : mergeVector)
	{
		std::cout << value << std::endl;
	}
}

