#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */
void readDate(struct date* today)
{
    scanf("%d",&(*today).year);
    scanf("%d",&(*today).month);
    scanf("%d",&(*today).day);
}
void printDate(struct date today)
{
    if(today.month < 10)
    {
        printf("0%d/",today.month);
    }
    else
    {
        printf("%d/",today.month);
    }

    if(today.day < 10)
    {
        printf("0%d/",today.day);
    }
    else
    {
        printf("%d/",today.day);
    }

    printf("%d\n",today.year);
}

struct date advanceDay(struct date today)
{
	struct date tomorrow;
	tomorrow.day = today.day;
	tomorrow.month = today.month;
	tomorrow.year = today.year;

	
    if(tomorrow.day == 31)
	{
        if(tomorrow.month == 12)
        {
            tomorrow.day = 1;
		    tomorrow.month = 1;
		    (tomorrow.year)++;
        }
        else 
        {
            (tomorrow.month)++;
		    tomorrow.day = 1;
        }
		
	}
	else if(tomorrow.day == 30)
	{
		if(tomorrow.month == 4 || tomorrow.month == 6 || tomorrow.month == 9 || tomorrow.month == 11)
		{
			(tomorrow.month)++;
			tomorrow.day = 1;
		}
	}
	else if(tomorrow.day == 28 && tomorrow.month == 2)
	{
		tomorrow.month = 3;
		tomorrow.day = 1;
	}
	else
	{
		(tomorrow.day)++;
	}

	return tomorrow;
}