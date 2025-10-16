#include <stdio.h> // printf
#include <stdlib.h> // free
#include <readline/readline.h> //readline
#include <readline/history.h> // add_history
#include <unistd.h> // execve, fork
#include <string.h> // strncmp

// Built in: echo -n
void    echo(char **args)
{
    int arg_n;
    int i;

    i = 1;
    if(args[1][0] == '-' && args[1][1] == 'n' && args[1][2]  == '\0')
    {
        arg_n = 1;
        i++;
    }
    while(args[i])
    {
        printf("%s", args[i]);
        i++;
        if(args[i] != NULL)
            printf(" ");
    }
    if(arg_n != 1)
    {
        printf("\n");
    }
    return ;
}

char	**ft_split(char const *s, char c);

int main(void)
{
    char    *input;
    int     pid;
    char    **args;

    while (1)
    {
        input = readline("minishell> ");

        if (!input)
        {
            printf("exit\n");
            break;
        }

        if (input[0] != '\0')
        {
            add_history(input);
            args = ft_split(input, ' ');

            if(strncmp(args[0], "echo", 5) == 0) // Para que busque también el final de la string
                echo(args);

            if(access(args[0], X_OK) == 0)
            {
                pid = fork();
                if (pid == 0)
                    execve(args[0], args, NULL); // args: const char *path, char *const _Nullable argv[], char *const _Nullable envp[]
                else
                    wait(); // Espera al hijo
            }
        }
        free(input);
    }
    printf("You typed: %s\n", input);
    return (0);
}
