/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:22:28 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/13 20:38:39 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		brutforce(int tab[6][6]);
void	display(int tab[6][6]);

void	fill_tab_row1(int tab[6][6], int tabinit[16])
{
	tab[0][0] = 0;
	tab[0][1] = tabinit[0];
	tab[0][2] = tabinit[1];
	tab[0][3] = tabinit[2];
	tab[0][4] = tabinit[3];
	tab[0][5] = 0;
	tab[1][0] = tabinit[8];
	tab[1][1] = 0;
	tab[1][2] = 0;
	tab[1][3] = 0;
	tab[1][4] = 0;
	tab[1][5] = tabinit[12];
}

void	fill_tab_row2(int tab[6][6], int tabinit[16])
{
	tab[2][0] = tabinit[9];
	tab[2][1] = 0;
	tab[2][2] = 0;
	tab[2][3] = 0;
	tab[2][4] = 0;
	tab[2][5] = tabinit[13];
	tab[3][0] = tabinit[10];
	tab[3][1] = 0;
	tab[3][2] = 0;
	tab[3][3] = 0;
	tab[3][4] = 0;
	tab[3][5] = tabinit[14];
}

void	fill_tab_row3(int tab[6][6], int tabinit[16])
{
	tab[4][0] = tabinit[11];
	tab[4][1] = 0;
	tab[4][2] = 0;
	tab[4][3] = 0;
	tab[4][4] = 0;
	tab[4][5] = tabinit[15];
	tab[5][0] = 0;
	tab[5][1] = tabinit[4];
	tab[5][2] = tabinit[5];
	tab[5][3] = tabinit[6];
	tab[5][4] = tabinit[7];
	tab[5][5] = 0;
}

void	fill_table(int tab[6][6], int tabinit[16])
{
	fill_tab_row1(tab, tabinit);
	fill_tab_row2(tab, tabinit);
	fill_tab_row3(tab, tabinit);
}

void	resolve(int tabinit[16])
{
	int	tab[6][6];

	fill_table(tab, tabinit);
	if (brutforce(tab))
		display(tab);
	else
		write(1, "Error", 5);
}
