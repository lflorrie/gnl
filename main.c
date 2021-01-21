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
	line = NULL;
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
	line = NULL;
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
	line = NULL;
	get_next_line(fd, &line);
	printf("%s\n", line);
	close(fd);
	free(line);
	line = NULL;
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
	line = NULL;
	get_next_line(fd, &line);
	printf("%s\n", line);
	
	close(fd);
	free(line);
	line = NULL;
	write(1, "OK4\n", 4);
}
void	test5()
{
	int		fd;
	char	*line;
	
	fd = open("test5.txt", O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);	
		free(line);
		line = NULL;
	}
	printf("%s\n", line);
	free(line);
	line = NULL;
	close(fd);
	write(1, "OK5\n", 4);
}

void	test6()
{
	int		fd;
	char	*line;
	
	fd = open("1_newline", O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);	
		free(line);
		line = NULL;
	}
	printf("%s\n", line);
	free(line);
	line = NULL;
	close(fd);
	write(1, "OK5\n", 4);
}

void	test(const char *s)
{
	int		fd;
	char	*line;
	
	fd = open(s, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);	
		free(line);
		line = NULL;
	}
	printf("%s\n", line);
	free(line);
	line = NULL;
	close(fd);
	write(1, s, ft_strlen(s));
	write(1, "\n", 1);
}

int		main()
{
	test1();
	test2();
	test3();
	test4();
	//test5();
	// test6();
	// test("4_newlines");
	// test("41_char");
	// test("42_char");
	// test("43_char");
	
	write(1, "END\n", 4);
	return (0);
}