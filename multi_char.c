/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multi_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helbouaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:37:56 by helbouaz          #+#    #+#             */
/*   Updated: 2018/12/13 13:40:22 by helbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*multi1_char(char *nbr1, int nbr2)
{
	int		i;
	char	*temp;

	if (nbr1[0] == '0' || nbr2 == 0)
		return ("0");
	i = -1;
	temp = ft_strdup(nbr1);
	while (++i < nbr2 - 1)
		temp = add_char(temp, nbr1);
	return (temp);
}

char	*multi2_char(char *nbr1, int nbr2)
{
	char	*res;
	int		left;
	int		i;

	left = 0;
	if (nbr1[0] == 0 || nbr2 == 0)
		return ("0");
	i = ft_strlen(nbr1);
	res = ft_strnew(0);
	while (--i >= 0)
	{
		left += (nbr1[i] - '0') * nbr2;
		res = ft_charjoin((left % 10) + '0', res, 'l');
		left /= 10;
	}
	if (left != 0)
		res = ft_charjoin((left % 10) + '0', res, 'l');
	return (res);
}

char		*multi_char(char *nbr1, char *nbr2)
{
	int			i;
	char		*temp;
	int			j;
	char		*temp1;
	int			t;
	char		*mul;

	mul = ft_strnew(0);
	temp = ft_strnew(1);
	j = 0;
	i = ft_strlen(nbr2);
	while (--i >= 0)
	{
		t = -1;
		temp1 = multi1_char(nbr1, nbr2[i] - '0');
		//temp1 = multi1_char(temp1, 10*j);
		/*while (++t < j)
			temp1 = ft_strjoin(temp1, "0");*/
		temp1 = ft_strjoin(temp1, mul);
		temp = add_char(temp, temp1);
		mul = ft_strjoin("0", mul);
		j++;
	}
	return (temp);
}
