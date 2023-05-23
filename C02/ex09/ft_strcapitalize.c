/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghule <sanghule@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:12:40 by sanghule          #+#    #+#             */
/*   Updated: 2022/09/07 11:50:34 by sanghule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_verify(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_verify(str[i]) == 1)
			str[i] = str[i] + 32;
		i++;
	}
	if (ft_verify(str[0]) == 2)
		str[0] = str[0] - 32;
	j = 1;
	while (str[j] != '\0')
	{
		if (ft_verify(str[j - 1]) == 4 && ft_verify(str[j]) == 2)
			str[j] = str[j] - 32;
		j++;
	}
	return (str);
}

int	ft_verify(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (2);
	if (c >= 48 && c <= 57)
		return (3);
	else
		return (4);
	return (0);
}
