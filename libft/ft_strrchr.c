/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:19:27 by omahdiou          #+#    #+#             */
/*   Updated: 2022/11/15 03:47:53 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	j;

	j = ft_strlen(s);
	while (j > 0)
	{
		if (s[j] == (char)c)
			return ((char *)s + j);
		j--;
	}
	if (s[j] == (char)c)
		return ((char *)s + j);
	return (NULL);
}
