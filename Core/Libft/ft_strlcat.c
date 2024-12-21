#include <stdio.h>
size_t ft_strlcat(char *dst, const char *src, size_t size);
int main()
{
}
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len = 0;
    size_t i = 0;

    // Find the length of the destination string
    while (dst_len < size && dst[dst_len]) {
        dst_len++;
    }

    // If there's no space for any more characters, return the total size that would be needed
    if (dst_len == size) {
        return size + ft_strlen(src);
    }

    // Copy characters from src to dst, stopping when we reach the available space
    while (src[i] && dst_len + i < size - 1) {
        dst[dst_len + i] = src[i];
        i++;
    }

    // Null-terminate the destination string
    dst[dst_len + i] = '\0';

    // Return the total length that the concatenated string would have
    return dst_len + ft_strlen(src);
}

