//Se tienen los nombres de los N alumnos de una escuela, además de su
//promedio general. Realice un algoritmo para capturar esta información, la
//cual se debe almacenar en arreglos, un vector para el nombre y otro para
//el promedio, después de capturar la información se debe ordenar con base
//en su promedio, de mayor a menor, los nombres deben corresponder con
//los promedios.
#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, j, a,p[a], pa ; 
	char n[30], na;
	scanf("%d", &a);
	for(i=0;i<a;i++){
		scanf("%s", &n[i]);
		scanf("%d", &p[i]);
	}
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			if(p[j]>p[i]){
				pa=p[i];
				na=n[i];
				p[i]=p[j];
				n[i]=n[j];
				p[j]=pa;
				n[j]=na;
			}
		}
	}
	for(i=0;i<a;i++){
		printf("Nombre y promedio %s, %d",n[i], p[i] );
	}
	
	return(0);
}
