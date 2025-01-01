#include "libft.h"
int main()
{
    // ft_isdigit
    //printf("%d\n",ft_isdigit(10));
    //printf("%d\n",ft_isdigit(0));
    //printf("%d\n",ft_isdigit(-100));
    //printf("%d\n",ft_isdigit(0));
    //printf("%d\n",ft_isdigit('0'));
    //printf("%d\n",ft_isdigit('a'));
    //printf("%d\n",ft_isdigit(500));
    /**********************************/
    //ft_memset
    //int Arr[5] = {1,2,3,4,5};
    //for(int i = 0;i < 5;i++)
        //printf("%d\n", Arr[i]);

    //ft_memset(Arr, 0, 5 * 4);
    //for(int i = 0;i < 5;i++)
        //printf("%d\n", Arr[i]);
    /********************************/
    //ft_strchr
    //printf("%s\n", ft_strchr("Hello World", 'W'));
    /*********************************/
    //ft_strlcpy
    //char dst[10];
    //char src[] = "Hello";
    //size_t Size = 10;
    //printf("%zu\n", ft_strlcpy(dst, src, Size));
    
    //char dst[4];
    //char src[] = "Hello";
    //size_t Size = 4;
    //printf("%zu\n", ft_strlcpy(dst, src, Size));
    
    //char dst[6];
    //char src[] = "Hello";
    //size_t Size = 6;
    //printf("%zu\n", ft_strlcpy(dst, src, Size));
    
    //char dst[10];
    //char src[] = "";
    //size_t Size = 10;
    //printf("%zu\n", ft_strlcpy(dst, src, Size));
    
    //char dst[1];
    //char src[] = "Hello";
    //size_t Size = 1;
    //printf("%zu\n", ft_strlcpy(dst, src, Size));
    /*************************************************/
    // ft_atoi
    //printf("%d\n", ft_atoi("1234"));
    //printf("%d\n", ft_atoi("      1234"));
    //printf("%d\n", ft_atoi("123abc"));
    //printf("%d\n", ft_atoi("-1234"));
    //printf("%d\n", ft_atoi("abc123"));
    //printf("%d\n", ft_atoi(""));

    /************************************************/
    // ft_itoa
    //printf("%s\n", ft_itoa(123));
    //printf("%s\n", ft_itoa(   123));
    //printf("%s\n", ft_itoa(123));
    //printf("%s\n", ft_itoa(-123));

    /*************************************************/
    // ft_memset
    //int Arr[5] = {0};
    //for(int i = 0;i < 5;i++)
        //Arr[i] = i + 1;
    //for(int i = 0;i < 5;i++)
        //printf("%d\n", Arr[i]);
    //ft_memset(Arr, 0 , 20);
    //for(int i = 0;i < 5;i++)
        //printf("%d\n", Arr[i]);

    /**************************************************/
    // *ft_memchr(const void *s,int c,size_t n)
    //char *string = "hello world";
    //char c = 'w';
    //size_t len = 13;

    //printf("%s\n",(char *)ft_memchr(string, c, 13));

    /*************************************************/

    // int ft_memcmp(const void *s1, const void *s2, size_t n)
    //char *str1 = "Hello";
    //char *str2 = "Hellp";
    //size_t n = 5;
    //printf("%d\n", ft_memcmp(str1, str2, n));
    /***************************************************/

    // void *ft_memcpy(void *dst, const coid *src, size_t n)

    //char str1[5] = {0};
    //char *str2 = "Hello World";
    //size_t len = 5;
    //printf("%s\n", (char *)ft_memcpy(str1, str2, len));

    /*****************************************************/
    // void ft_putchar_fd(char c, int fd)
    //ft_putchar_fd('A',1);

    /*******************************************/
    // void ft_putnbr_fd(int n, int fd)

    //ft_putnbr_fd(0,1);
    //printf("\n");
    //ft_putnbr_fd(123,1);
    //printf("\n");
    //ft_putnbr_fd(-456,1);
    //printf("\n");

    /****************************************/

    //void ft_putstr_fd(char *s,int fd)
    //ft_putstr_fd("Hello World",1);

    /****************************************/
    //void ft_putendl_fd(char *s, int fd);
    //ft_putendl_fd("HEllo World", 1);

    /****************************************/
    // split
    //const char *str = "Hello,world,this,is,a,test";
    //char delimiter = ',';

    // Split the string
    //char **result = ft_split(str, delimiter);

    // If the result is not NULL, print the substrings
    //if (result) {
        //for (int i = 0; result[i] != NULL; ++i) {
            //printf("Substring %d: %s\n", i, result[i]);
            //free(result[i]);  // Don't forget to free the substrings!
        //}
        //free(result);  // Finally, free the array itself.
    //} else {
        //printf("Memory allocation failed.\n");
    //}

    /*******************************************/
    //strdup

    //char *str1 = "Moutaz Sami";
    //char *str2;

    //str2 = ft_strdup(str1);
    //printf("%s\n", str2);

    /**********************************************/

    //ft_strjoin

    //char *str1 = "Hello ";
    //char *str2 = "World.";
    //char *strjoined = ft_strjoin(str1, str2);

    //printf("%s\n", strjoined);

    /***********************************************/
    // ft_strlcat
    //char str1[20] = "Hello";
    //char *str2 = "World";
    //size_t dstsize = 10;
    //printf("%zu\n", ft_strlcat(str1, str2, dstsize));
    /*****************************************************/

    //ft_strlcpy
    //char dst[20];
    //char *src = "hello";
    //size_t dstSize = 10;
    //printf("%zu\n", ft_strlcpy(dst, src, dstSize));

    // ft_strncmp
    char *str1 = "Hello";
    char *str2 = "Hellp";
    printf("%d\n", ft_strncmp(str1,str2,3));





























}
