/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/26 22:38:57 by pbondoer          #+#    #+#             */
/*   Updated: 2015/07/26 23:10:47 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functs.h"
#include "eval_expr.h"

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
