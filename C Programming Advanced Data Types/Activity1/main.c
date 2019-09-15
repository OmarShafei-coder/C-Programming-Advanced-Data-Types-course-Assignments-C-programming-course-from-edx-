#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date*);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

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