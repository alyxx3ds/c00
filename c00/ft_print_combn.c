#include <unistd.h>





void	ft_putchar(char c)


{


	write(1, &c, 1);


}





void	ft_print_combn(int n)


{


	int	num[10];


	int	i;





	if (n <= 0 || n >= 10)


		return;


	for (i = 0; i < n; i++)


		num[i] = i;





	while (num[0] <= (10 - n))


	{


		i = -1;


		while (++i < n)


			ft_putchar(num[i] + '0');


		if (num[0] != (10 - n))


			write(1, ", ", 2);





		num[n - 1]++;


		i = n - 1;


		while (i > 0 && num[i] > 9 - (n - 1 - i))


		{


			num[i - 1]++;


			num[i] = num[i - 1] + 1;


			i--;


		}


	}


}
