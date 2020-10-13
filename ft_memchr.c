/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:46:24 by gsenra-a          #+#    #+#             */
/*   Updated: 2020/02/03 13:20:11 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *cps;
	unsigned char cpc;

	cps = (unsigned char*)s;
	cpc = (unsigned char)c;
	if (n != '\0')
	{
		while (n != 0)
		{
			if (*cps++ == (unsigned char)c)
				return ((void*)(cps - 1));
			n--;
		}
	}
	return (0);
}
