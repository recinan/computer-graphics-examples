#include <GL/gl.h>
#include <GL/glaux.h>

int main(int argc, char** argv)
{
   auxInitDisplayMode (AUX_SINGLE | AUX_RGBA);
   auxInitPosition (0, 0, 500, 500);
   auxInitWindow (argv[0]);

   glClearColor(0.0,0.0,0.0,0.0);
   glClear(GL_COLOR_BUFFER_BIT);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(-10.0,10.0,-10.0,10.0,-1.0,1.0);
   glColor3f(1.0,1.0,1.0);
   glBegin(GL_LINES);
   		glVertex2f(-10.0,0.0);
   		glVertex2f(10.0,0.0);
   		glVertex2f(0.0,-10.0);
   		glVertex2f(0.0,10.0);
   glEnd();
   
   glLineWidth(5.0);
   glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
		glVertex2f(1.0,1.0);
		glVertex2f(1.0,5.0);
		glVertex2f(5.0,1.0);
		glVertex2f(5.0,5.0);
	glEnd();
	
	glPointSize(5.0);
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POINTS);
		glVertex2f(-1.0,1.0);
		glVertex2f(-1.0,5.0);
		glVertex2f(-5.0,1.0);
		glVertex2f(-5.0,5.0);
	glEnd();
	
	glLineWidth(3.0);
	glLineStipple(1,0x5F8F);
   	glEnable(GL_LINE_STIPPLE);
   	glColor3f(0.0,0.0,1.0);
   	glBegin(GL_LINES);
   		glVertex2f(-10.0,-2.0);
   		glVertex2f(-2.0,-2.0);
   	glEnd();
   	glDisable(GL_LINE_STIPPLE);
   	
   	
   	glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
   	glLineWidth(1.0);
   	glColor3f(1.0,1.0,0.0);
   	glBegin(GL_TRIANGLES);
   		glVertex2f(5.0,-2.0);
   		glVertex2f(1.0,-5.0);
   		glVertex2f(9.0,-5.0);
   	glEnd();
   
   glFlush();

   Sleep(3000);
   return 0;
}

