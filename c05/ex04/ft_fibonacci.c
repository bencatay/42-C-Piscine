/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caykut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 02:33:30 by caykut            #+#    #+#             */
/*   Updated: 2022/08/07 11:16:21 by caykut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)

{
	int	sonuc;

	sonuc = 1;
	if (index == 1 || index == 2)
		return (1);
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	if (index > 2)
		return ((ft_fibonacci(index - 1) + ft_fibonacci(index - 2)));
	return (sonuc);
}
