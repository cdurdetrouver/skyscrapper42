#include <unistd.h>

void	display(int tab[6][6])
{
	int		i;
	int		j;
	char	c;

	i = 1;
	j = 1;
	while (j <= 4)
	{
		while (i <= 4)
		{
			c = tab[j][i] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			i++;
		}
		i = 1;
		write(1, "\n", 1);
		j++;
	}
}
