#include "libft.h"

int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
    {
        return(1);
    }
    return(0);
}

int main()
{
    printf("%d\n", ft_isprint(1));
    printf("%d", ft_isprint('A'));   
}