#include <stdio.h>
#include <string.h>
#include <Windows.h>

using namespace std;

int input1 = 0;
int input2 = 0;
int result;

int main()
{
	char quit[1] = "";
BACK:
	printf( "Please specify a number: " );
	scanf( "%d", &input1 );

	printf( "Please specify a number: " );
	scanf( "%d", &input2 );

	printf( "Breakpoint because of dll inject.\n" );
	system( "PAUSE" );

	result = input1 + input2;

	printf("Result: %d\n", result);

	printf( "You want quit the program? Y/N\n" );

    scanf( "%s", quit );

    if( strcmp(quit, "N") == 0 )
        goto BACK;

	system( "PAUSE" );

    return 0;
}

/*
g++ -c main.cpp -o main.o
g++ -Wall -o program.exe main.o
*/