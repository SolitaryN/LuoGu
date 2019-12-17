#include <stdio.h>
int main()
{   
    int RodeLen[10001] = {0}, field, RodeLen1;
    scanf("%d %d", &RodeLen1, &field);
    for(int i = 0; i < field; i++)
    {
        int x1, x2;
        scanf("%d %d", &x1, &x2);
        for(int j = x1; j <= x2; j++)
        {
            if(RodeLen[j] == 0)
                RodeLen[j] = 1;
        }
    }
    int sum = 0;
    for(int i = 0; i <= RodeLen1; i++)
        sum += RodeLen[i];
    printf("%d", RodeLen1 - sum + 1);
    return 0;
}
