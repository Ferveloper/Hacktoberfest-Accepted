#include <stdio.h>
void apps_slice(char *ar, int from, int to);
int main()
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	apps_slice(str, 5, 8);
	printf("%s", str);
	return 0;
}

void apps_slice(char *str, int from, int to)
{
	int i = 0;
	while ((from + i) <= to)
	{
		str[i] = str[from + i];
		i++;
	}
	str[i] = '\0';
}