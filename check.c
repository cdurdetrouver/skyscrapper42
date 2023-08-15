/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 20:40:18 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/13 20:47:40 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char s)
{
	return (s - 48);
}

int	ft_check(int tab[16], char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 31)
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			tab[j] = ft_atoi(str[i]);
			j++;
		}
		i++;
	}
	if (j < 15 || str[31] != '\0')
		return (0);
	return (1);
}
