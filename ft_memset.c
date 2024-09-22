#include "libft.h"
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
    size_t i = 0;
    char *str;

    str = (char *)b;
    while(i < len)
    {
        str[i] = c;
        i++;
    }
    return(str);
}

int main()
{
    // 1000 byte boyutunda bellek ayırma
    char *a = (char *)malloc(1000 * sizeof(char));

    // "rumeysa" stringini a'ya kopyalama
    strcpy(a, "rumeysa");

    // Belleğin ilk 4 byte'ını 'x' ile doldur
    printf("%s\n", (char *)ft_memset(a, 'x', 4));

    // Ayırdığımız belleği serbest bırakalım
    //free(a);

    return 0;
}