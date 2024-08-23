#include <unistd.h> //allow the write function from the C Library
void ft_putchar(char c) //creating a function to output characters
{ //this is the start of the function
	write(1,&c,1); //this allows for a character to be written with the &c
} //this is the end of the function
int main(void)
{
	ft_putchar('x');
	return (0);
}
