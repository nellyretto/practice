#include "main.h"
#define MAX_TOKENS 69
#define MAX_TOKEN_LEN 100
/
 

    execute_command - Comparing and executing command
        @tokens: The tokens array
        @pointer: The command string
        @env: Environment variables
        Return: 1 succ, -1 if fails
    /

int execute_command(char tokens, char pointer, char **env)
{
    unsigned int e = 0;
    pid_t child_pid;
    int status;

    if (strcmp(tokens[0], "exit") == 0)
    {
        / printf("Este free esta execute_command, esta encima de freetokens");/
        free(tokens);
        / printf("Este free esta execute_command, esta encima de freepointer"); /
        free(pointer);
        return (0);
    }

    if (strcmp(tokens[0], "env") == 0)
    {
        while (env[e])
        {
            write(1, env[e], strlen(env[e]));
            write(1, "\n", 1);
            e++;
        }
        free(tokens); /New frees /
        free(pointer); / New frees /
        return (1);
    }
    child_pid = fork();
    if (child_pid == -1)
    {
        perror("Child Process Failed");
        return (-1);
    }
    else if (child_pid == 0)
    {
         if (execve(tokens[0], tokens, env) == -1) /El error esta en este if /
        {
            perror("execve");
            / printf("Este free esta en execute_command, debajo de perror"); /
            / free(tokens); /
            / printf("Este es el free de execute_command, encima de freepointer"); /
            / free(pointer); /
            / printf("Este es el free de execute_command, encima de freeenv"); /
            / free_env(env);/
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        wait(&status);
    }
    return (1);
}


