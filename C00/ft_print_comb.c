#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
		write(1, &c, 1);
}

void ft_print_comb(void)
{
		char unit, ten, hundred;
		unit = '2';
		ten = '1';
		hundred = '0';

		while (hundred <= '7')
		{
				while (ten <= '8' && ten >= hundred)
						{
								while (unit <= '9' && unit >= ten)
								{
										if (hundred != ten && ten != unit)
										{
												if (hundred == '7' && ten == '8' && unit == '9')
												{
														ft_putchar(hundred);
														ft_putchar(ten);
														ft_putchar(unit);
														ft_putchar('\n');
												}
												else 
												{
												ft_putchar(hundred);
												ft_putchar(ten);
												ft_putchar(unit);
												ft_putchar(',');
												ft_putchar(' ');
												}
										}
										++unit;
								}
								unit = ten + 1;
								++ten;
						}
				ten = hundred + 1;
				++hundred;
		}
}

						
int main()
{
		ft_print_comb();
}
