#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <string>

struct CityRecord
{
	std::string Name;
	uint64_t Population;
	double Latitude;
	double Longitude;
};

int main()
{
	std::string cityName;

	std::vector<CityRecord> cities = 
	{{"Berlin", 5000000, 128.6, 30.7},
	{"Paris", 15000000, 200.0, 85.7},
	{"Dallas", 4000000, 47.0, 85.7},
	{"New York", 8000000, 68.0, 95.7}};

	std::cout << "Enter name of city: ";
	std::cin >> cityName;

	for (const auto& city : cities)
	{
		if (city.Name == "Berlin")
		{
			std::cout << city.Name << std::endl;
			std::cout << city.Population << std::endl;
			break;
		}
	}
}


