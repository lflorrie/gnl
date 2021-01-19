#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"
#include <fcntl.h>

void	test1()
{
	int		fd;
	char	**line;
	
	fd = open("test1.txt", O_RDONLY);
	get_next_line(fd, line);
}

int		main()
{
	test1();
	return (0);
}