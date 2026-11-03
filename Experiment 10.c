#include <stdio.h>
#include <unistd.h>

int main()
{
    int a = 10;

    printf("Process ID: %d\n", getpid());
    printf("Address of variable: %p\n", (void *)&a);

    fflush(stdout);

    while (1)
    {
        // Infinite loop
    }

    return 0;
}
