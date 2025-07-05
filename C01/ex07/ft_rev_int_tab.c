/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 02:55:47 by mehdi             #+#    #+#             */
/*   Updated: 2025/07/05 03:20:04 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	tmp;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		tmp = tab[right];
		tab[right] = tab[left];
		tab[left] = tmp;
		left++;
		right--;
	}
}
