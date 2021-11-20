/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:54:19 by lcaitlyn          #+#    #+#             */
/*   Updated: 2021/10/27 15:54:20 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	else if (n > 2147483647)
	{
		ft_putchar_fd ('2', fd);
		n = 147483647;
	}
	nb = (unsigned int)n;
	if (n > 9)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((char)(nb % 10 + 48), fd);
}
