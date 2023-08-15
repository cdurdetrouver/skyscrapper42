/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soluce.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:14:28 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/13 20:17:33 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_soluce_right(int tab[6][6])
{
	int	count;
	int	size;
	int	i;
	int	j;

	i = 1;
	while (i <= 4)
	{
		count = 0;
		size = 0;
		j = 1;
		while (j <= 4)
		{
			if (tab[i][j] > size)
			{
				size = tab[i][j];
				count++;
			}
			j++;
		}
		if (!(tab[i][0] == count))
			return (0);
		i++;
	}
	return (1);
}

int	check_soluce_left(int tab[6][6])
{
	int	count;
	int	size;
	int	i;
	int	j;

	i = 4;
	while (i > 0)
	{
		count = 0;
		size = 0;
		j = 4;
		while (j > 0)
		{
			if (tab[i][j] > size)
			{
				size = tab[i][j];
				count++;
			}
			j--;
		}
		if (!(tab[i][5] == count))
			return (0);
		i--;
	}
	return (1);
}

int	check_soluce_up(int tab[6][6])
{
	int	count;
	int	size;
	int	i;
	int	j;

	j = 1;
	while (j <= 4)
	{
		count = 0;
		size = 0;
		i = 1;
		while (i <= 4)
		{
			if (tab[i][j] > size)
			{
				size = tab[i][j];
				count++;
			}
			i++;
		}
		if (!(tab[0][j] == count))
			return (0);
		j++;
	}
	return (1);
}

int	check_soluce_down(int tab[6][6])
{
	int	count;
	int	size;
	int	i;
	int	j;

	j = 4;
	while (j > 0)
	{
		count = 0;
		size = 0;
		i = 4;
		while (i > 0)
		{
			if (tab[i][j] > size)
			{
				size = tab[i][j];
				count++;
			}
			i--;
		}
		if (!(tab[5][j] == count))
			return (0);
		j--;
	}
	return (1);
}

int	check_double_collumn(int tab[6][6])
{
	int	i;
	int	j;
	int	k;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			k = j + 1;
			while (k <= 4)
			{
				if (tab[j][i] == tab[k][i])
					return (0);
				k++;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	check_soluce(int tab[6][6])
{
	if (check_double_collumn(tab) && check_soluce_down(tab)
		&& check_soluce_left(tab) && check_soluce_up(tab)
		&& check_soluce_right(tab))
		return (1);
	return (0);
}
