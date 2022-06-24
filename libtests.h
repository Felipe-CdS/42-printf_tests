/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtests.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:17:20 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/24 15:41:59 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include "libftprintf.h"

#define OK 1
#define KO 0
#define ND -1

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define RESET "\x1B[0m"

/*==========================================*/
/*					Tests					*/
/*==========================================*/

void	test_printf();

/*==========================================*/
/*					Misc					*/
/*==========================================*/

typedef int (*t_func_array)(void);

void	test_all();
void	tests_iterator(t_func_array *f_ptr, int tests_quant);
void	printnmem(void *s, size_t n);
