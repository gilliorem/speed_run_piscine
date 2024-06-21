#include <unistd.h>

void ft_putchar(char c)
{
		write(1, &c, 1);
}

void ft_print_comb2(void)
{
		char first_unit;
		char first_ten;
		first_unit = first_ten = '0';

		char second_unit;
		char second_ten;

		second_unit = '1';
		second_ten = '0';
		while  (first_unit <= '9' && second_ten != '9')
		{

				while (second_ten <= '9' && second_unit != '9')
				{

						while (second_unit <= '9')
						{
								ft_putchar(first_ten);
								ft_putchar(first_unit);
								ft_putchar(' ');

								ft_putchar(second_ten);
								ft_putchar(second_unit);
								ft_putchar('\n');
								++second_unit;

						}
						second_unit = second_ten;
						++second_ten;
				}
				second_ten = '0';
				++first_unit;
		}
}


int main()
{
		ft_print_comb2();
}
