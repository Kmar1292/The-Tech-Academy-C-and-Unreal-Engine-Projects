#include <iostream>

class Dog {
public:
    std::string Breed;
    std::string Color;
    std::string Height;
    std::string Weight;

    Dog(std::string breed, std::string color, std::string height, std::string weight){
        Breed = breed;
        Color = color;
        Height = height;
        Weight = weight;
    }
    void Shake() {
        std::cout << "Shake" << std::endl;
    };
    void Sit() {
        std::cout << "Sit" << std::endl;
    };
    void LayDown() {
        std::cout << "Lay down" << std::endl;
    };
};

int main()
{
    Dog Spot("Hound", "Brown", "2 feet", "60 pounds");
    std::cout << Spot.Breed + ", " + Spot.Color + ", " + Spot.Height + ", " + Spot.Weight << std::endl;
}
