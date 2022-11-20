/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 09:17:56 by omahdiou          #+#    #+#             */
/*   Updated: 2022/11/17 04:58:03 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;
	char	ty;

	i = 0;
	p = (char *)s;
	ty = (char)c;
	while (p[i])
	{
		if (p[i] == ty)
			return (&p[i]);
		i++;
	}
	if (!ty)
		return (&p[i]);
	return (NULL);
}
