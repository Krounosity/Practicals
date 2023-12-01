#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100
#define SEMI 60
    // Declaring file pointer.
    FILE *EMP_ptr;

struct emp_data {
    char id[4];
    char name[MAX];
    char designation[60];
    char salary[MAX];
} emp[10];

void data_read(int i) {
    printf("For employee %d:", i + 1);
    //Employee ID
    printf("\n Employee ID: ");
    scanf("%s", emp[i].id);
    //Clearing input buffer
    while ((getchar()) != '\n');

    //Employee Name
    printf("\n Employee's Full Name: ");
    fgets(emp[i].name, MAX, stdin);
    //Adding terminating element at the end of the string
    int l_name = strlen(emp[i].name);
    emp[i].name[l_name - 1] = '\0';

    //Employee Designation
    printf("\n Employee Designation: ");
    fgets(emp[i].designation, SEMI, stdin);
    //Adding terminationg element at the end of the string
    int l_desig = strlen(emp[i].designation);
    emp[i].designation[l_desig - 1] = '\0';

    //Employee Salary
    printf("\n Employee Salary (without commas): ");
    scanf("%s", emp[i].salary);
    //Clearing input buffer
    while ((getchar()) != '\n');
}

void transfer_data(int j){
    fputs("\n\n",EMP_ptr);
    fputs("Employee ID: ",EMP_ptr);
    fputs(emp[j].id,EMP_ptr);
    fputs("\nEmployee Full Name: ",EMP_ptr);
    fputs(emp[j].name,EMP_ptr);
    fputs("\nEmployee Designation: ",EMP_ptr);
    fputs(emp[j].designation,EMP_ptr);
    fputs("\nEmployee Salary: ",EMP_ptr);
    fputs(emp[j].salary,EMP_ptr);
}
int main() {
    // Creating file.
    EMP_ptr = fopen("EMP_FL.txt", "w");

    // Putting and printing a string.
    printf("Data of 10 employees: ");
    fputs("Data of 10 employees: ", EMP_ptr);

    // Taking in data.
    for (int i = 0; i < 10; i++) {
        data_read(i);
        //Transferring data from structure to the created file
        transfer_data(i);
    }
    fclose(EMP_ptr);
    // Putting data from structure to the file.
    // Printing back the data

    return 0;
}
