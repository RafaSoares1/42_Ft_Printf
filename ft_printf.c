/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:24:36 by emsoares          #+#    #+#             */
/*   Updated: 2022/12/12 12:00:08 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_and_count(va_list args, char character)
{
	int	i;

	i = 0;
	if (character == 'c')
		i = ft_print_char(va_arg(args, int));
	else if (character == 's')
		i = ft_print_str(va_arg(args, char *));
	else if (character == 'i' || character == 'd')
		i = ft_print_num(va_arg(args, int));
	else if (character == 'u')
		i = ft_print_unsigned_int(va_arg(args, unsigned int));
	else if (character == 'x')
		i = ft_print_lower_hexa(va_arg(args, unsigned int));
	else if (character == 'X')
		i = ft_print_upper_hexa(va_arg(args, unsigned int));
	else if (character == '%')
		i = ft_print_char('%');
	else if (character == 'p')
		i = ft_address(va_arg(args, unsigned long));
	else
		return (0);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		bytes_in_str;
	int		i;

	i = 0;
	bytes_in_str = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			bytes_in_str += print_and_count (args, str[i + 1]);
			i += 2;
		}
		else
		{
			bytes_in_str += ft_print_char(str[i]);
			i++;
		}
	}
	va_end(args);
	return (bytes_in_str);
}

/* int	main(void)
{
	char			a;
	char			*str;
	int				i;
	unsigned int	ui;
	unsigned int	hex;

	a = 'a';
	str = "Rafa";
	i = -48454611;
	ui = 365874295;
	hex = 4685723;
	//%c:
	ft_printf("%s", "Char:");
	printf("\n");
	ft_printf("%s", "ft_printf: ");
	ft_printf("%c", a);
	ft_printf("%s", " | printf: ");
	printf("%c\n\n", a);
	//%s
	ft_printf("%s", "String:");
	printf("\n");
	ft_printf("%s", "ft_printf: ");
	ft_printf("%s", str);
	ft_printf("%s", " | printf: ");
	printf("%s\n\n", str);
	//%p
	ft_printf("%s", "Pointer:");
	printf("\n");
	ft_printf("%s", "ft_printf: ");
	ft_printf("%p", &i);
	ft_printf("%s", " | printf: ");
	printf("%p\n\n", &i); 
	//%d
	ft_printf("%s", "Decimal:");
	printf("\n");
	ft_printf("%s", "ft_printf: ");
	ft_printf("%d", i);
	ft_printf("%s", " | printf: ");
	printf("%d\n\n", i);
	//%i
	ft_printf("%s", "Integer:");
	printf("\n");
	ft_printf("%s", "ft_printf: ");
	ft_printf("%i", i);
	ft_printf("%s", " | printf: ");
	printf("%i\n\n", i);
	//%u
	ft_printf("%s", "Unsigned int:");
	printf("\n");
	ft_printf("%s", "ft_printf: ");
	ft_printf("%u", ui);
	ft_printf("%s", " | printf: ");
	printf("%u\n\n", ui); 
	//%x
	ft_printf("%s", "Hexadecimal lowercase:");
	printf("\n");
	ft_printf("%s", "ft_printf: ");
	ft_printf("%x", hex);
	ft_printf("%s", " | printf: ");
	printf("%x\n\n", hex);
	//%X
	ft_printf("%s", "Hexadecimal uppercase:");
	printf("\n");
	ft_printf("%s", "ft_printf: ");
	ft_printf("%X", hex);
	ft_printf("%s", " | printf: ");
	printf("%X\n\n", hex);
	//%%
	ft_printf("%s", "% Sign:");
	printf("\n");
	ft_printf("%s", "ft_printf: ");
	ft_printf("%%");
	ft_printf("%s", " | printf: ");
	printf("%%\n\n"); 
	return (0);
}*/ 
