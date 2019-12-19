#include<stdio.h>
int main()
{
	int n, num[101];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	int sum = 0, hh = 0;
	for(int wai = 0; wai < n; wai++)
	{
		for(int nei = 0; nei < n; nei++)
		{
			if(wai == nei || num[nei] >= num[wai])
				continue;
			for(int nei1 = 0; nei1 < n; nei1++)
			{
				if(num[nei1] >= num[wai] || nei1 == nei)
					continue;
				else if(num[wai] == (num[nei] + num[nei1]))
				{
					sum++;
					hh = 1;
					break;
				}
			}
			if(hh == 1)
			{
				hh = 0;
				break;
			}
		}
	}
	printf("%d", sum);
	return 0;
}