#include "main.h"

/*
 * append_text_to_file - A file's end is appended with text.
 * @filename: The name of the file is pointed to by this pointer.
 * @text_content: This string should be added to the end of the file.
 *
 * Return: The result will be -1 if the function fails or if the filename is NULL.
 *         The user does not have write permissions if the file does not exist.
 *         If not -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
