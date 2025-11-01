#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks > 85 && marks <= 100)
    {
        printf("Congrats! You scored grade A...\n");
    }
    else if (marks > 60 && marks <= 85)
    {
        printf("You scored grade B+...\n");
    }
    else if (marks > 40 && marks <= 60)
    {
        printf("You scored grade B...\n");
    }
    else if (marks >= 0 && marks <= 40)
    {
        printf("You scored grade C...\n");
    }
    else
    {
        printf("Invalid input. Marks should be between 0 and 100.\n");
    }

    return 0;
}
