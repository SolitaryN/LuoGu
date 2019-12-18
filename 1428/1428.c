#include<stdio.h>
int main()
{
	int sum[101];
	int su, i;
	scanf("%d", &su);
	for(i = 0; i < su; i++)
		scanf("%d", &sum[i]);
	for(int wai = su - 1; wai >= 0; wai--)
	{
		int zong = 0;
		for(int nei = 0; nei < wai; nei++)
		{
			if(sum[wai] > sum[nei])
				zong++;
		}
		sum[wai] = zong;
	}
	for(int j = 0; j < su; j++)
		printf("%d ", sum[j]);
	return 0;
}

