/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caykut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 18:37:31 by caykut            #+#    #+#             */
/*   Updated: 2022/07/30 18:44:59 by caykut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)

{
	unsigned int	a;

	a = 0;
	if (str[a] == '\0')
	{
		return (1);
	}
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
			a++;
		else
			return (0);
	}
	return (1);
}