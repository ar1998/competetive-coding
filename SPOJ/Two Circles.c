#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float x1,x2,y1,y2,r1,r2,d;
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%f %f %f %f %f %f",&x1,&y1,&r1,&x2,&y2,&r2);
		d = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
		if((d+r1 == r2) || (d+r2 == r1))
			printf("E\n");
		else if(d == 0 && r1<r2 )
			printf("I\n");
		else if(d == 0 && r1 == r2)
			printf("E\n");
		else if((d+r1 < r2) || (d+r2 < r1))
			printf("I\n");
		else
			printf("O\n");
	}
	return 0;
}