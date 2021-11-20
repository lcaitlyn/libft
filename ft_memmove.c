/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:53:56 by lcaitlyn          #+#    #+#             */
/*   Updated: 2021/10/27 15:53:57 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (s1 < s2)
	{
		while (i < len)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	else if (s1 > s2)
		while (len-- > 0)
			s1[len] = s2[len];
	return (dst);
}
