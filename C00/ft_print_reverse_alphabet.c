#include <unistd.h>
#include "ft_putchar.c"

void ft_print_alphabet(void)
{
		int i;
		i = 'z';

		while (i >= 'a')
				{
						ft_putchar(i);
						--i;
				}
}
		
/*int main()
{
		ft_print_alphabet();
}*/
