#include <stdio.h> // printf
#include <stdlib.h> // free
#include <readline/readline.h> //readline
#include <readline/history.h> // add_history
#include <unistd.h> // execve, fork

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

            if(access(args[0], X_OK) == 0)
            {
                pid = fork();
                if (pid == 0)
                    execve(args[0], args, NULL); // args: const char *path, char *const _Nullable argv[], char *const _Nullable envp[]
                else
                    wait(); // Espera a el hijo
            }
        }
        free(input);
    }
    printf("You typed: %s\n", input);
    return (0);
}
