/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 00:18:17 by mehdi             #+#    #+#             */
/*   Updated: 2025/07/19 00:29:02 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int     ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	
	return (nb * ft_recursive_power(nb,power - 1));
}
