#include "get_next_line.h"
#include <stdio.h>


int		main()
{ 
    int		fd;
    char	*line;
	char	*filename;
    char	c;
    FILE	*f;
    
	filename = "TEST.txt";
    fd = open(filename, O_RDONLY);
    printf ("%s", "\n\n\nFile was opened\n\n\n\n Your result is:\n\n");
    printf("%d", get_next_line(fd, &line));
    close (fd);
    fd++;
    printf("%s", "\n\n\n\n\nAnd that's how it should looks like: \n\n\n\n");
    f=fopen(filename,"rt");
    while((c=fgetc(f))!=EOF)
        printf("%c",c);
    fclose(f);
    return (0);
}
