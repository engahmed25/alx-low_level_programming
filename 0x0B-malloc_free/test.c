#include <stdio.h>
#include <stdlib.h>

int count(char *s)
{
	
	int len = 0;
	int words_count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] != ' ')
			len++;
		if (s[i] != ' ' && s[i-1] == ' ')
			words_count++;
		i++;
	}
	return len;
}
int main(void)
{
	char str[] = "  Heba Ahmed Mohammed";
	int c;
	c = count(str);
	printf("%d\n", c);
	return 0;
}
