#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int main()
{
    int hour, minute, second;
    hour = minute = second = 0;

    while(1)
    {
        system("cls"); // Clears the terminal screen (use "cls" for Windows)
        printf("                                  ........................................\n");
        printf("                                  %02d : %02d : %02d", hour, minute, second);
          printf("\n                              .........................................\n");
        fflush(stdout);  // Ensures output is printed immediately

        second++;

        if(second == 60)  // Increment minute after 60 seconds
        {
            minute += 1;
            second = 0;
        }

        if(minute == 60)  // Increment hour after 60 minutes
        {
            hour += 1;
            minute = 0;
        }

        if(hour == 24)    // Reset clock after 24 hours
        {
            hour = 0;
            minute = 0;
            second = 0;
        }
    //     if(second==11)
    // {
    //     printf(" Hello! kundan "); 
    //     hour=second=minute=1;
    // }
        sleep(1);  // Wait for 1 second
    }
    
    return 0;
}
