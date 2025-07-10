/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 01:41:00 by mehdi             #+#    #+#             */
/*   Updated: 2025/07/10 05:12:06 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cn;

	i = 0;
	cn = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (cn == 1)
				str[i] = str[i] - 32;
			cn = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (cn == 0)
				str[i] = str[i] + 32;
			cn = 0;
		}
		else if (str[i] >= '1' && str[i] <= '9')
			cn = 0;
		else
			cn = 1;
		i++;
	}
	return (str);
}

int main()
{
	char str[] = "mm";
	ft_strcapitalize(str);
}
