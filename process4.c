// program to demonstrate ids of parent and child process

# include <unistd.h>
# include <sys/types.h>
# include <stdio.h>
int main()
{
	int pid ;
	pid = fork( ) ;
	if ( pid == 0 )
	{
		printf ( "\n Child : Hello I am the child process\n" ) ;
		printf ( "\n Child :  child  ID: %d\n", getpid( ) ) ;
		printf ( "\n child :  parent id : %d",getppid());
	}
	else
	{
		printf ( "\n Parent : Hello I am the parent process\n" ) ;
		printf ( "\n parent : PID: %d\n", getpid( ) ) ;
		printf ( "\n Parent : child ID: %d\n", pid ) ;
	}
}
