#include <stdio.h>
#include <cstring>
int n_list[5000];
int cnt_list[5000];
int chk_list[1013];
int m_idx;
bool flag;

void chk(int idx)
{
	int f, s, tmp;
	f = idx % 1013;
	s = 37 - (idx % 37);
	while (1)
	{
		tmp = (f + s*cnt_list[idx]) % 1013;
		if (chk_list[tmp] == 0)
		{
			if (m_idx == tmp)
			{
				printf("%d\n", 1000000 - cnt_list[idx] * 10000);
				flag = true;
			}
			chk_list[tmp] = 1;
			break;
		}
		else
		{
			chk_list[tmp] ++;
			cnt_list[idx] ++;
		}
	}
}
int main()
{
	int t;
	int n;
	int i, j;
	scanf("%d", &t);
	while (t--)
	{
		memset(n_list, 0, sizeof(n_list));
		memset(chk_list, 0, sizeof(chk_list));
		memset(cnt_list, 0, sizeof(cnt_list));
		flag = false;
		scanf("%d %d", &n, &m_idx);
		for (i = 0; i < n; i++)
		{
			scanf("%d", &n_list[i]);
			chk(n_list[i]);
		}
		if (!flag)
			printf("N\n");
	}
}
