/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghule <sanghule@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 07:57:20 by sanghule          #+#    #+#             */
/*   Updated: 2022/09/04 07:57:28 by sanghule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rmspace(char *arr, char *origin);
int	*ft_ctoi(int *arr, char *origin);
void	ft_split(int *i_arr);
void	ft_check(int arr);
void	print_all(int row, int col, char data[row][col]);

void	ft_rec(int *arr, int *temp, int k, int i)
{
	k = 0;
	while (k < 4)
	{
		if (colup[k] == 1)
			temp[4] = ft_put_1(temp, i);
		else if (colup[k] == 2)
			temp[4] = ft_put_2(temp, i);
		else if (colup[k] == 3)
			temp[4] = ft_put_3(temp, i);
		else if (colup[k] == 4)
			temp[4] = ft_is_2_3_4(20);
		ft_inputarr(temp, arr, k);
		k++;
	}
	check = ft_check(arr);
	if (check == 1);
		break;
	ft_rec(arr, temp, k, i+1);
	print_all(4, 4, arr);
}

void	ft_check(int arr)
{
	
}

int	ft_put_1(int *temp, int i)
{
	if (coldown[k] == 2)
		temp[4] = ft_is_1(i);
	else if (coldown[k] == 3)
		temp[4] = ft_is_1(2+i);
	else if (coldown[k] == 4)
		temp[4] = ft_is_1(5);
	return (temp);
}
int	ft_put_2(int *temp, int i)
{
	if (coldown[k] == 1)
		temp[4] = ft_is_2_1(i);
	else if (coldown[k] == 2)
		temp[4] = ft_is_2_2(2+i);
	else if (coldown[k] == 3)
		temp[4] = ft_is_2_3_4(6+i);
	return (temp);
}
int	ft_put_3(int *temp, int i)
{
	if(coldown[k] == 1)
		temp[4] = ft_is_3(i);
	else if (coldown[k] == 2)
		temp[4] = ft_is_3(2+i);
	return (temp);
}
int	ft_inputarr(int *temp, int *arr, int k)
{
	int	i;

	i = 0;
	while(i < 4)
	{
		arr[k][i] = temp[i];
		i++;
	}
}
void	print_all(int row, int col, char arr[row][col])
{
	int i;
	int j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			write(1, &arr[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	data_set_zero(char data[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			data[i][j] = '0';
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char	arr[16];
	int	i_arr[16];

	(void)argc;
	*arr = *ft_rmspace(arr, argv[1]);
	*i_arr = *ft_ctoi(i_arr, arr);
	ft_split(i_arr);
	ft_rec(arr, temp, k);
}

char	*ft_rmspace(char *arr, char *origin)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (origin[j] != '\0')
	{
		if (origin[j] != ' ')
		{
			arr[i] = origin[j];
			i++;
		}
		j++;
	}
	return (arr);
}

int	*ft_ctoi(int *i_arr, char *origin)
{
	int i;

	i = 0;
	while (i < 16)
	{
		i_arr[i] = origin[i] - '0';
		i++;
	}
	return (i_arr);
}

void	ft_split(int *i_arr)
{
	static	int colup[4];
	static	int coldown[4];
	static	int	rowleft[4];
	static	int rowright[4];
	int i;

	i = 0;
	while (i < 16)
	{
		if (i >= 0 && i <= 3)
			colup[i] = i_arr[i];
		else if (i >= 4 && i <= 7)
			coldown[i-4] = i_arr[i];
		else if (i >= 8 && i <= 11)
			rowleft[i-8] = i_arr[i];
		else if (i >= 12 && i <= 15)
			rowright[i-12] = i_arr[i];
		i++;
	}
}
