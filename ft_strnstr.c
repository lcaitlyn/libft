/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:56:39 by lcaitlyn          #+#    #+#             */
/*   Updated: 2021/10/27 15:56:40 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	if (s2[0] == '\0')
		return ((char *)&s1[0]);
	len = ft_strlen((char *)s2);
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] == s2[j])
			while ((s1[i + j] == s2[j]) && (i + j < n) && (j < len))
				j++;
		if (j == len)
			return ((char *)&s1[i]);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
