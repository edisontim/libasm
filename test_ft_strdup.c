#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int ft_strlen(char *a);
extern char* ft_strcpy(char *dst, char *src);
extern int ft_strcmp(const char *s1, const char *s2);
extern void ft_write(const char *s);
extern char *ft_strdup(const char *source);

int main(int argc, char *argv[])
{
	char source[2000] = "Lorem ipsum dolor sit amet, consectetur adipiscingelit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquambibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Crasvolutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisifelis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellusac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posueretortor, sit amet consequat amet.\0";
	printf("Size of source : %d\n", ft_strlen(source));

	char *test = ft_strdup(source);
	printf("Returned string : %s\n", test);
}
