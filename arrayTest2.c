#include <stdio.h>
int main(){
	int b[10];
	int i,size,j;
	printf("----------------------------------EXECUTION START------------------------\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
		scanf("%d",&b[i]);
	for(i=0; i<size; i++)
		b[i] = (3 * b[i]) + 1;
	if(b[1] == 13)
		j=1;
	else
		j=-1;
	printf("j = %d\n",j);
	return 0;
}
	