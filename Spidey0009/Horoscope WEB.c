#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char *name; //POINTER NAME
    int day,month,i,year;
    system("COLOR AC");
    printf("\n\t\tWelcome to Daily Horoscope!\n");
    Sleep(3000); // GIVES A DELAY OF 3000 MILLISECONDS THAT IS 3 SECONDS
    printf("\n\n\tCHECK YOUR HOROSCOPE BY FILLING THE DETAILS!\n");
    Sleep(3000);
    printf("\nEnter your good name:");
    name=(char*)malloc(0*sizeof(char)); //DYNAMIC MEMORY ALLOCATION FOR "name"
    gets(name);
    printf("\nEnter your birth month:");
    scanf("%d",&month);
    if(month == 0)
    {
        printf("Invalid date");
        exit(0);
    }
    else
    {
    printf("\nEnter your birth day:");
    scanf("%d",&day);
    printf("\nEnter your birth year:");
    scanf("%d",&year);
    }
    if(month == 3 && day >= 21 || month == 4 && day <= 19)
    {
        printf("\n\t HEY %s, YOUR ZODIAC SIGN IS ARIES\n  Wait for the horoscope....\n",name);
        Sleep(5000);
        system("start https://www.astrology.com/horoscope/daily/today/aries.html");
    }
    else if(month == 4 && day >= 20 || month == 5 && day<=20)
    {
        printf("\n\t HEY %s, YOUR ZODIAC SIGN IS TAURUS\n  Wait for the horoscope....\n",name);
        Sleep(5000);
        system("start https://www.astrology.com/horoscope/daily/today/taurus.html");
    }
    else if(month == 5 && day >= 21 || month == 6 && day<=20)
    {
        printf("\n\t HEY %s, YOUR ZODIAC SIGN IS GEMINI\n  Wait for the horoscope....\n",name);
        Sleep(5000);
        system("start https://www.astrology.com/horoscope/daily/today/gemini.html");
    }
    else if(month == 6 && day >= 21 || month == 7 && day<=22)
    {
        printf("\n\t HEY %s, YOUR ZODIAC SIGN IS CANCER\n  Wait for the horoscope....\n",name);
        Sleep(5000);
        system("start https://www.astrology.com/horoscope/daily/today/cancer.html");
    }
    else if(month == 7 && day >= 23 || month == 8 && day <= 22)
    {
        printf("\n\t HEY %s, YOUR ZODIAC SIGN IS LEO\n  Wait for the horoscope....\n",name);
        Sleep(5000);
        system("start https://www.astrology.com/horoscope/daily/today/leo.html");
    }
    else if(month == 8 && day >= 23 || month == 9 && day <= 22)
    {
        printf("\n\t HEY %s, YOUR ZODIAC SIGN IS VIRGO\n  Wait for the horoscope....\n",name);
        Sleep(5000);
        system("start https://www.astrology.com/horoscope/daily/today/virgo.html");
    }
    else if(month == 9 && day >= 23 || month == 10 && day <= 22)
    {
        printf("\n\t HEY %s, YOUR ZODIAC SIGN IS LIBRA\n  Wait for the horoscope....\n",name);
        Sleep(5000);
        system("start https://www.astrology.com/horoscope/daily/today/libra.html");
    }
    else if(month == 10 && day >= 23 || month == 11 && day <= 21)
    {


        printf("\n\t HEY %s, YOUR ZODIAC SIGN IS SCORPIO\n  Wait for the horoscope....\n",name);
        Sleep(5000);
        system("start https://www.astrology.com/horoscope/daily/today/scorpio.html");
    }
    else if(month == 11 && day >= 22 || month == 12 && day <= 21)
    {
        printf("\n\t HEY %s, YOUR ZODIAC SIGN IS SAGITTARIUS\n  Wait for the horoscope....\n",name);
        Sleep(5000);
        system("start https://www.astrology.com/horoscope/daily/sagittarius.html");
    }
    else if(month == 12 && day >= 22 || month == 1 && day <= 19)
    {

        printf("\n\t HEY %s, YOUR ZODIAC SIGN IS CAPRICORN\n  Wait for the horoscope....\n",name);
        Sleep(5000);
        system("start https://www.astrology.com/horoscope/daily/capricorn.html");
    }
    else if(month == 1 && day >= 20 || month == 2 && day <= 18)
    {
        printf("\n\t HEY %s, YOUR ZODIAC SIGN IS AQUARIUS\n  Wait for the horoscope....\n",name);
        Sleep(5000);
        system("start https://www.astrology.com/horoscope/daily/today/aquarius.html" );
    }
    else if(month == 2 && day >= 19 || month == 3 && day <= 20)
    {
        printf("\n\t HEY %s, YOUR ZODIAC SIGN IS PISCES\n  Wait for the horoscope....\n",name);
        Sleep(5000);
        system("explorer https://www.astrology.com/horoscope/daily/today/pisces.html");
    }
    free(name); //TO CLEAR DYNAMIC MEMORY ALLOCATED
}
