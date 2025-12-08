/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.madrid42.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:17:23 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/10/24 17:45:51 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

/**
* @file ft_putendl_fd.c
* @brief ft_putendl_fd sends s to file descriptor and adds a line break
*
* @param s: string to send
* @param fd: file descriptor
* 
* @author sgarcia3
* @date 24/10/2023
*/

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*int main(void)
{
    // Abre un archivo en modo de escritura.
    int fd = open("test2.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1) {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Llama a la función con el descriptor del archivo y una cadena de texto.
    ft_putstr_fd("Hola, Mundo!", fd);

    // Cierra el archivo.
    close(fd);

    return 0;
}*/
