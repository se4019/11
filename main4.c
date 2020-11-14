#include <stdio.h>

char *proverb="All that glisters is not gold.";
void setpointer(char*q)
{
	q=proverb;
}
int main(void)
{
	char*p = "zzz";
	setPointer(p);
	printf("%s\n", p);
	
	return 0;
}
