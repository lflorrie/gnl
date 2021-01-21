#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"
#include <fcntl.h>

void	test1()
{
	int		fd;
	char	*line;
	
	fd = open("test1.txt", O_RDONLY);
	get_next_line(fd, &line);
	printf("%s\n", line);
	close(fd);
	free(line);
	write(1, "OK1\n", 4);
}

void	test2()
{
	int		fd;
	char	*line;
	
	fd = open("test2.txt", O_RDONLY);
	get_next_line(fd, &line);
	printf("%s\n", line);
	close(fd);
	free(line);
	write(1, "OK2\n", 4);
}

void	test3()
{
	int		fd;
	char	*line;
	
	fd = open("test3.txt", O_RDONLY);
	get_next_line(fd, &line);
	printf("%s\n", line);
	free(line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	close(fd);
	free(line);
	write(1, "OK3\n", 4);
}

void	test4()
{
	int		fd;
	char	*line;
	
	fd = open("test4.txt", O_RDONLY);
	get_next_line(fd, &line);
	printf("%s\n", line);
	free(line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	
	close(fd);
	free(line);
	write(1, "OK4\n", 4);
}
int		main()
{
	test1();
	test2();
	test3();
	test4();

	write(1, "END\n", 4);
	return (0);
}