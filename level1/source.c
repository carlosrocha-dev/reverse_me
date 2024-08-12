/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caalbert <caalbert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 00:38:20 by caalbert          #+#    #+#             */
/*   Updated: 2024/08/12 00:53:20 by caalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (strcmp(argv[1], "__stack_check") == 0)
			printf("Good job!\n");
	}
	else
		puts("Nope\n");
	return (0);
}
