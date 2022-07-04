#include <iostream>

class Critter
{
    public:
	int m_Hunger;
	int m_Health;
	void Greet();
};

void Critter::Greet()
{
	std::cout << "Hi, I'm a critter. My hunger level is " << m_Hunger << ".\n";
	std::cout << "Hi, I'm a critter. My current health is " << m_Health << ".\n";

}

int main()
{
	Critter crit1;
	Critter crit2;

	crit1.m_Hunger = 1;
	crit2.m_Hunger = 3;
	crit1.m_Health = 80;
	crit2.m_Health = 90;

	std::cout << "Crit1's hunger level is: " << crit1.m_Hunger << ".\n";
	std::cout << "Crit2's hunger level is: " << crit2.m_Hunger << ".\n";
	std::cout << "Crit1's health is: " << crit1.m_Health << ".\n";
	std::cout << "Crit2's health is: " << crit2.m_Health << ".\n";

	crit1.Greet();
	crit2.Greet();

}
