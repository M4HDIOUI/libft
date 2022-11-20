/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:08:04 by omahdiou          #+#    #+#             */
/*   Updated: 2022/11/15 03:47:38 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	l_src;
	size_t	l_dest;

	if (!dst && !size)
		return (ft_strlen(src));
	l_src = ft_strlen(src);
	l_dest = ft_strlen(dst);
	if (size <= l_dest)
		return (l_src + size);
	j = 0;
	while (src[j] && l_dest + j < size - 1)
	{
		dst[l_dest + j] = src [j];
		j++;
	}
	dst [l_dest + j] = '\0';
	return (l_src + l_dest);
}
