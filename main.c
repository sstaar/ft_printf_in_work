/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helbouaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 11:00:32 by helbouaz          #+#    #+#             */
/*   Updated: 2018/12/13 16:04:49 by helbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(int argc, char **argv)
{
	char	*temp;

	//temp = "1000";
//	temp = "141246703213942603683520966701614733366889617518454111681368808585711816984270751255808912631671152637335603208431366082764203838069979338335971185726639923431051777851865399011877999645131707069373498212631323752553111215372844035950900535954860733418453405575566736801565587405464699640499050849699472357900905617571376618228216434213181520991556677126498651782204174061830939239176861341383294018240225838692725596147005144243281075275629495339093813198966735633606329691023842454125835888656873133981287240980008838073668221804264432910894030789020219440578198488267339768238872279902157420307247570510423845868872596735891805818727796435753018518086641356012851302546726823009250218328018251907340245449863183265637987862198511046362985461949587281119139907228004385942880953958816554567625296086916885774828934449941362416588675326940332561103664556982622206834474219811081872404929503481991376740379825998791411879802717583885498575115299471743469241117070230398103378615232793710290992656444842895511830355733152020804157920090041811951880456705515468349446182731742327685989277607620709525878318766488368348965015474997864119765441433356928012344111765735336393557879214937004347568208665958717764059293592887514292843557047089164876483116615691886203812997555690171892169733755224469032475078797830901321579940127337210694377283439922280274060798234786740434893458120198341101033812506720046609891160700284002100980452964039788704335302619337597862052192280371481132164147186514169090917191909376";
	//ft_putendl(multi_char(temp, temp));
	//ft_putendl(power_char(ft_atoi(argv[1]), ft_atoi(argv[2])));
	ft_putendl(add_char("99999", "1"));
	return (0);
}
