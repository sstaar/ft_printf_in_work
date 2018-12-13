/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helbouaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:27:50 by helbouaz          #+#    #+#             */
/*   Updated: 2018/12/13 13:19:05 by helbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
char	*power_char(int nbr1, int nbr2)
{
	int			i;
	char		*temp;

	temp = ft_strnew(0);
	if (nbr2 > 0)
	{
		temp = ft_itoa(nbr1);
		i = -1;
		while (++i < nbr2 - 1)
			temp = multi1_char(temp, nbr1);
	}
	else if (nbr2 == 0)
		return ("1");
	return (temp);
}
*/
char	*power_char(int nbr1, int nbr2)
{
	char		*temp;

	temp = ft_strnew(0);
	if (nbr2 == 1)
		return (ft_itoa(nbr1));
	if (nbr2 % 2 == 0)
	{
		temp = power_char(nbr1, nbr2 / 2);
		return (multi_char(temp, temp));
	}
	else
	{
		nbr2 -= 1;
		temp = power_char(nbr1, nbr2 / 2);
		return(multi_char(ft_itoa(nbr1), multi_char(temp, temp)));
	}
}
