#include <stdio.h>
#include <time.h>

int main ( int argc, char *argv[] )
{
	time_t rawtime;
	struct tm * timeinfo;

	time ( &rawtime );
	timeinfo = localtime ( &rawtime );

	printf( "%s started on %s \n", argv[0],asctime(timeinfo) );
	printf("Input file: %s\n",argv[1]);

    	if ( argc != 2 ) /* argc should be 2 for correct execution */
	{
	/* We print argv[0] assuming it is the program name */
	//printf( "%s started on %s \n", argv[0],asctime(timeinfo) );
	 }
	    else 
	    {
         // We assume argv[1] is a filename to open

	    FILE *file = fopen( argv[1], "r");
	 /* fopen returns 0, the NULL pointer, on failure */
	    if ( file == 0 )
	{
		printf( "Could not open file\n" );
	}
	 else 
	{
	 int x;
	 while  ( ( x = fgetc( file ) ) != EOF )
	 {
		 printf( "%c", x );
	 }
	 fclose( file );
	}
    }
}
