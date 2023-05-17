//Barshon Basak     ID : 2311625642

    #include <stdio.h>
    #include <stdlib.h>

    int main(void)
    {
       int days, year, week,input_days, temp_days;
       printf("Enter Days: \n");
       scanf("%d",&input_days);

       temp_days = input_days;

       year = temp_days/365;
       temp_days = temp_days%365;

       week = temp_days/7;
       temp_days= temp_days%7;

       days = temp_days;

       printf("%d days means %d years %d weeks %d days",input_days,year,week,days);

       return 0;
    }
