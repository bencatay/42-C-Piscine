/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caykut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:37:09 by caykut            #+#    #+#             */
/*   Updated: 2022/08/09 12:17:11 by caykut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)

{
	int	a;

	a = 0;
	if (ac > 0)
	{
		while (av[0][a] != '\0')
		{
			write (1, &av[0][a], 1);
			a++;
		}
	}
	write (1, "\n", 1);
}