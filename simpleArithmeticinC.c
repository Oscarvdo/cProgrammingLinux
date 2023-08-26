#include <stdio.h>

int main() {
    int currentDay = 23;
    int procrastinationDay = 25;
    int remainingDays = procrastinationDay - currentDay;
    int remainingMinutes = remainingDays * 60 * 24;
    int remainingSeconds = remainingMinutes * 60;

    printf("Dear Procrastinator,\n");
    printf("You still have to wait for %d days (%d minutes or %d seconds) before you can procrastinate!\n",
           remainingDays, remainingMinutes, remainingSeconds);

    return 0;
}
