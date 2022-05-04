#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

extern int ft_strlen(char *a);
extern char* ft_strcpy(char *dst, char *src);
extern int ft_strcmp(const char *s1, const char *s2);
extern int ft_write(int fd, const char *s, int len);
extern int ft_read(int fd, const char *buff, int len);

int main()
{
	char *buff = malloc(sizeof(*buff) * 200 + 1);
	if (!buff)
		return (1);
	memset(buff, 0, 200);
	buff[200] = 0;
	int fd = open("./test", O_RDONLY);
	printf("Return of ft_read %d\n", ft_read(-1, buff, 200));
	close(fd);
	printf("%d\n", errno);
	printf("ft_read string: %s\n", buff);
	fd = open("./test", O_RDONLY);
	printf("Return of read %zd\n", read(-1, buff, 200));
	close(fd);
	printf("%d\n", errno);
	printf("read string: %s\n", buff);
	free(buff);
	return (0);
}

