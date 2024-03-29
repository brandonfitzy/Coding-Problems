/*DCP 236*/

/*Given a list of n points in x,y format that from a polygon p1 to p2 to p3 ...
determine if new point pn is outside of inside the polygon*/

/*1=true and 0=false*/

#include <stdio.h>

struct polygon{
	int points[3][2];
};

struct point{
	int coord[2];
};

struct polygon shape;
struct point p;

int dointersect(int py, int sy1, int sy2);

int main() {
	p.coord[1]=0;
	p.coord[2]=1;
	shape.points[1][1]=0;
	shape.points[1][2]=0;
	shape.points[2][1]=3;
	shape.points[2][2]=0;
	shape.points[3][1]=3;
	shape.points[3][2]=4;
	
	int i;
	int intersects=0;
	for (i=1;i<=3;i++){
		if (i==3){
			intersects+=dointersect(p.coord[2], shape.points[i][2], shape.points[1][2]);
			
		} else {
			intersects+=dointersect(p.coord[2], shape.points[i][2], shape.points[i+1][2]);
		}
	}
	if (intersects%2==0){
		printf("The point p lies outside of the polygon");
	} else {
		printf("The point p lies inside of the polygon");
	}
	
	return 0;
}

int dointersect(int py, int sy1, int sy2){
	int b;
	if (sy1<sy2){
		int y1=sy1;
		int y2=sy2;
	} else {
		int y1=sy2;
		int y2=sy1;
	}
	if (py>y1 && py<y2){
		b=1;
	} else {
		b=0;
	}
	return b;
}
