#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

int main(void)
{
    char *input;

    while (1)
    {
        input = readline("minishell> ");

        if (!input)
        {
            printf("exit\n");
            break;
        }

        if (input[0] != '\0')
            add_history(input);
    }
    printf("You typed: %s\n", input);
    free(input);
    return (0);
}
