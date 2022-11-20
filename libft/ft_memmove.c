/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:11:26 by omahdiou          #+#    #+#             */
/*   Updated: 2022/11/15 22:25:29 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	char	*lst_s;
	char	*lst_d;

	s = (char *)src;
	d = (char *)dst;
	lst_s = s + (len - 1);
	lst_d = d + (len - 1);
	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		while (len--)
			*lst_d-- = *lst_s--;
	}
	return (dst);
}
