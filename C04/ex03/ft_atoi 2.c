/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghule <sanghule@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:06:25 by sanghule          #+#    #+#             */
/*   Updated: 2022/09/10 10:52:36 by sanghule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_verify(char c);
int	ft_arrtoi(int *arr, int j, int minus);

int	ft_atoi(char *str)
{
	int	arr[10];
	int	i;
	int	j;
	int	v_break;
	int	minus;

	minus = 0;
	i = 0;
	v_break = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			minus++;
		j = 0;
		while (ft_verify(str[i]) == 1)
		{
			arr[j++] = str[i++] - '0';
			v_break = 1;
		}
		if (v_break == 1)
			break ;
		i++;
	}
	return (ft_arrtoi(arr, j - 1, minus));
}

int	ft_arrtoi(int *arr, int j, int minus)
{
	int	result;
	int	updec;

	result = 0;
	updec = 1;
	while (j >= 0)
	{
		result += arr[j] * updec;
		j--;
		updec *= 10;
	}
	if (minus % 2 == 1)
		result = -result;
	return (result);
}

int	ft_verify(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
