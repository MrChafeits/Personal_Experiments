/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 20:51:19 by callen            #+#    #+#             */
/*   Updated: 2019/12/16 22:02:30 by callen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bunt.c"

int
	main(argc, argv)
	int argc;
	const char *argv[];
	{
	int ii;

	ii = -1;
	while (++ii < argc)
	{
		puts(argv[ii]);
	}
}

int	main() {
	int ii;
	for (ii = 0; ii < 256; ++ii) {
		if (isxdigit(ii))
			printf("1,");
		else
			printf("0,");
		if (ii % 16 == 15)
			printf("\n");
	}
}
