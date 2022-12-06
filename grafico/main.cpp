#include <GL/glut.h> 

#import"sort.h"

int lista[10000];
int size = sizeof(lista) / sizeof(lista[0]);

void start(){

	//randomArr(lista,size);
	//reverseArr(lista,size);
	//notRepeatArr(lista,size);
	//quaseArr(lista,size);

	
	//bubbleSort(lista,size);
	//mergeSort(lista,0,size-1);
	//quickSort(lista,0,size-1);
	
	
	
	
	
	randomArr(lista,size);
	bubbleSort(lista,size);
	
	randomArr(lista,size);
	mergeSort(lista,0,size-1);
	
	randomArr(lista,size);
	quickSort(lista,0,size-1);
	
	reverseArr(lista,size);
	bubbleSort(lista,size);
	
	reverseArr(lista,size);
	mergeSort(lista,0,size-1);
	
	reverseArr(lista,size);
	quickSort(lista,0,size-1);
	
	notRepeatArr(lista,size);
	bubbleSort(lista,size);
	
	notRepeatArr(lista,size);
	mergeSort(lista,0,size-1);
	
	notRepeatArr(lista,size);
	quickSort(lista,0,size-1);
	
	quaseArr(lista,size);
	bubbleSort(lista,size);
	
	quaseArr(lista,size);
	mergeSort(lista,0,size-1);
	
	quaseArr(lista,size);
	quickSort(lista,0,size-1);

}
void display(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	//draw(lista,size);
  	//glutSwapBuffers();
}

void init(){
	glClearColor(0,0,0, 1.0f); 
	glEnable(GL_DEPTH_TEST);
}
int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("super cubo"); 	
	glutDisplayFunc(display);
	init();
	start(); 
	draw(lista,size);
	glutMainLoop(); 
	return 0;
}
