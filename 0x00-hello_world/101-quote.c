#include <unistd.h>

int main(void)
{
    char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = 59;

    write(2, str, len);

    return 1;
}
