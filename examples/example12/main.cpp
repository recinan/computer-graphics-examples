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
   glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
   glBegin(GL_LINES);
      glVertex2f(-10.0, 0.0);
      glVertex2f(10.0, 0.0);
      glVertex2f(0.0, -10.0);
      glVertex2f(0.0, 10.0);
   glEnd();
   
   glEnable(GL_LINE_STIPPLE);
   glLineWidth(2);
   glLineStipple(1,0x3737);
   glBegin(GL_LINES);
   		glVertex2f(1.0,1.0);
   		glVertex2f(2.0,1.0);
   glEnd();
   
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
   glRotatef(90.0,0.0,0.0,1.0);
   glBegin(GL_LINES);
   		glVertex2f(1.0,1.0);
   		glVertex2f(2.0,1.0);
   glEnd();
   
   glLoadIdentity();
   glPointSize(3);
   glBegin(GL_POINTS);
   		glVertex2f(1.5,1.5);
   	glEnd();
   	
	glLoadIdentity();
	glColor3f(1.0,0.0,0.0);
	glTranslatef(2.0,-1.0,0.0);
   glPointSize(3);
   glBegin(GL_POINTS);
   		glVertex2f(1.5,1.5);
   	glEnd();
   
   
   glFlush();

   Sleep(3000);
   return 0;
}

