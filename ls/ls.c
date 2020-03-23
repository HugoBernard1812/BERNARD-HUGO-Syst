#include <stdio.h>
#include <dirent.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    DIR* ptdir;
    char* ptr;
    const char* str;
    struct stat *buf;
    struct dirent* entree;
    ino_t num;
    ptdir=opendir(".");
    if (!ptdir)
        {
        fprintf(stderr, "Problème à opendir \n");

        exit(1);
        }

    while((entree=readdir(ptdir))!= NULL)
    {
    printf("%s %d \n", entree->d_name, entree->d_ino);
    if (strcmp(entree->d_name, ".."))
            {
                    ptr = malloc(sizeof(*ptr) * (strlen(str) + strlen(entree->d_name) + 2));
                    ptr = strcpy(ptr, str);
                    ptr = strcat(ptr, "/");
                    ptr = strcat(ptr, entree->d_name);
                    stat(ptr, &buf);
                    num = buf.st_ino;
                    printf("%hu ", num);
                    printf("%s,  %hhu\n",entree->d_name,  entree->d_type);
                    if (entree->d_type == 4)
                    {
                        print_file(ptr);
                    }
                    free(ptr);
            }
    }

    closedir(ptdir);

    return(0);


}

/*ino_t		inode(char *pathname)
{
	DIR		*dp;
	struct dirent	*dirp;
	struct stat	buf;
	ino_t		inum;

	stat(pathname, &buf);
	inum = buf.st_ino;
	if ((dp = opendir(pathname)) == NULL)
		return(inum);
	while ((dirp = readdir(dp)) != NULL)
	{
		if (strcmp(dirp->d_name, ".&quot<img src="images/smilies/icon_wink.gif" border="0" alt="" title=";)" class="inlineimg" /> == 0)
		{
			inum = dirp->d_fileno;
			break;
		}
	}
	closedir(dp);
	return (inum);
}*/
