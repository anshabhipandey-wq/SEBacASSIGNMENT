#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollno;
    float marks;
    char grade;
};

// Function to assign grade based on marks
void assignGrade(struct Student *s) {
    if (s->marks >= 90)
        s->grade = 'A';
    else if (s->marks >= 80)
        s->grade = 'B';
    else if (s->marks >= 70)
        s->grade = 'C';
    else if (s->marks >= 60)
        s->grade = 'D';
    else
        s->grade = 'F';
}

// Function to find and print the topper
void printTopper(struct Student students[], int n) {
    int topIndex = 0;
    int i;

    for (i = 1; i < n; i++) {
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }

    printf("\nTop Performer\n");
    printf("Name  : %s\n", students[topIndex].name);
    printf("Marks : %.2f\n", students[topIndex].marks);
}

int main() {
    struct Student students[3];
    int i;

    // Accept data for 3 students
    for (i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        // Remove newline from name
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Roll Number: ");
        scanf("%d", &students[i].rollno);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        // Clear input buffer
        getchar();

        // Assign grade
        assignGrade(&students[i]);
    }

    // Display all student records
    printf("\n%-25s %-10s %-10s %-10s\n",
           "Name", "Roll No", "Marks", "Grade");
    printf("------------------------------------------------------------\n");

    for (i = 0; i < 3; i++) {
        printf("%-25s %-10d %-10.2f %-10c\n",
               students[i].name,
               students[i].rollno,
               students[i].marks,
               students[i].grade);
    }

    // Display topper
    printTopper(students, 3);

    return 0;
}

