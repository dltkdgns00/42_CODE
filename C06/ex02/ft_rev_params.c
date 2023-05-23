/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghule <sanghule@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:12:12 by sanghule          #+#    #+#             */
/*   Updated: 2022/09/11 17:21:14 by sanghule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	while (argc - 1 > 0)
	{
		i = 0;
		while (argv[argc - 1][i] != '\0')
		{
			write (1, &argv[argc - 1][i], 1);
			i++;
		}
		write (1, "\n", 1);
		argc--;
	}
}
