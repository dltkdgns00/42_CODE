/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghule <sanghule@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:07:40 by sanghule          #+#    #+#             */
/*   Updated: 2022/09/01 17:10:47 by sanghule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_str_is_numeric(char *str)
{
	int		i;
	int		count;
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if(str[i]>='0' && str[i]<='9')
			count++;
		else
			return (0);
		if(count == i)
			return (1);
		i++;
	}
	return (1);
}
int main()
{
	printf("%d\n",ft_str_is_numeric("abcdefg"));
	printf("%d\n",ft_str_is_numeric("1234567"));
	printf("%d\n",ft_str_is_numeric("ABCDEFG"));
	printf("%d\n",ft_str_is_numeric(")(@&)(&"));
	printf("%d\n",ft_str_is_numeric(""));
}
