/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghule <sanghule@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:35:19 by sanghule          #+#    #+#             */
/*   Updated: 2022/09/10 16:29:06 by sanghule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_valid_base(char *base);
int		ft_strlen(char *base);
void	ft_putchar(char c);

void	ft_putnbr_base(int nbr, char *base)
{
	int	result[100];
	int	i;

	if (ft_valid_base(base) == 0)
		return ;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	i = 0;
	whlie (nbr > 0)
	{
		result[i] = nbr % ft_strlen(base);
		nbr = nbr / ft_strlen(base);
		i++;
	}
	while (i > 0)
	{
		ft_putchar(base[result[i]]);
		i--;
	}
}

int		ft_valid_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	j = i + 1;
	while (i < ft_strlen(base))
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
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

int		ft_strlen(char *str)
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