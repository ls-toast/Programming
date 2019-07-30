#include <stdio.h>
#include <cstring>
int list[1000000];
void insertion_sort(int n) {
	int i, j, key;
	for (i = 1; i <= n; i++) {
		key = list[i];
		for (j = i - 1; j >= 1 && list[j] > key; j--) {
			list[j + 1] = list[j];
		}
		list[j + 1] = key;
	}
}
int main() {
	int t,n;
	int i;
	scanf("%d", &t);
	while(t--)
	{
		memset(list, 0, sizeof(list));
		scanf("%d", &n);
		for (i = 1; i <= n; i++)
		{
			scanf("%d", &list[i]);
			insertion_sort(i);
			if (i == 1)
			{
				printf("%d ",list[i]);
				continue;
			}
			if (i% 2 == 1)
				printf("%d ", list[i/2 + 1]);
			else
				printf("%d ", list[i/2]);
		}
		printf("\n");
	}
}
