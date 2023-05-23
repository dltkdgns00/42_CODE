/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghule <sanghule@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:06:02 by sanghule          #+#    #+#             */
/*   Updated: 2022/09/14 11:05:43 by sanghule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_valid_base(char *base);
int		ft_strlen(char *base);
void	ft_putchar(char c);

void	ft_putnbr_base(int nbr, char *base)
{
	long	result[100];
	int		i;
	long	n;

	n = nbr;
	if (ft_valid_base(base) == 0)
		return ;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	i = 0;
	while (n)
	{
		result[i] = n % ft_strlen(base);
		n = n / ft_strlen(base);
		i++;
	}
	while (i > 0)
	{
		ft_putchar(base[result[i - 1]]);
		i--;
	}
}

int	ft_valid_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (i < ft_strlen(base))
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] < 33 || base[i] > 126)
			return (0);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	strlen;

	strlen = 0;
	while (str[strlen] != '\0')
		strlen++;
	return (strlen);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
