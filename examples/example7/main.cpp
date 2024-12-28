#include <GL/gl.h>
#include <GL/glaux.h>

int main(int argc, char** argv)
{
   auxInitDisplayMode (AUX_SINGLE | AUX_RGBA);
   auxInitPosition (0, 0, 500, 500);
   auxInitWindow (argv[0]);

   glClearColor (0.0, 0.0, 0.0, 0.0);
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(1.0, 1.0, 1.0);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(-15.0, 15.0, -15.0, 15.0, -15.0, 15.0);
   glBegin(GL_LINES);
      glVertex2f(-15.0, 0.0);
      glVertex2f(15.0, 0.0);
      glVertex2f(0.0, -15.0);
      glVertex2f(0.0, 15.0);
   glEnd();
   
   glEnable(GL_LINE_STIPPLE);
   glLineStipple(1,0x3E37);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_LINES);
    	glVertex2f(1.0,1.0);
    	glVertex2f(10.0,1.0);
   	glEnd();
   	
   	glPointSize(5);
   	glColor3f(0.0,1.0,0.0);
   	glBegin(GL_POINTS);
   		glVertex2f(1.5,1.5);
   	glEnd();
   	
   	glPointSize(5);
   	glColor3f(0.0,0.0,1.0);
   	glTranslatef(2.0,-1.0,0.0);
   	glBegin(GL_POINTS);
   		glVertex2f(1.5,1.5);
   	glEnd();
   
   glFlush();

   Sleep(3000);
   return 0;
}

