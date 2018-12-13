/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helbouaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:05:04 by helbouaz          #+#    #+#             */
/*   Updated: 2018/12/13 16:17:28 by helbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			left_one(int *i, char c)
{
	if (--(*i) < 0)
		return (0);
	else
		return (c - '0');
}

char		*add_char(char *nbr1, char *nbr2)
{
	char	*temp;
	int		i;
	int		j;
	int		max;
	int		left;
	int		dig1;
	int 	dig2;
	int		dig;

	i = ft_strlen(nbr1);
	j = ft_strlen(nbr2);
	if (i >= j)
	{
		temp = ft_strnew(i + 1);
		max = i;
	}
	else
	{
		temp = ft_strnew(j + 1);
		max = j;
	}
	left = 0;
	while (--max >= 0)
	{
		dig1 = left_one(&i, nbr1[i]);
		dig2 = left_one(&j, nbr2[j]);
		dig = dig1 + dig2 + left;
		/*ft_putstr("nbr1 = ");
		ft_putchar(nbr1[i]);
		ft_putstr(" i = ");
		ft_putnbr(i);
		ft_putstr(" nbr2 = ");
		ft_putchar(nbr2[j]);
		ft_putstr(" j = ");
		ft_putnbr(j);
		ft_putchar('\n');*/
		//ft_putnbr(dig);
		temp[max + 1] = (dig % 10) + '0';
		left = dig / 10;
	}
	temp[0] = left + '0';
	return (temp);
	/*
	int		i;
	int		j;
	int		left[4];
	char	*temp;

	left[0] = 0;
	temp = ft_strnew(0);
	i = ft_strlen(nbr1);
	j = ft_strlen(nbr2);
	if (i > j)
		left[3] = i;
	else
		left[3] = j;
	while (--left[3] >= 0)
	{
		left[1] = left_one(&i, nbr1[i - 1]);
		left[2] = left_one(&j, nbr2[j - 1]);
		left[0] += left[1] + left[2];
		temp = ft_charjoin((left[0] % 10) + '0', temp, 'l');
		left[0] /= 10;
	}
	if (left[0] > 0)
		temp = ft_charjoin((left[0] % 10) + '0', temp, 'l');
	return (temp);*/
}
