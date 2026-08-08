// Program 1 : This program converts a given time in seconds into hours, minutes, and seconds.
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%d seconds = %d hours, %d minutes, %d seconds\n", totalSeconds, hours, minutes, seconds);
    printf("Program 1 done\n");

    return 0;
}
