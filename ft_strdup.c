/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:55:00 by lcaitlyn          #+#    #+#             */
/*   Updated: 2021/10/27 15:55:01 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*str;
	char	*p;

	str = (char *)malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (!str)
		return (NULL);
	p = str;
	while (*src)
	{
		*str++ = *src++;
	}
	*str = '\0';
	return (p);
}
