#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;

    i = 0;
    while(i < size)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    i = 0;
    while(src[i])
        i++;
    return(i);
}

int main(int c, char **v)
{
    char *a = "salutlkjhbijklblogzglbbbbbbbbbbbbbbujivcfhdrz6ti";
    char b[8];
    ft_strlcpy(b, a, 10);
    printf("%s \n", b);
    return 0;
}