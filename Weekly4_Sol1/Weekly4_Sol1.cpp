#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int n[100];						//Problem 52, Solution 1, ID Student 65010902
void store(int i)
{
	printf("Enter number: ");
	scanf("%d", &n[i]);
	
}

int main()
{
	int k = 0;
	while (true)
	{
		store(k);
		if (n[k] == 999)
		{
			n[k] = n[k - 1];
			break;
		}
		k += 1;
	}

	int issort = 1;
	for (int j = 1; j <= k - 1; j++)
	{
		if ( (n[j] > n[j - 1] && n[j] > n[j + 1])  ||  (n[j] < n[j-1] && n[j] < n[j+1])  )
		{
			issort = 0;
			break;
		}
	}
	switch (issort)
	{
	case 0:
		printf("Is sort: NO");
		break;
	case 1:
		printf("Is sort: YES");
		break;
	}
	
	return 0;
}