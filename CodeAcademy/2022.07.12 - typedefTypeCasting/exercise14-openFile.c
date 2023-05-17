#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd = open("test.txt", O_RDONLY, 0);
    if (-1 == fd)
    {
        printf("Failed to open file!\n");
    }
    else
    {
        char szBuf[BUFSIZ] = {0};
        read(fd, szBuf, sizeof(szBuf) -1);
        printf(szBuf);
        close(fd);
    }

    return 0;
}
