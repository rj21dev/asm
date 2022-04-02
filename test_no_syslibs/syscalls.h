#define O_RDONLY	0x0000
#define O_WRONLY	0x0001
#define O_RDWR		0x0002
#define O_APPEND	0x0008
#define O_CREAT		0x0200
#define O_TRUNC		0x0400

typedef unsigned long size_t;

int	ft_read(int fd, void *buf, size_t count);
int	ft_write(int fd, void *buf, size_t count);
int	ft_open(const char *pathname, int flags, size_t mode);
int	ft_close(int fd);
void	ft_exit(int status);
