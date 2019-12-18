#include <stdio.h>
int main()
{
	int sum[101];
	int i = 0;
	while(1)
	{
		int temp;
		scanf("%d", &temp);
		if(temp != 0)
		{
			sum[i] = temp;
			i++;
		}
		else {
			break;
		}
	}
	for(;0 <= i - 1; i--)
		printf("%d ", sum[i - 1]);
	return 0;
}

