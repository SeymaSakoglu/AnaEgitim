#include "libft.h"

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

int	main(void)
{
	//char	str[] = "putstring";

	//ft_putstr_fd(str, 1);
	//ft_putendl_fd(str, 1);
	ft_putnbr_fd(856, 1);
	return (0);
}
