/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:31:28 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/10/17 20:36:32 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

/**
 * @file ft_putstr_fd.c
 * @brief: writes a string to a specified file descriptor.
 *
 * @param s: string to be printed
 * @param fd: file descriptor where the string will be printed
 *
 * @return: none
 *
 * @author: sgarcia3
 * @date: 17/10/2023
 */

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/*int main(void)
{
    // Abre un archivo en modo de escritura.
    int fd = open("test1.txt", O_WRONLY | O_CREAT, 0644);
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
