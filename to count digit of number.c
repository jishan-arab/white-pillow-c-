#include <stdio.h>

int main()
{

    int a, b = 0;
    // 153
    printf("give me a number ");
    scanf("%d", &a);

    while (a != 0)
    {
        a = a / 10; // will remove last digit (153 to 15 to 1 to 0}
      
        b++;    //to count increment 
    }

    printf("%d", b);
}
