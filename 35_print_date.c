// 35 . Call a function that print current date .
#include<stdio.h>
#include<time.h>
void print_date()
{
    time_t current_time;
    time(&current_time);
    char* date = asctime(localtime(&current_time));
    printf("Current date is : %s",date);
}

void main()
{
    print_date();
}






 