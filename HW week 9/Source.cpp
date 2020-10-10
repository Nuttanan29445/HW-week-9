#include <stdio.h>
int main()
{
	int n1, n2, a[100][100];
	printf("Input size of matrix:");
	scanf_s("%d %d", &n1, &n2);
	printf("input\n");
	for (int i = 1; i <= n1; i++)
	{
		for (int j = 1; j <= n2; j++)
		{
			printf("a[%d][%d] is ", i, j);
			scanf_s("%d", &a[i][j]);
		}

	}
	printf("output\n");
	for (int i = 1; i <= n1; i++)
	{
		for (int j = 1; j <= n2; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}