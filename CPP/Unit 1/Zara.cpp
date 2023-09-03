#include <iostream>
enum class Direction {
    North = 1,
    East,
    West,
    South
};


class Navigator {
public:
    void setDirection(int dir) {
        if (dir >= static_cast<int>(Direction::North) && dir <= static_cast<int>(Direction::South)) {
direction = static_cast<Direction>(dir);
        } else {
            direction = Direction::North; 
            invalidInput = true;
        }
    }
        
    void printNavigationInstruction() const {
        
        if (invalidInput){
        
        std::cout<<"Invalid Input"<<std::endl;
        return;}
    
        switch (direction) {
            case Direction::North:
                    std::cout << "We are headed towards North." << std::endl;                                                                        
                    break;
            case Direction::East:                                                                            
                    std::cout << "We are headed towards East." << std::endl;
                    break;
            case Direction::West:
                    std::cout << "We are headed towards West." << std::endl;
                    break;                  
            case Direction::South:
                    std::cout << "We are headed towards South." << std::endl;
                    break;
            default:
                    std::cout << "" << std::endl;
        }
    }
            
private:
    Direction direction;
    bool invalidInput = false;
};

int main() {
    int directionInput;
    std::cin >> directionInput;
                              
    Navigator navigator;
    navigator.setDirection(directionInput);
    navigator.printNavigationInstruction();
                        
    return 0;
}
//sushant
