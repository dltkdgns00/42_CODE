/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghule <sanghule@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:07:20 by sanghule          #+#    #+#             */
/*   Updated: 2022/08/31 16:37:04 by sanghule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recursion(char numbers[], int i, int ndwn, int nfix);
void	ft_putchar(char *numbers, int n);

void	ft_print_combn(int n)
{
	int		i;
	char	numbers[10];

	numbers[0] = '0';
	i = 0;
	ft_recursion(numbers, i, n, n);
}

void	ft_recursion(char numbers[], int i, int ndwn, int nfix)
{
	if (ndwn == 0)
	{
		ft_putchar(numbers, nfix);
		if (numbers[0] != 10 - nfix + '0')
		{
			write(1, ", ", 2);
		}
	}
	if (ndwn < 0)
		return ;
	while (i < 10)
	{
		numbers[nfix - ndwn] = i + '0';
		ft_recursion(numbers, i + 1, ndwn - 1, nfix);
		i++;
	}
}

void	ft_putchar(char *numbers, int n)
{
	write(1, numbers, n);
}

int main()
{
	ft_print_combn(6);
}
