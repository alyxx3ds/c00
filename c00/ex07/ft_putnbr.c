#include <unistd.h>

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2", 2);
        nb = 147483648;
    }

    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }

    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }

    char digit = '0' + (nb % 10);
    write(1, &digit, 1);
}
int main(void){
	
	ft_putnbr(32);
	
	return 0;
}
