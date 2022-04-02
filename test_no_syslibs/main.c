#include "syscalls.h"

int	main(int argc, char **argv)
{
	int	fd, bytes_read, success, i;
	char	buf[500];

	if (argc != 3)
	{
		ft_write(1, "Usage: ./copy <path1> <path2>\n", 30);
		return (1);
	}
	fd = ft_open(argv[1], O_RDONLY, 0);
	bytes_read = 0;
	i = 0;
	while (i < 499)
	{
		success = ft_read(fd, &buf[i], 1);
		if (success <= 0)
			break;
		i++;
		bytes_read += success;
	}
	ft_close(fd);
	buf[bytes_read] = 0;
	fd = ft_open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);	
	ft_write(fd, buf, bytes_read);
	ft_close(fd);
	return (0);
}
