#include <unistd.h>
#include "ft_putchar.c"

void ft_print_numbers(void)
{
		int i;
		
		i = '0';
		while (i <= '9')
		{
			ft_putchar(i);
			i++;
		}
}

/*int main()
{
		ft_print_numbers();
}*/
