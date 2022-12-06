#import"draw.h"
#define loop 1
int cont = loop;

void draw(int *lista , int size){
	
	if(cont == 0){
		
	glClearColor(0,0,0, 1.0f); 
	glEnable(GL_DEPTH_TEST);
	cont = loop;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	
	
	for (int i=0; i<size;i++){
		
		glBegin(GL_QUADS);
			glColor3f(1,1,1); 
			glVertex2f((2*((float)i+1)/ (float)size)-1,-1);
			glVertex2f((2*(float)i    / (float)size)-1,-1);
			glVertex2f((2*(float)i    / (float)size)-1, 2*(((float)lista[i]+1)/(float)size)-1);
			glVertex2f((2*((float)i+1)/ (float)size)-1, 2*(((float)lista[i]+1)/(float)size)-1);
		glEnd();
	}
  
//  	glFlush();
  	glFinish();
  	glutSwapBuffers(); 
  }else{
  	cont--;
  }
}



