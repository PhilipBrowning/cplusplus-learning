#include <iostream>
namespace Avg {
    float Calculate(float x, float y)
    {
        return (x +y / 2);
    }
}

// if you create another Calculate function it will clash without a namespace

int main()
{
    float outputAverage = Avg::Calculate(3.9f, 5.2f);
    std::cout << outputAverage << std::endl;
}
