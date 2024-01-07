#include <stdio.h>

// Define a structure to hold student information
struct Student {
    char name[50];
    int rollNumber;
    char branch[50];
    float mathMarks;
    float ppsMarks;
    float chemistryMarks;
};

int main() {
    // Open the file for writing
    FILE *file = fopen("STUD_FL", "w");

    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write student information to the file
    printf("Enter information for 10 students:\n");
    for (int i = 0; i < 10; i++) {
        struct Student student;

        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", student.name);
        printf("Roll Number: ");
        scanf("%d", &student.rollNumber);
        printf("Branch: ");
        scanf("%s", student.branch);
        printf("Marks in Math: ");
        scanf("%f", &student.mathMarks);
        printf("Marks in PPS: ");
        scanf("%f", &student.ppsMarks);
        printf("Marks in Chemistry: ");
        scanf("%f", &student.chemistryMarks);

        fprintf(file, "%s %d %s %.2f %.2f %.2f\n",
                student.name,
                student.rollNumber,
                student.branch,
                student.mathMarks,
                student.ppsMarks,
                student.chemistryMarks);
    }

    // Close the file
    fclose(file);

    // Open the file for reading
    file = fopen("STUD_FL", "r");

    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    struct Student students[10];

    // Read student information from the file
    for (int i = 0; i < 10; i++) {
        fscanf(file, "%s %d %s %f %f %f",
               students[i].name,
               &students[i].rollNumber,
               students[i].branch,
               &students[i].mathMarks,
               &students[i].ppsMarks,
               &students[i].chemistryMarks);
    }

    // Find the student with the highest marks in PPS subject
    int highestIndex = 0;
    float highestPPSMarks = students[0].ppsMarks;

    for (int i = 1; i < 10; i++) {
        if (students[i].ppsMarks > highestPPSMarks) {
            highestPPSMarks = students[i].ppsMarks;
            highestIndex = i;
        }
    }

    // Display information of the student with the highest PPS marks
    printf("\nStudent with highest marks in PPS:\n");
    printf("Name: %s\n", students[highestIndex].name);
    printf("Roll Number: %d\n", students[highestIndex].rollNumber);
    printf("Branch: %s\n", students[highestIndex].branch);
    printf("Marks in PPS: %.2f\n", students[highestIndex].ppsMarks);

    // Close the file
    fclose(file);

    return 0;
}
