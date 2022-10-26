/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caykut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:27:30 by caykut            #+#    #+#             */
/*   Updated: 2022/08/02 17:43:20 by caykut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)

{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	if (to_find[y] == '\0')
	{
		return (str);
	}
	while (str[x] != '\0')
	{
		while (str[x + y] == to_find[y] && to_find[y] != '\0')
		{
			y++;
			if (to_find[y] == '\0')
			{
				return (str + x);
			}
		}
		x++;
		y = 0;
	}
	return (0);
}
