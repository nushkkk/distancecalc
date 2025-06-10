/* Online C Compiler and Editor */
#include <stdio.h>

int main()
{
    int speed = 0;
    int time = 0;
    
    printf("speed:");
    scanf("%d", &speed);
    printf("time:");
    scanf("%d", &time);
    
    int distance = speed * time;
    
    printf("dist:%d\n", distance);

    return 0;
}