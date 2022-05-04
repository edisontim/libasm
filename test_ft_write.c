#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>


extern int ft_strlen(char *a);
extern char* ft_strcpy(char *dst, char *src);
extern int ft_strcmp(const char *s1, const char *s2);
extern int ft_write(int fd, const char *s, int len);


int main()
{
	int ret = ft_write(1, "Hello World!\n", ft_strlen("Hello World!\n"));
	printf("Mine: \n");
	printf("Errno : %d\n", errno);
	printf("Return value from ft_write : %d\n", ret);
	printf("\n\n");
	int ret_2 = write(1, "Hello World!\n", ft_strlen("Hello World!\n"));
	printf("Libc: \n");
	printf("Errno : %d\n", errno);
	printf("Return value from write : %d\n", ret_2);
}

