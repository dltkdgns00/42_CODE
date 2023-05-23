/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghule <sanghule@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:06:25 by sanghule          #+#    #+#             */
/*   Updated: 2022/09/13 15:23:15 by sanghule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_verify(char c);

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	minus;

	minus = 1;
	i = 0;
	result = 0;
	while (ft_verify(str[i]) == 0)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (ft_verify(str[i]) == 1)
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= minus;
	return (result);
}

int	ft_verify(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v')
		return (0);
	else if (c == '\f' || c == '\r')
		return (0);
	return (-1);
}
