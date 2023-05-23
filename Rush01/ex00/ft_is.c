/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghule <sanghule@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 05:53:15 by sanghule          #+#    #+#             */
/*   Updated: 2022/09/04 06:59:02 by sanghule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_is_1(int key)
{
	int	one_two_1[4];
	int	one_two_2[4];
	int	one_three_1[4];
	int	one_three_2[4];
	int	one_four[4];

	one_two_1 = {4, 2, 1, 3};
	one_two_2 = {4, 1, 2, 3};
	one_three_1 = {4, 2, 3, 1};
	one_three_2 = {4, 1, 3, 2};
	one_four = {4, 3, 2, 1};
	if (key == 1)
		return (one_two_1);
	if (key == 2)
		return (one_two_2);
	if (key == 3)
		return (one_three_1);
	if (key == 4)
		return (one_three_2);
	if (key == 5)
		return (one_four);
}

int	*ft_is_2_1(int key)
{
	int	two_one_1[4];
	int	two_one_2[4];

	two_one_1 = {3, 1, 2, 4};
	two_one_2 = {3, 2, 1, 4};
	if (key == 6)
		return (two_one_1);
	if (key == 7)
		return (two_one_2);
}

int	*ft_is_2_2(int key)
{
	int	two_two_1[4];
	int	two_two_2[4];
	int	two_two_3[4];
	int	two_two_4[4];

	two_two_1 = {2, 4, 1, 3};
	two_two_2 = {2, 1, 4, 3};
	two_two_3 = {3, 4, 1, 2};
	two_two_4 = {3, 1, 4, 2};
	if (key == 8)
		return (two_two_1);
	if (key == 9)
		return (two_two_2);
	if (key == 10)
		return (two_two_3);
	if (key == 11)
		return (two_two_4);
}

int	*ft_is_2_3_4(int key)
{
	int	two_three_1[4];
	int	two_three_2[4];
	int	two_three_3[4];
	int	four_one[4];

	two_three_1 = {1, 4, 3, 2};
	two_three_2 = {3, 4, 2, 1};
	two_three_3 = {3, 1, 4, 2};
	four_one = {1, 2, 3, 4};
	if (key == 12)
		return (two_three_1);
	if (key == 13)
		return (two_three_2);
	if (key == 14)
		return (two_three_3);
	if (key == 20)
		return (four_one);
}

int	*ft_is_3(int key)
{
	int	three_one_1[4];
	int	three_one_2[4];
	int	three_two_1[4];
	int	three_two_2[4];
	int	three_two_3[4];

	three_one_1 = {1, 3, 2, 4};
	three_one_2 = {2, 3, 1, 4};
	three_two_1 = {2, 3, 4, 1};
	three_two_2 = {1, 2, 4, 3};
	three_two_3 = {1, 3, 4, 2};
	if (key == 15)
		return (three_one_1);
	if (key == 16)
		return (three_one_2);
	if (key == 17)
		return (three_two_1);
	if (key == 18)
		return (three_two_2);
	if (key == 19)
		return (three_two_3);
}
