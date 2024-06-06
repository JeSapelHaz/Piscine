#include <unistd.h>

void ft_putchar(char c);

void ft_display(int n, char c, int r)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(c);
		i++;
	}
	if (r == 1)
		ft_putchar('\n');
}

void ft_last_line(int x)
{
	int i;
	i = 1;
	ft_display(1, 'C', 0);
	while(x-1 > i)
	{
		ft_display(1, 'B', 0);
		i++;
	}
	ft_display(1, 'C', 1);
}

void ft_first_line(int x)
{
	int i;
	i = 1;
	ft_display(1, 'A', 0);
	while(x-1 > i)
	{
		ft_display(1, 'B', 0);
		i++;
	}
	ft_display(1, 'A', 1);
}

void ft_mid_line(int x, int y)
{
	int i;

	i = 0;
	while(i < y)
	{
		ft_display(1, 'B', 0);
		ft_display(x-2, ' ',0);
		ft_display(1, 'B', 1);
		i++;
	}
}

int main(void)
{
	ft_first_line(4);
	ft_mid_line(4,2);
	ft_last_line(4);
}