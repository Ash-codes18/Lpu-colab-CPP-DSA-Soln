#include <iostream>
#include <string>

struct student
{
    std::string name;
    int rollNo;
    int mark1, mark2, mark3, mark4, mark5;
    int total;
    float average;
};

int main()
{
    student student;

    std::getline(std::cin >> std::ws, student.name);
    std::cin >> student.rollNo;
    std::cin >> student.mark1 >> student.mark2 >> student.mark3 >> student.mark4 >> student.mark5;

    student.total = student.mark1 + student.mark2 + student.mark3 + student.mark4 + student.mark5;
    student.average = static_cast<float>(student.total) / 5.0;

    std::cout << "NAME: " << student.name << std::endl;
    std::cout << "ROLL NO: " << student.rollNo << std::endl;

    if (student.mark1 >= 50 && student.mark2 >= 50 && student.mark3 >= 50 && student.mark4 >= 50 && student.mark5 >= 50)
    {
        std::cout << "RESULT: Pass" << std::endl;
        if (student.average >= 75)
        {
            std::cout << "Distinction" << std::endl;
        }
        else if (student.average >= 60)
        {
            std::cout << "First Class" << std::endl;
        }
        else if (student.average >= 50)
        {
            std::cout << "Second Class" << std::endl;
        }
    }
    else
    {
        std::cout << "RESULT: Fail" << std::endl;
    }

    return 0;
}