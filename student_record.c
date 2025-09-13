#include <stdio.h>
struct Student
{
    int rollNo;
    char name[50];
    float marks;
};
int main() 
{
    int i, n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);  
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n----- Student Details -----\n");
    for (i = 0; i < n; i++) 
    {
        printf("Student %d:\n", i + 1);
        printf("  Roll No : %d\n", s[i].rollNo);
        printf("  Name    : %s\n", s[i].name);
        printf("  Marks   : %.2f\n", s[i].marks);
    }
    return 0;
}
