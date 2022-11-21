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

    if (((month == 1)&&(day > 20))||((month == 2)&&(day < 20)))
    {
        printf("Your zodiac sign is a Aquarius.\n");
    }
    else
    {
        if (((month == 2)&&(day > 19))||((month == 3)&&(day < 21)))
        {
            printf("Your zodiac sign is a Pisces.\n");
        }
        else
        {
            if (((month == 3)&&(day > 20))||((month == 4)&&(day < 21)))
            {
                printf("Your zodiac sign is a Aries.\n");
            }
            else
            {
                if (((month == 4)&&(day > 20))||((month == 5)&&(day < 22)))
                {
                    printf("Your zodiac sign is a Taurus.\n");
                }
                else
                {
                    if (((month == 5)&&(day > 21))||((month == 6)&&(day < 22)))
                    {
                        printf("Your zodiac sign is a Gemini.\n");
                    }
                    else
                    {
                        if (((month == 6)&&(day > 21))||((month == 7)&&(day < 23)))
                        {
                            printf("Your zodiac sign is a Cancer.\n");
                        }
                        else
                        {
                            if (((month == 7)&&(day > 22))||((month == 8)&&(day < 22)))
                            {
                                printf("Your zodiac sign is a Leo.\n");
                            }
                            else
                            {
                                if (((month == 8)&&(day > 21))||((month == 9)&&(day < 24)))
                                {
                                    printf("Your zodiac sign is a Virgo.\n");
                                }
                                else
                                {
                                    if (((month == 9)&&(day > 23))||((month == 10)&&(day < 24)))
                                    {
                                        printf("Your zodiac sign is a Libra.\n");
                                    }
                                    else
                                    {
                                        if (((month == 10)&&(day > 23))||((month == 11)&&(day < 23)))
                                        {
                                            printf("Your zodiac sign is a Scorpio.\n");
                                        }
                                        else
                                        {
                                            if (((month == 11)&&(day > 22))||((month == 12)&&(day < 23)))
                                            {
                                                printf("Your zodiac sign is a Sagittarius.\n");
                                            }
                                            else
                                            {
                                                if (((month == 12)&&(day > 22))||((month == 1)&&(day < 21)))
                                                {
                                                    printf("Your zodiac sign is a Capricorn.\n");
                                                }
                                                else
                                                {
                                                    printf("Error in day or month.\n");
                                                }
                                            }
                                        }                                        
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
