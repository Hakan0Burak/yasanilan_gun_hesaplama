#include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime;
    struct tm *timeInfo;

    currentTime = time(NULL);
    
    timeInfo = localtime(&currentTime);

    printf("Yıl: %d\n", timeInfo->tm_year + 1900);
    printf("Ay: %d\n", timeInfo->tm_mon + 1);
    printf("Gün: %d\n", timeInfo->tm_mday);
    return 0;
}
