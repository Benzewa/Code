char *get_next_line(int fd)
{
    static char *text;
    char buffer[BUFFER_SIZE + 1];
    ssize_t bytes_read;
    
}