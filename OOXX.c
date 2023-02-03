#include <stdio.h>
void Ofunc(char c[3][3],int n,int m);
void Xfunc(char c[3][3],int n,int m);
int cfunc(char c[3][3]);
int main(void)
{
	int n,m,i,j=0;//nª½m¾î 
	char c[3][3]={(' ',' ',' '),(' ',' ',' '),(' ',' ',' ')};
	
	printf(" | | \n");
	printf("-+-+-\n");
	printf(" | | \n");
	printf("-+-+-\n");
	printf(" | | \n");
	
	for(i=0;i<9;i++)
	{	
		
		if(i%2==0)
		{
			Ofunc(c,n,m);	
			if (cfunc(c))
				break;
		}
		else
		{
			Xfunc(c,n,m);	
			if (cfunc(c))
				break;
		} 
		
		
		if(i==8)
			printf("Tie!");
	}
	
	
	return 0;
}
void Ofunc(char c[3][3],int n,int m)
{
	printf("Place to put O:");
	scanf("%d%d",&n,&m);
	
	if(c[n][m]=='O' || c[n][m]=='X')
	{
		printf("Place already taken, try another place.\n");
		Ofunc(c,n,m);
	}
	else if ((n>=0&&n<=2)&&(m>=0&&m<=2))
	{	
		c[n][m]='O';
		
		printf("%c|%c|%c\n",c[0][0],c[0][1],c[0][2]);
		printf("-+-+-\n");
		printf("%c|%c|%c\n",c[1][0],c[1][1],c[1][2]);
		printf("-+-+-\n");
		printf("%c|%c|%c\n",c[2][0],c[2][1],c[2][2]);
	} 
	else
	{ 
		printf("Error!Please enter again.\n");
		Ofunc(c,n,m);
	} 
	
	return ;
}
void Xfunc(char c[3][3],int n,int m)
{
	printf("Place to put X:");
	scanf("%d%d",&n,&m);
	
	if(c[n][m]=='O' || c[n][m]=='X')
	{
		printf("Place already taken, try another place.\n");
		Xfunc(c,n,m);
	}
	else if ((n>=0&&n<=2)&&(m>=0&&m<=2))
	{ 
		c[n][m]='X';
		
	printf("%c|%c|%c\n",c[0][0],c[0][1],c[0][2]);
	printf("-+-+-\n");
	printf("%c|%c|%c\n",c[1][0],c[1][1],c[1][2]);
	printf("-+-+-\n");
	printf("%c|%c|%c\n",c[2][0],c[2][1],c[2][2]);
	} 
	else
	{ 
		printf("Error!Please enter again.\n");
		Xfunc(c,n,m);
	} 
		
	return ;
}
int cfunc(char c[3][3])
{
	if(c[0][0]=='O' && c[0][1]=='O' && c[0][2]=='O')
	{
		printf("Player O win!");
		return 1;
	}
	else if(c[1][0]=='O' && c[1][1]=='O' && c[1][2]=='O')
	{
		printf("Player O win!");
		return 1;
	}
	else if(c[2][0]=='O' && c[2][1]=='O' && c[2][2]=='O')
	{
		printf("Player O win!");
		return 1;
	}
	else if(c[0][0]=='O' && c[1][0]=='O' && c[2][0]=='O')
	{
		printf("Player O win!");
		return 1;
	}
	else if(c[0][1]=='O' && c[1][1]=='O' && c[2][1]=='O')
	{
		printf("Player O win!");
		return 1;
	}
	else if(c[0][2]=='O' && c[1][2]=='O' && c[2][2]=='O')
	{
		printf("Player O win!");
		return 1;
	}
	else if(c[0][0]=='O' && c[1][1]=='O' && c[2][2]=='O')
	{
		printf("Player O win!");
		return 1;
	}
	else if(c[0][2]=='O' && c[1][1]=='O' && c[2][0]=='O')
	{
		printf("Player O win!");
		return 1;
	}
	else if(c[0][0]=='X' && c[0][1]=='X' && c[0][2]=='X')
	{
		printf("Player X win!");
		return 1;
	}
	else if(c[1][0]=='X' && c[1][1]=='X' && c[1][2]=='X')
	{
		printf("Player X win!");
		return 1;
	}
	else if(c[2][0]=='X' && c[2][1]=='X' && c[2][2]=='X')
	{
		printf("Player X win!");
		return 1;
	}
	else if(c[0][0]=='X' && c[1][0]=='X' && c[2][0]=='X')
	{
		printf("Player X win!");
		return 1;
	}
	else if(c[0][1]=='X' && c[1][1]=='X' && c[2][1]=='X')
	{
		printf("Player X win!");
		return 1;
	}
	else if(c[0][2]=='X' && c[1][2]=='X' && c[2][2]=='X')
	{
		printf("Player X win!");
		return 1;
	}
	else if(c[0][0]=='X' && c[1][1]=='X' && c[2][2]=='X')
	{
		printf("Player X win!");
		return 1;
	}
	else if(c[0][2]=='X' && c[1][1]=='X' && c[2][0]=='X')
	{
		printf("Player X win!");
		return 1;
	}
	else
		return 0;
}

