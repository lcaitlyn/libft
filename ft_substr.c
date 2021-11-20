/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:57:06 by lcaitlyn          #+#    #+#             */
/*   Updated: 2021/10/27 15:57:07 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*p;
	size_t	lensub;

	if (!s)
		return (NULL);
	lensub = ft_strlen((char *)s) - start;
	if (lensub > len)
		lensub = len;
	if (start >= ft_strlen((char *)s) || len < 1)
	{
		str = ft_calloc(1, sizeof(char));
		return (str);
	}
	str = ft_calloc((lensub + 1), sizeof(char));
	if (!str)
		return (NULL);
	p = str;
	while (lensub > 0)
	{
		lensub--;
		str[lensub] = (char)s[start + lensub];
	}
	return (p);
}
