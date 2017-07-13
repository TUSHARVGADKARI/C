# include <stdio.h>
int foo = 5;
int main(void){
	int foo = 5;
	printf("i=%d\n", foo);
	{
	int foo = 6;
	printf("i=%d\n", foo);
	}
	printf("i=%d\n", foo);
	printf("Hello World!\n");
}
/*int main(int argc, char *argv[])
{
int foo = 6;
	
	printf("Hello World!\n");
	printf("i=%d\n", foo);
	return 0;
}
printf("i=%d\n", foo);
*/
