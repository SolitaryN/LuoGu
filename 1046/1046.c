#include <stdio.h>
int main()
{
    int a[10], high;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d ", &a[i]);
    }
    scanf("%d", &high);
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if(a[i] <= high + 30)
            sum++;
    }
    printf("%d", sum);
    return 0;
}
