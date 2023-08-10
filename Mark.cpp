#include <iostream>
#include <fstream>

int main() {
    std::ofstream outFile("student_records.txt", std::ios::out);  // Open the file for writing

    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing." << std::endl;
        return 1;
    }

    int numStudents;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        std::string studentName;
        std::string subjectName;
        int marks;

        std::cout << "Enter student name: ";
        std::cin.ignore();  // Clear newline left in the buffer
        std::getline(std::cin, studentName);

        std::cout << "Enter subject name: ";
        std::getline(std::cin, subjectName);

        std::cout << "Enter marks: ";
        std::cin >> marks;

        // Write data to the file
        outFile << "Student Name: " << studentName << "\n";
        outFile << "Subject Name: " << subjectName << "\n";
        outFile << "Marks: " << marks << "\n";
        outFile << "--------------------------\n";
    }

    outFile.close();  // Close the file

    std::cout << "Student records have been written to 'student_records.txt'." << std::endl;

    return 0;
}
