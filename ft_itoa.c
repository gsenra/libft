/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:20:59 by gsenra-a          #+#    #+#             */
/*   Updated: 2020/02/11 17:49:24 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_tamanho(unsigned int num)
{
	int tam;

	tam = 1;
	while (num >= 10)
	{
		tam++;
		num = num / 10;
	}
	return (tam);
}

char			*ft_itoa(int n)
{
	unsigned int	num;
	int				tam;
	char			*ans;

	if (n < 0)
		num = (unsigned int)(n * -1);
	if (n >= 0)
		num = (unsigned int)n;
	tam = ft_tamanho(num) + 1 + ((n < 0) ? 1 : 0);
	if (!(ans = (char*)malloc(sizeof(char) * (tam))))
		return (0);
	if (n < 0)
		ans[0] = '-';
	ans[tam - 1] = '\0';
	tam = tam - 2;
	while (num >= 10)
	{
		ans[tam] = (char)(num % 10) + '0';
		num = num / 10;
		tam--;
	}
	ans[tam] = (char)num % 10 + '0';
	return (ans);
}
