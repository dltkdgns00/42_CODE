/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghule <sanghule@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 10:21:28 by sanghule          #+#    #+#             */
/*   Updated: 2022/09/14 11:13:00 by sanghule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_valid_base(char *base);
int	ft_base_str(char c, char *base);
int	ft_strlen(char *str);

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	i;
	int	minus;

	if (ft_valid_base(base) == 0)
		return (0);
	minus = 1;
	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || \
			str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (ft_base_str(str[i], base) != -1)
	{
		result = result * ft_strlen(base) + ft_base_str(str[i++], base);
		i++;
	}
	return (result * minus);
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
		if (base[i] == '-' || base[i] == '+' || \
				base[i] == ' ' || base[i] == '\t' || \
				base[i] == '\v' || base[i] == '\r' || base[i] == '\f')
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

int	ft_base_str(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	strlen;

	strlen = 0;
	while (str[strlen] != '\0')
		strlen++;
	return (strlen);
}
