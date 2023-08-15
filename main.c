/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 20:38:54 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/13 20:40:02 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	resolve(int tabinit[16]);
int		ft_check(int tab[16], char *str);

int	main(int argc, char **argv)
{
	int	tab[16];

	if (argc == 2)
		if (ft_check(tab, argv[1]))
			resolve(tab);
	else
		write(1, "Error", 5);
	return (0);
}
