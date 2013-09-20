#include <stdio.h>

int main(){
	int t[20],i=0,j=0,max,ctemp;
	while((scanf("%d",&t[i]))>0)
		i++;
	for (j=0; j<=i; j++){ 
		ctemp+=t[j]; 
		if (ctemp>max) 
			max=ctemp; 
        else if (ctemp<0) 
			ctemp=0; 
       }
	printf("%d",max);
	return 0;
}