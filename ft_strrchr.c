/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:56:57 by lcaitlyn          #+#    #+#             */
/*   Updated: 2021/10/27 15:56:58 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int a)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)a)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
