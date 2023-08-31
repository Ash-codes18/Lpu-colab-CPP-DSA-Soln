#include <iostream>
#include <iomanip>
#include <cmath>

double calculate_average_grade(int numSubjects, int* grades)
{   
    int total_grade = 0;
    for (int i = 0; i<numSubjects; ++i)
    {
        total_grade += grades[i];
    }
    
    double average_grade = static_cast<double>(total_grade) / numSubjects;
    return round(average_grade * 10) / 10;
}

int main ()
{
    int numStudents, numSubjects;
    std::cin>> numStudents >> numSubjects;
    double* average_grades = new double[numStudents];
    
    for(int i = 0; i < numStudents; ++i)
    {   int* student_grades = new int[numSubjects];
    for(int j = 0; j < numSubjects; ++j){
        std::cin >> student_grades[j];
    }
    average_grades[i] = calculate_average_grade(numSubjects, student_grades);
    delete[] student_grades;
}

        std::cout<<"Average grades:"<<std::endl;
for(int i = 0; i < numStudents; ++i)
{   
    std::cout << "Student "<< i + 1 <<": "<<std::fixed <<std ::setprecision(1)<< average_grades[i]<<std::endl;
}
delete[] average_grades;
return 0;
}
