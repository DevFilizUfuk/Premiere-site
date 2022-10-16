#include <stdio.h>
#include <stdlib.h>

void	ft_print_comb(void)

int main
{
	char i[5];

	*i = '0';
	i[1] = '1';
	i[2] = '2';
	i[3] = ',';
	i[4] = ' ';
	while (*i < '8')
	{
		write(1, i, (*i != '7') ? 5 : 3);
		if (++i[2] > '9')
		{
			if (++i[1] > '8')
				i[1] = ++(*i) + 1;
			i[2] = i[1] + 1;
		}
	}
}