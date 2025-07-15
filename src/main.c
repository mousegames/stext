#include <stdio.h>

#include "../config/config.h"

int main(int argc, const char **argv)
{
	if (argc < 2)
	{
		fprintf(stderr, "%sYou do not have enough arguments!\n", ERR_COLOUR);
		return 1;
	}

	printf("%sSTav tEXT - STEXT\nSTEXT is a text editor much like the one you can use with cat, but with colours and a buffer limit of 1 kilobyte.\n\n", TITLE_COLOUR);

	printf("%s--COMMANDS--\n- CTRL-D saves and exits\n- CTRL-C exits WITHOUT saving\n\n", CMDS_COLOUR);
	printf("%s", BUFF_COLOUR);

	int ch;
	int i = 0;

	char buff[BUFF_LEN] = { 0 };

	while (((ch = getc(stdin)) != EXIT_CHAR) && (i < sizeof(buff)))
	{
		buff[i] = ch;
		i++;
	}

	FILE *file = fopen(argv[1], "w");
	fprintf(file, "%s", buff);

	fclose(file);
	return 0;
}
