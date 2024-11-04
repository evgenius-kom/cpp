#include <cstdlib>
#include <cstdio>

int process_envp(char *envp[])
{
    while(*envp)
    {
        printf("%s\n", *envp++);
    }

    printf("--------------------------------------------------------------------------------\n");

    const char* home = std::getenv("HOME");
    const char* user = std::getenv("USER");

    printf("Home directory of a user %s is %s.\n", user, home);

    return 0;
}

// int main(int argc, char* argv[], char* envp[])
// {
//     process_envp(envp);
//     return 0;
// }
