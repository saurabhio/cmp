/**
 * This is a function for comparing two files.
 * DEVELOPER   : SAURABH
 * LAST UPDATE : 24-JAN-2016
 */
 
void cmp(void)
{
	FILE *fp1, *fp2;
	int ca, cb;
	char fname1[100], fname2[100] ;
	
	printf("(eg. C:/.../file)\n\n");
	printf("Path of first file  :  ");
	gets(fname1);
	
	fp1 = fopen (fname1, "r");

	if (fp1 == NULL)
	{
		printf("\n\tUnable to open \"%s\" file.\n", fname1);
	}
	else
	{
		printf("Path of second file :  ");
		gets(fname2);
		fp2 = fopen (fname2, "r") ;

  		if (fp2 == NULL)
  		{
  			printf("\n\tUnable to open \"%s\" file.\n", fname2);
  		}
  		else
  		{
  			do
  			{
  				ca = getc (fp1) ;
  				cb = getc (fp2);
  				
  			}while (ca != EOF && cb != EOF && ca == cb);
  
  			if (ca == cb)
  				printf("\n\t\tIDENTICAL Files.\n");
  			else if (ca != cb)
  				printf("\n\t\tDIFFERENT Files.\n");
  
  			fclose (fp2);
  		}
    }
    fclose (fp1);
}
