/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 16:07:39 by gsenra-a          #+#    #+#             */
/*   Updated: 2020/02/07 18:22:32 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	*c;
	size_t	i;

	i = num;
	if (num == 0 || size == 0)
	{
		num = 1;
		size = 1;
	}
	c = malloc(num * size);
	if (c)
		ft_bzero(c, num * size);
	return ((void*)c);
}
