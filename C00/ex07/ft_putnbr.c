/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghule <sanghule@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:08:50 by sanghule          #+#    #+#             */
/*   Updated: 2022/08/31 14:08:41 by sanghule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writenbr(int nb);
int		ft_checkdigit(int i);
void	ft_write(int nb, int i);

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	else if (nb > 0)
	{
		ft_writenbr(nb);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_writenbr(nb);
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
}

void	ft_writenbr(int nb)
{
	char	c;

	c = nb / ft_checkdigit(nb) + '0';
	write(1, &c, 1);
	ft_write(nb, ft_checkdigit(nb));
}

int	ft_checkdigit(int nb)
{
	int		count;
	int		i;

	count = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	i = 1;
	while (count > 1)
	{
		i = i * 10;
		count--;
	}
	return (i);
}

void	ft_write(int nb, int i)
{
	char	c;

	while (i >= 10)
	{
		if (i == 1)
		{
			c = nb % i + '0';
		}
		else
		{
			c = (nb % i) / (i / 10) + '0';
		}
		i /= 10;
		write(1, &c, 1);
	}
}
