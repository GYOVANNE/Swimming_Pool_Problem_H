/* ========================================
 * Copyright 23/04/2018|| Gyovanne Cavalcanti
 * Bch. Information Technology
 * UFERSA - Pau dos Ferros/Rn
 * <gyovannecavalcanti@yahoo.com.br>
 * ========================================*/
#include <stdio.h>
#include <stdlib.h>
#include "pool.h"

int main(void)
{
	float x,y,z,SIZE;
	int d1=0,d2=0,d3=0;
	do{
	x=y=z=SIZE=d1=d2=d3=0;
	scanf("%f%f%f",&x,&y,&z);
		if(((x==0)&&(y==0)&&(z==0))||((x>50)||(y>50)||(z>2)))return 0;
		else{
		SIZE=((x*y)+(x*z)*2+(y*z)*2);
		scanf("%d%d%d",&d1,&d2,&d3);
		if((d1<=2000000)&&(d2<=2000000)&&(d3<=2000000)) DIM_SIZE(x,y,z,d1,d2,d3,SIZE);
		}
	}while((x!=0)&&(y!=0)&&(z!=0));
return 0;	
}
