#include <stdio.h>

int main()
{
	int T, A, B, C, D;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		scanf("%d %d %d %d", &A, &B, &C, &D);
		if ((A + B + C) <= D)
		{
			printf("1\n");
		}
		else if ((A + B) <= D)
		{
			printf("2\n");
		}
		else if ((A + B) > D && (B + C) > D && (C + D) > D)
		{
			printf("3\n");
		}
	}
	return 0;
}
