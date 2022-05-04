#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int ft_strlen(char *a);
extern char* ft_strcpy(char *dst, char *src);
extern int ft_strcmp(const char *s1, const char *s2);

int main()
{
	char a0[1024] = "hihi";
	char b0[1024] = "adsfasdfa";
	char a1[1024] = "hihi";
	char b1[1024] = "adsfasdfa";
	printf("%s\n", strcpy(a0, b0));
	printf("%s\n", ft_strcpy(a1, b1));
	return (0);
}