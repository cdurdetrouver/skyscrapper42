/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brutforce.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:45:19 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/13 20:32:37 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_soluce(int tab[6][6]);

int check_soluce(int tab[6][6]);

int	brutforce(int tab[6][6])
{
	int	possibilite[24][4] = {
		{1, 2, 3, 4},
		{1, 2, 4, 3},
		{1, 3, 2, 4},
		{1, 3, 4, 2},
		{1, 4, 2, 3},
		{1, 4, 3, 2},
		{2, 1, 3, 4},
		{2, 1, 4, 3},
		{2, 3, 1, 4},
		{2, 3, 4, 1},
		{2, 4, 1, 3},
		{2, 4, 3, 1},
		{3, 1, 2, 4},
		{3, 1, 4, 2},
		{3, 2, 1, 4},
		{3, 2, 4, 1},
		{3, 4, 1, 2},
		{3, 4, 2, 1},
		{4, 1, 2, 3},
		{4, 1, 3, 2},
		{4, 2, 1, 3},
		{4, 2, 3, 1},
		{4, 3, 1, 2},
		{4, 3, 2, 1}
	};
	int	i;
	int	j;
	int	k;
	int	l;
	int	m;
	int	n;

	k = 0;
	while (k <= 23)
	{
		tab[1][1] = possibilite[k][0];
		tab[1][2] = possibilite[k][1];
		tab[1][3] = possibilite[k][2];
		tab[1][4] = possibilite[k][3];
		l = 0;
		while (l <= 23)
		{
			tab[2][1] = possibilite[l][0];
			tab[2][2] = possibilite[l][1];
			tab[2][3] = possibilite[l][2];
			tab[2][4] = possibilite[l][3];
			m = 0;
			while (m <= 23)
			{
				tab[3][1] = possibilite[m][0];
				tab[3][2] = possibilite[m][1];
				tab[3][3] = possibilite[m][2];
				tab[3][4] = possibilite[m][3];
				n = 0;
				while (n <= 23)
				{
					tab[4][1] = possibilite[n][0];
					tab[4][2] = possibilite[n][1];
					tab[4][3] = possibilite[n][2];
					tab[4][4] = possibilite[n][3];
					if (check_soluce(tab))
						return (1);
					n++;
				}
				m++;
			}
			l++;
		}
		k++;
	}
	return (0);
}


void set_tab(int tab[3][5], int possibilite[24][4], int index) {
    tab[1][1] = possibilite[index][0];
    tab[1][2] = possibilite[index][1];
    tab[1][3] = possibilite[index][2];
    tab[1][4] = possibilite[index][3];
}
