/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghule <sanghule@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:42:49 by sanghule          #+#    #+#             */
/*   Updated: 2022/08/30 21:41:21 by sanghule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	number[5];

	number[0] = '0';
	number[3] = ',';
	number[4] = ' ';
	while (number[0] <= '7')
	{
		number[1] = number[0] + 1;
		while (number[1] <= '8')
		{
			number[2] = number[1] + 1;
			while (number[2] <= '9')
			{
				if (number[0] == '7' && number[1] == '8' && number[2] == '9')
				{
					write(1, number, 3);
				}
				else
					write(1, number, 5);
				number[2]++;
			}
			number[1]++;
		}
		number[0]++;
	}
}
