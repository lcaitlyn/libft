/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:53:49 by lcaitlyn          #+#    #+#             */
/*   Updated: 2021/10/27 15:53:50 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t b)
{
	char	*s1;
	char	*s2;

	if (dst == NULL && src == NULL && b > 0)
		return (NULL);
	s1 = (char *)dst;
	s2 = (char *)src;
	while (b > 0)
	{
		s1[b - 1] = s2[b - 1];
		b--;
	}
	return (dst);
}
