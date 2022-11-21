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

    int еastern_calendar = year % 12;

    switch (еastern_calendar)
    {
        case 0:
            {
                printf("Your Chinese zodiac sign is a monkey.\n");
            }
            break;
        case 1:
            {
                printf("Your Chinese zodiac sign is a rooster.\n");
            }
            break;
        case 2:
            {
                printf("Your Chinese zodiac sign is a dog.\n");
            }

            break;
        case 3:
            {
                printf("Your Chinese zodiac sign is a pig.\n");
            }

            break;
        case 4:
            {
                printf("Your Chinese zodiac sign is a rat.\n");
            }

            break;
        case 5:
            {
                printf("Your Chinese zodiac sign is a ox.\n");
            }

                break;
        case 6:
            {
                printf("Your Chinese zodiac sign is a tiger.\n");
            }

            break;
        case 7:
            {
                printf("Your Chinese zodiac sign is a rabit.\n");
            }

            break;
        case 8:
            {
                printf("Your Chinese zodiac sign is a dragon.\n");
            }

            break;
        case 9:
            {
                printf("Your Chinese zodiac sign is a snake.\n");
            }

            break;
        case 10:
            {
                printf("Your Chinese zodiac sign is a horse.\n");
            }

            break;
        case 11:
            {
                printf("Your Chinese zodiac sign is a goat.\n");
            }

            break;
    }
}