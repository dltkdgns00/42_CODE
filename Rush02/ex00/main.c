/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoh <jdoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:01:28 by jdoh              #+#    #+#             */
/*   Updated: 2022/09/10 17:11:48 by jdoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	(void) argv;
	if (argc == 1 || argc > 3)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	write(1, "Sorry\n", 6);
	return (0);
}