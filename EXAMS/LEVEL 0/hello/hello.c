#include <unistd.h>

int main(void)
{
    write(1, "Hello World!", 12);
    write(1, "\n", 1);
    return 0;
}