#include <unistd.h>
#include "ft_putchar.c"

void ft_is_negative(int n)
{
		if (n < 0 || n < -2147483647)
				ft_putchar('N');
		else if (n >=0 || n > 2147483647)
				ft_putchar('P');
}

int main()
{
		ft_is_negative(0);
		ft_is_negative(1);
		ft_is_negative(-1);
		ft_is_negative(-2147483648);
}
