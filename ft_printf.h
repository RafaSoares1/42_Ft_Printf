/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:33:25 by emsoares          #+#    #+#             */
/*   Updated: 2022/12/09 12:38:21 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <strings.h>
# include <stddef.h>
# include <ctype.h>
# include <stdarg.h>
# include <stdint.h>

int			ft_printf(const char *str, ...);
int			ft_print_char(int c);
int			ft_print_str(char *str);
int			ft_print_num(long nb);
int			ft_print_unsigned_int(unsigned int nb);
int			ft_print_lower_hexa(unsigned int nb);
int			ft_print_upper_hexa(unsigned int nb);
int			ft_address(unsigned long nb);
#endif