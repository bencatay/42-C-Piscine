/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caykut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:47:07 by caykut            #+#    #+#             */
/*   Updated: 2022/07/25 18:04:57 by caykut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	bolen;
	int	kalan;

	bolen = *a / *b;
	kalan = *a % *b;
	*a = bolen;
	*b = kalan;
}
