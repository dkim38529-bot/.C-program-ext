/*  
Name: Derrick Mathenge  
Regno: CT100/26181/25  
Description: Reading student results from a binary file  
*/

#include <stdio.h>
#include <stdlib.h>

// Step i: Define a structure to hold the student information
struct Student {
    char name[50];
    char regno[20];
    int marks;
};

int main() {
    struct Student s;
    FILE *pc;

    // Open binary file for reading and writing ("wb+" creates a new file)
    pc = fopen("C:\\Users\\admin\\OneDrive\\Attachments\\new\\results.dat", "wb+");
    if (pc == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Step ii: Read student data from the user
    printf("Enter your name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter your registration number: ");
    scanf(" %s", s.regno);

    printf("Enter your total marks: ");
    scanf("%d", &s.marks);

    // Write the record to the binary file
    fwrite(&s, sizeof(struct Student), 1, pc);

    // Move file pointer to the beginning for reading
    rewind(pc);

    // Read the record back from the file
    struct Student readS;
    fread(&readS, sizeof(struct Student), 1, pc);

    // Step iii: Display the student's name and marks
    printf("\n--- Student Record ---\n");
    printf("Name: %s\n", readS.name);
    printf("Total Marks: %d\n", readS.marks);

    // Close the file
    fclose(pc);

    return 0;
}