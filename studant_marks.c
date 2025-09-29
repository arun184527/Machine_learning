#include <stdio.h>
#define MAX 50  
float calculateAverage(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}
void findHighLow(int arr[], int n, int *high, int *low)
{
    *high = arr[0];
    *low = arr[0];
    for(int i = 1; i < n; i++) 
    {
        if(arr[i] > *high)
        {
            *high = arr[i];
        }
        if(arr[i] < *low)
        {
            *low = arr[i];
        }
    }
}

int main() 
{
    int n;
    int marks[MAX];
    int highest, lowest;
    float avg;

    printf("Enter number of students (max %d): ", MAX);
    scanf("%d", &n);

    if(n <= 0 || n > MAX)
    {
        printf("Invalid number of students!\n");
        return 1;
    }
    for(int i = 0; i < n; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    avg = calculateAverage(marks, n);
    findHighLow(marks, n, &highest, &lowest);
    printf("\n--- Results ---\n");
    printf("Average Marks = %.2f\n", avg);
    printf("Highest Marks = %d\n", highest);
    printf("Lowest Marks  = %d\n", lowest);
    return 0;
}