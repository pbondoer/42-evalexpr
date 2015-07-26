/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/26 15:53:50 by pbondoer          #+#    #+#             */
/*   Updated: 2015/07/26 23:35:49 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functs.h"
#include "eval_expr.h"

int		parse_number(char **expr)
{
	int nbr;

	while (**expr == ' ')
		(*expr)++;
	if (**expr == '(')
	{
		(*expr)++;
		nbr = parse_sum(expr);
		if (**expr == ')')
			(*expr)++;
		return (nbr);
	}
	return (ft_atoi(expr));
}

int		parse_factors(char **expr)
{
	int		nbr;
	int		nbr2;
	char	op;

	nbr = parse_number(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		op = **expr;
		if (op != '/' && op != '*' && op != '%')
			return (nbr);
		(*expr)++;
		nbr2 = parse_number(expr);
		if (op == '/')
			nbr /= nbr2;
		else if (op == '*')
			nbr *= nbr2;
		else
			nbr %= nbr2;
	}
	return (nbr);
}

int		parse_sum(char **expr)
{
	int		nbr;
	int		nbr2;
	char	op;

	nbr = parse_factors(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		op = **expr;
		if (op != '+' && op != '-')
			return (nbr);
		(*expr)++;
		nbr2 = parse_factors(expr);
		if (op == '+')
			nbr += nbr2;
		else
			nbr -= nbr2;
	}
	return (nbr);
}

int		eval_expr(char *expr)
{
	return (parse_sum(&expr));
}
