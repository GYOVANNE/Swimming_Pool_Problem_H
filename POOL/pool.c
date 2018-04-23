#include <stdio.h>
#include <stdlib.h>
#include "pool.h"

	static float FLOOR_DIMENSION(float x,float y,float z,float dim){
		float p1=0,p2=0,p3=0;
		int c1=0,c2=0,c3=0;
		/*test medium tile*/
		while(p1<=x){
		p1=p1+dim;
		if(p1<=x+0.01)c1++;
		}
		while(p2<=y){
		p2=p2+dim;
		if(p2<=y+0.01)c2++;
		}
		while(p3<=z){
		p3=p3+dim;
		if(p3<=z+0.01)c3++;
		}
		return (((c1*c3)*2)+((c2*c3)*2)+(c1*c2));
	}
	static float CALC(float g,float tam,float x,float y){
		float b1 = (g*x);
		float b2 = (tam-b1);
		return (b2/y);
	}
	void DIM_SIZE(float x,float y,float z,int d1,int d2,int d3,float SIZE)
	{
		float MED =	FLOOR_DIMENSION(x,y,z,0.15);
		float BIG =	FLOOR_DIMENSION(x,y,z,0.3);
		float LIT_TILE =	CALC(MED,SIZE,0.0225,0.0025);//pequeno x3
		float MED_TILE =	CALC(BIG,MED*0.0225,0.09,0.0225);//medio g3
		float BIG_TILE =	CALC(BIG,SIZE,0.09,0.0025);//grande b3
		if((BIG<=d3)&&(MED_TILE<=d2)&&(LIT_TILE<=d1)){
		printf("\n %.0f \t %.0f \t%.0f \t \n",LIT_TILE,MED_TILE,BIG);
		}else if((BIG<=d3)&&(BIG_TILE<=d1)){
		printf("\n %.0f \t 0 \t%.0f \t \n",BIG_TILE,BIG);
		}else printf("\nimpossible\n");
	}
