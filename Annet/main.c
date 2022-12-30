#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int lek[3];
	int auk[4];
	int uka[4];
	int pit[10];
	int grey[10];
	int ret[10][10];
	int i,j,sum,z,block;
	srand(time(0));
	for (i=1;i<=10;i++)
	{
	for (j=1;j<=10;j++)
	ret[i][j]=rand()%90;
	}
	for (i=1;i<=10;i++)
	{
	grey[i]=rand()%70;
	}
	for (j=1;j<=5;j++)
	{
	printf("%d Sumfotibal Metr",grey[j]);
    }
	for (i=1;i<=10;i++)
	{
	pit[i]=grey[i];
	}
	return 0;
	
}