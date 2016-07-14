#include <stdio.h>
int main()
{
	
	char y[100];
	
	int xcx=0;
	for( xcx=0;xcx<=99;xcx++)
{
y[xcx]='x';
}


	char asd [3] = {'o',' ' , 'r'};
	int z = 0;
	while(z<3)
	{
		printf("%c , %d",asd[z], z);
		
	z++;
	
		
	
	}
	z=0;
	
	
	while(z<3)
	{
	scanf("%c",&asd[z]);
		
	printf("\t %c - %d ",asd[z], z);
	z++;
	}
	
	
	//scanf("%c",&y);
	
	
	
	
	
	
	
	
	
	//if(y[z]== NULL )
		//{
			
		//y[z]=" ";

		
	////}
	
	//if(y[z]== '?' )
		//{
			
		//printf(" \n%d\t ",z);

		//break;
	//}
	
	
	
	
	
	
	//printf("omar is here ..........\n \n \n \n ");
 z=0;
 
	while(z<20)
	{
			scanf("%c",&y[z]);
			
			
	printf("%c",y[z]);

//printf("omar is here ..........\n ");
 		
	z++;
		
	//if(y[z]== 'x' )
		//{
			//z++;
	
		//printf(" \n%d\t ",z);

		//break;
	//}
	
	
	}
	char x[20];
FILE*c;
c=fopen("txt.txt","w+");
fprintf(c,"how r you ?");
fprintf(c,"\n-\n");



fprintf(c,"what r you ?");

fprintf(c,"\n-\n");

fprintf(c,"when r you ?");

fprintf(c,"\n-\n");

fprintf(c,"why r you ?");
fprintf(c,"*");

fclose(c);

FILE*as;
as=fopen("txt.txt","r+");


int i =0;

for (;;)
{
fscanf(as,"%c",&x[i]);
printf("%c",x[i]);
if (x[i]=='?')
{
	if(i==z)
	printf("okay ");
	else 
	{
	printf("wrong ");
		
	}
	
}
i++;
}
//}
//while (i<20)
//{
	
	//printf("%s",x);
	//i++;
//}
}
