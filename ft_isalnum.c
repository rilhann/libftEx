#include "libft.h"

int ft_isalnum(int c)
{
    if(ft_isalpha(c) || ft_isdigit(c))
    {
        return (1);
    }
    return (0);
}

int main()
{
    printf("%d\n", ft_isalnum(1));
    printf("%d", ft_isalnum('A'));   
}