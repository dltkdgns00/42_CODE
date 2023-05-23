/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghule <sanghule@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:41:56 by sanghule          #+#    #+#             */
/*   Updated: 2022/09/06 22:41:05 by sanghule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_verify(char c);
void	ft_putchar(char c);

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_verify(str[i]) == 1)
			ft_putchar(str[i]);
		else if (ft_verify(str[i]) == 2)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
		}
		i++;
	}
}

int	ft_verify(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (2);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
