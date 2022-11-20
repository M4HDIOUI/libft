/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 01:56:43 by omahdiou          #+#    #+#             */
/*   Updated: 2022/11/14 04:40:22 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	ns;
	char	*p;	

	i = 0;
	ns = ft_strlen(s);
	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start >= ns)
		return (ft_strdup(""));
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	while (*s && i < len)
	{
		p[i] = s[start];
		start++;
		i++;
	}
	return (p[i] = '\0', p);
}
