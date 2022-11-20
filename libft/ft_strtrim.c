/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:25:35 by omahdiou          #+#    #+#             */
/*   Updated: 2022/11/16 04:04:39 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	int		i;
	int		j;

	if (!s || !set)
		return (NULL);
	j = ft_strlen(s) - 1;
	if (j == -1)
		return (ft_substr(s, 0, 0));
	i = 0;
	while (s[i])
	{
		if (!ft_strchr(set, s[i]))
			break ;
		i++;
	}
	while (j)
	{
		if (!ft_strchr(set, s[j]))
			break ;
		j--;
	}
	return (ft_substr(s, i, j - i + 1));
}
