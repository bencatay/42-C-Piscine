/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caykut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:44:16 by caykut            #+#    #+#             */
/*   Updated: 2022/08/09 12:19:51 by caykut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)

{
	int	a;
	int	i;

	a = 1;
	while (a < ac)
	{
		i = 0;
		while (av[a][i] != '\0')
		{
			write (1, &av[a][i], 1);
			i++;
		}
		a++;
		write (1, "\n", 1);
	}
}