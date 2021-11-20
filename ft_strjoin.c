/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:55:09 by lcaitlyn          #+#    #+#             */
/*   Updated: 2021/10/27 15:55:11 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*s;
	size_t		i;
	size_t		j;

	if (!s1 || !s2)
		return (NULL);
	s = ft_calloc((ft_strlen(s1)
				   + ft_strlen(s2) + 1), sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	if (ft_strlen(s1) > 0)
	{
		while (i < ft_strlen(s1) && s1[i] != '\0')
		{
			s[i] = s1[i];
			i++;
		}
	}
	if (ft_strlen(s2) > 0)
		while (j < ft_strlen(s2) && s2[j] != '\0')
			s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
