/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghule <sanghule@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:02:50 by sanghule          #+#    #+#             */
/*   Updated: 2022/09/01 17:05:47 by sanghule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_str_is_alpha(char *str)
{
	int		i;
	int		count;
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
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
	printf("%d\n",ft_str_is_alpha("abcdefg"));
	printf("%d\n",ft_str_is_alpha("1234567"));
	printf("%d\n",ft_str_is_alpha("asdf567"));
	printf("%d\n",ft_str_is_alpha(")(@&)(&"));
}
