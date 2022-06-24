/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:22:10 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/24 17:30:52 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtests.h"
#include "libftprintf.h"

#define TESTS_QUANT 9

/*
static int	test_0(){
	// printf("%s | %x\n", hex_converter(INT_MAX), INT_MAX);
	// printf("%s | %x\n", hex_converter(0), 0);
	// printf("%s | %x\n", hex_converter(INT_MIN), INT_MIN);
	return (OK);
}
*/
static int test = 10;

static int	test_1(){
	ft_printf("-Char arg (%%c):			%c\n", 'C');
	return (OK);
}
static int	test_2(){
	ft_printf("-String arg (%%s):		%s\n", "Hello World");
	return (OK);
}
static int	test_3(){
	ft_printf("-Pointer arg (%%p):		%p\n", &test);
	return (OK);
}
static int	test_4(){
	ft_printf("-Signed decimal int (%%d):	%d\n", INT_MAX);
	return (OK);
}
static int	test_5(){
	ft_printf("-Signed decimal int (%%i):	%i\n", INT_MIN);
	return (OK);
}
static int	test_6(){
	ft_printf("-Unsigned decimal int (%%u):	%u\n", 42);
	return (OK);
}
static int	test_7(){
	ft_printf("-lower hexadecimal (%%x):	%x\n", 42);
	return (OK);
}
static int	test_8(){
	ft_printf("-Upper hexadecimal (%%X):	%X\n", 42);
	return (OK);
}

static int	test_9(){
	ft_printf("-Percentage (%%%%):		%%\n");
	return (OK);
}

void		test_printf(){	
	t_func_array f_ptr[TESTS_QUANT] = { &test_1, &test_2, &test_3, &test_4, &test_5, &test_6, &test_7, &test_8, &test_9 };
	tests_iterator(f_ptr, TESTS_QUANT);
}
