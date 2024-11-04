#include <cstdlib>
#include <cstdio>

int _main(int argc, char *argv[], char *envp[])
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
