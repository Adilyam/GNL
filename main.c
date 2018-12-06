/* ************************************************************************** */
/*    223                                                                     */

/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atlekbai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 18:41:07 by atlekbai          #+#    #+#             */
/*   Updated: 2018/05/17 18:20:51 by atilegen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>


int main(int ac, char **av)
{
	int fd1;
	int fd2;
	char *line;
    ac = 0;

	fd1 = open(av[1], O_RDONLY);
	get_next_line(fd1, &line);
	printf("%s\n", line);
	
    fd2 = open(av[2], O_RDONLY);
	get_next_line(fd2, &line);
	
    printf("%s\n", line);
	get_next_line(fd1, &line);
	printf("%s\n", line);
    
    
    while (get_next_line(fd1, &line) == 1)
         printf("%s\n", line);
    return (0);
}
