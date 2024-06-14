/*MAYANK 2K21/EP/59*/
#include <iostream>

// Forward declaration of Marks class
class Marks;

class Student {
public:
    // Default constructor to initialize the Marks object
    Student() : marks(10,80,50,60,90) {}

    // Friend function to calculate and display the average of marks
    friend void calculateAverage(const Student &student) {
        int totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += student.marks.marks[i];
        }
        double average = static_cast<double>(totalMarks) / 5.0;
        std::cout << "Average marks of students: " << average << std::endl;
    }

public:
    Marks marks;
};

class Marks {
private:
    int marks[5]; // Array to store marks of 5 students

public:
    // Constructor to initialize the marks
    Marks(int m1, int m2, int m3, int m4, int m5) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        marks[3] = m4;
        marks[4] = m5;
    }

    // Declare Student class as a friend
    friend void calculateAverage(const Student &student);
};

int main() {
    int m1, m2, m3, m4, m5;

    // Input marks of 5 students
    std::cout << "Enter marks of 5 students: ";
    std::cin >> m1 >> m2 >> m3 >> m4 >> m5;

    // Create an object of Student class
    Student student;

    // Calculate and display the average of marks
    calculateAverage(student);

    return 0;
}
