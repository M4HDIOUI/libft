/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:15:17 by omahdiou          #+#    #+#             */
/*   Updated: 2022/11/17 04:57:28 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*o;
	char	*m;

	i = 0;
	o = (char *)haystack;
	m = (char *)needle;
	if (!*m)
		return (o);
	while (o[i] && i <= len)
	{
		j = 0;
		while (o[i + j] == m[j] && i + j < len && m[j])
			j++;
		if (m[j] == '\0')
			return (o + i);
			i++;
	}
	return (NULL);
}
