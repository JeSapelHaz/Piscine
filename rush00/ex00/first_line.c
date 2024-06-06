#include <unistd.h>

void ft_putchar(char c);

void ft_display(int n, char c, int r)
{
    int i;

    i = 0;
    while (i < n)
    {
        ft_putchar(c);
        i++;
    }
    if (r == 1)
        ft_putchar('\n');
}

void	ft_first_line(int x)
{
	ft_display(1, 'A', 0);
	ft_display(x-2, 'B', 0);
	ft_display(1, 'A', 1);
}

int main()
{
	ft_first_line(1);
}
