#include<stdio.h>

int main()
{
	int lirun;
	scanf("%d",&lirun);
	float t = 0;
	if(lirun > 1000000){
		t += (lirun-1000000)*0.01;
	}
	if(lirun > 600000){
		t += (lirun-600000)*0.015;
	}
	if(lirun > 400000){
		t += (lirun-400000)*0.03;
	}
	if(lirun > 200000){
		t += (lirun-200000)*0.05;
	}
	if(lirun > 100000){
		t += (lirun-100000)*0.075;
	}
	if(lirun > 0){
		t += (lirun-0)*0.1;
	}
	printf("%.0f",t);
	return 0;
}

