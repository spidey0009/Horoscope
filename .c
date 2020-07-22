#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
    char name[10];
    int day,month,year;
    printf("\n\t\tWelcome to the Daily Horoscope!\n");
    Sleep(3000); // GIVES A DELAY OF 3000 MILLISECONDS THAT IS 3 SECONDS
    printf("\n\n\tCHECK YOUR HOROSCOPE BY FILLING THE DETAILS!\n");
    Sleep(3000);
    printf("\nEnter your good name:");
    gets(name);
    printf("\nEnter your birth month:");
    scanf("%d",&month);
    if(month == 0)
    {
        printf("Invalid date");exit(0);
    }
    else
    {
    printf("\nEnter your birth day:");
    scanf("%d",&day);
    printf("\nEnter your birth year:");
    scanf("%d",&year);
    }
    if(month =12 && day < 21 || month == 11 && day < 22)


        {
        printf("\n\t HEY %s, YOUR ZODIAC SIGN IS SAGITTARIUS\n  Wait for the horoscope....\n",name);
        Sleep(5000);
        //system("start https://www.astrology.com/horoscope/daily/sagittarius.html");// DIRECTS YOU TOWARDS THE LINK IF STATEMENT IS TRUE
        exit(0);
        }

    else
        {
        printf("\n\t HEY %s, YOUR ZODIAC SIGN IS CAPRICORN\n  Wait for the horoscope....\n",name);
         Sleep(5000);
        //system("start https://www.astrology.com/horoscope/daily/capricorn.html");
        exit(0);
        }
}
