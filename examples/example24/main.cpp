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
   glLineStipple(1,0x150F);
   
   glLineWidth(1.0);
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(1.0,1.0);
   		glVertex2f(1.0,3.0);
   glEnd();
   
   glLineWidth(2.0);
   glColor3f(0.0,1.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(1.0,3.0);
   		glVertex2f(3.0,3.0);
   glEnd();
   
   glLineWidth(3.0);
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(3.0,3.0);
   		glVertex2f(3.0,1.0);
   glEnd();
   
   glLineWidth(4.0);
   glColor3f(0.0,1.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(3.0,1.0);
   		glVertex2f(1.0,1.0);
   glEnd();
   glFlush();

   Sleep(3000);
   return 0;
}

