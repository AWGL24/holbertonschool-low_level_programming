#include "main.h"
/**
 * read_textfile - function that reads a text file an prints it to the
 * POSIX stdout
 * @filename: name of the file we want to open and read
 * @letters: number of letters it need to reand and print
 * Return: the number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w, r, o;
	char *holder;

	if (filename == NULL)
		return (0);

	holder = malloc(sizeof(char) * letters);
	if (holder == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, holder, letters);
	w = write(STDOUT_FILENO, holder, r);

	if (o == -1 || r == -1 || w == -1)
		return (0);

	free(holder);
	close(o);
	return (w);
}
