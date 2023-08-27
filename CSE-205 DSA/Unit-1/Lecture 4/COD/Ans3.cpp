#include <iostream>
#include <iomanip> // Required for setprecision

// Function to merge and calculate average grades
void mergeAndCalculateAverage(const double gradeArrays[][100], int numStudents, int numSubjects, double averageGrades[]) {
    // Calculate the maximum number of subjects
    int maxSubjects = 0;
    for (int i = 0; i < numStudents; i++) {
        if (numSubjects > maxSubjects) {
            maxSubjects = numSubjects;
        }
    }

    // Initialize the averageGrades array
    for (int i = 0; i < numStudents; i++) {
        averageGrades[i] = 0;
    }

    // Merge and calculate average grades
    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < numSubjects; j++) {
            averageGrades[i] += gradeArrays[i][j];
        }
        averageGrades[i] /= numSubjects;
    }
}

// Main function
int main() {
    const int MAX_STUDENTS = 100;
    const int MAX_SUBJECTS = 100;

    double gradeArrays[MAX_STUDENTS][MAX_SUBJECTS];
    double averageGrades[MAX_STUDENTS];
    int numStudents, numSubjects;

    // Read the number of students and subjects
    std::cin >> numStudents;
    std::cin >> numSubjects;

    // Read the grades for each student and subject
    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < numSubjects; j++) {
            std::cin >> gradeArrays[i][j];
        }
    }

    // Merge and calculate average grades
    mergeAndCalculateAverage(gradeArrays, numStudents, numSubjects, averageGrades);

    // Display the average grades
    std::cout << "Average grades:\n";
    for (int i = 0; i < numStudents; i++) {
        std::cout << "Student " << i + 1 << ": " << std::fixed << std::setprecision(1) << averageGrades[i] << std::endl;
    }

    return 0;
}