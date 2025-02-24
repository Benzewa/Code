#include "get_next_line.h"
#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int fd;
    char *line;

    fd = open("test.txt", O_RDONLY);

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);  // Free the allocated memory for each line
    }
    close(fd);  // Close the file when done
    return 0;
}