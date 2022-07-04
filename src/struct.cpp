#include <iostream>
#include <string>


int main() {

    struct train {
        int numWheels;
	std::string type;
        int speed;
        int weight;	
    };


    train train1;
    train train2;

    train1.numWheels = 16;
    train1.type = "diesel";
    train2.numWheels = 32;
    train2.type = "steam";

    std::cout << "Train 1 has " << train1.numWheels << " wheels" << "\n";
    std::cout << "Train 2 has " << train2.numWheels << " wheels" << "\n";

    std::cout << "Train 1 is a " << train1.type << " train" << "\n";
    std::cout << "Train 2 is a " << train2.type << " train" << "\n";
}
