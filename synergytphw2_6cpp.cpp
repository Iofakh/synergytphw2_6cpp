#include<stdio.h>

main()
{
    int day, month, year;
    printf("Enter your date of birth.\n");
    printf("Day: ");
    scanf("%i",&day);
    printf("Month: ");
    scanf("%i",&month);
    printf("Year: ");
    scanf("%i",&year);

    if (year%4 == 0)
    {
        printf("You were born on a leap year.\n");
    }
    else
    {
        printf("You weren't born on a leap year.\n");
    }

}