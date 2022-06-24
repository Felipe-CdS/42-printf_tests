/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:47:28 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/24 13:31:22 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"
#include "libtests.h"

void	printnmem(void *s, size_t n)
{
	char *tc_s;
	unsigned int i;
	
	tc_s = (char *) s;
	i = 0;
	while (i < n)
	{
		char x = tc_s[i];
		printf("%d ", x);	
		i++;
	}
}

void	tests_iterator(t_func_array *f_ptr, int tests_quant)
{
	if(!tests_quant) printf(YEL "[NOT IMPLEMENTED YET]" RESET);
	for(int i = 0; i < tests_quant; i++)
	{
		int ret = (*f_ptr[i])();
		if(ret == KO) 		printf(RED "[KO]" RESET);
		else if(ret == OK) 	printf(GRN "[OK]" RESET);	
		else				printf(YEL "[ND]" RESET);
	}
	printf("\n");
}

void	test_all()
{
	printf("+-----------------------------------------------------------------------+\n");
	printf("|\t\t\t\tPrintf Tests\t\t\t\t|\n");
	printf("+-----------------------------------------------------------------------+\n");
	
	printf("\t> Test 01) ft_printf:\t\t\n");
	test_printf();

	printf("+-----------------------------------------------------------------------+\n");
}
