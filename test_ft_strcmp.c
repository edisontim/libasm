#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int ft_strlen(char *a);
extern char* ft_strcpy(char *dst, char *src);
extern int ft_strcmp(const char *s1, const char *s2);
extern void ft_write(const char *s);


int main()
{
	char a0[1024] = "aaaab";
	char b0[1024] = "aaaat";
	printf("%d\n", strcmp(a0, b0));
	printf("%d\n", ft_strcmp(a0, b0));
	printf("%s\n%s\n", b0, a0);
	ft_write("Hello World!");
}

