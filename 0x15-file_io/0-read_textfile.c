#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters it could read and print,
 *         0 if the file cannot be opened or read, or filename is NULL,
 *         or write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0, bytes_written = 0;
	int fd;
	char *buf;

	if (filename == NULL)
	return (0);

	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1) {
	free(buf);
	return (0);
	}

	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1 || bytes_read == 0) {
	close(fd);
	free(buf);
	return (0);
	}

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read) {
	close(fd);
	free(buf);
	return (0);
	}

	close(fd);
	free(buf);

	return (bytes_written);
}
