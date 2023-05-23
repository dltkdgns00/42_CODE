/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghule <sanghule@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:53:18 by sanghule          #+#    #+#             */
/*   Updated: 2022/09/15 15:43:33 by sanghule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	long	i;

	if (nb == 0 || nb == 1)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (i != nb && nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
