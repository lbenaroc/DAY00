/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaroc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 15:54:56 by lbenaroc          #+#    #+#             */
/*   Updated: 2020/07/05 17:41:11 by lbenaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int i;
	i = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
		ft_putchar((nb % 10) + '0');
	}
	else
	{
		if (nb >= 0 && nb <= 9)
		{	
			ft_putnbr(i / 10);
			ft_putchar(i + '0');
		}
		if (nb > 9)
		{	
			ft_putnbr (i / 10);
			ft_putchar((i % 10) + '0');
		}
	}
}

int 	main(void)
{
	ft_putnbr(-60);
}
