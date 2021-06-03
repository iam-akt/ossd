# include <stdio.h>
# include <string.h>
int main( )
{
	FILE *filePointer ;
	char dataToBeWritten[50]
		= "Hello";
	filePointer = fopen("test.c", "w");
	if ( filePointer == NULL )
	{
		printf( "Test.c file failed to open." ) ;
	}
	else
	{
		
		printf("The file is now opened.\n") ;
		if ( strlen ( dataToBeWritten ) > 0 )
		{
			fputs(dataToBeWritten, filePointer) ;
			fputs("\n", filePointer) ;
		}
		fclose(filePointer) ;
		printf("Data successfully written in file GfgTest.c\n");
		printf("The file is now closed.") ;
	}
	return 0;		
}
