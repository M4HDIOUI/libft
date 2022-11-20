/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:20:23 by omahdiou          #+#    #+#             */
/*   Updated: 2022/11/16 03:49:38 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

static int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i = 1;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			i;
	long int	nb;
	char		*p;

	nb = n;
	i = ft_count(nb);
	p = (char *)malloc(i + 1);
	if (!p)
		return (NULL);
	p[i] = '\0';
	if (n == 0)
		p[0] = n + '0';
	if (nb < 0)
	{
		p[0] = '-';
		nb *= -1;
	}
	while (nb != 0)
	{
		p[i - 1] = (nb % 10) + 48;
		nb /= 10;
		i--;
	}
	return (p);
}
