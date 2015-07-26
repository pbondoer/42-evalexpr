/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/26 16:55:31 by pbondoer          #+#    #+#             */
/*   Updated: 2015/07/26 23:10:34 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

int		eval_expr(char *expr);
int		parse_sum(char **expr);
int		parse_factors(char **expr);
int		parse_number(char **expr);
#endif
