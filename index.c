#include <stdio.h>

int main() 
{
    // question 1
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    const char *result = (num % 2 == 0) ? "Even" : "Odd";
    printf("This number is %s.\n", result);

    // question 2
    int month;
    printf("Enter the month number : ");
    scanf("%d", &month);
    switch (month) {
        case 1:
            printf("Jan\n");
            break;
        case 2:
            printf("Feb\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("Aug\n");
            break;
        case 9:
            printf("Sep\n");
            break;
        case 10:
            printf("Oct\n");
            break;
        case 11:
            printf("Nov\n");
            break;
        case 12:
            printf("Dec\n");
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");

        // question 3

        int year;
    printf("Enter a year : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
        printf("%d is a leap year.\n", year);
        } else
        {
        printf("%d is not a leap year.\n", year);
        }    
    return 0;
}
