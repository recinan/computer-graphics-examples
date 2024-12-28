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
      glVertex2f(-10.5, 0.0);
      glVertex2f(10.0, 0.0);
      glVertex2f(0.0, 10.0);
      glVertex2f(0.0, -10.0); // Koordinat Düzlemi
   glEnd();
   
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(1.0,1.0);
   		glVertex2f(1.0,5.0);
   		glVertex2f(5.0,1.0);
   		glVertex2f(5.0,5.0); 
   glEnd();
   
   glColor3f(0.0,1.0,0.0);
   glPointSize(5.0);
   glBegin(GL_POINTS);
   		glVertex2f(-1.0,1.0);
   		glVertex2f(-1.0,5.0);
   		glVertex2f(-5.0,1.0);
   		glVertex2f(-5.0,5.0); 
   glEnd();
   
   glColor3f(0.0,0.0,1.0);
   glEnable(GL_LINE_STIPPLE);
   glLineStipple(2,0x0F0F);
   glBegin(GL_LINES);
  		glVertex2f(-5.0,-1.0);
		glVertex2f(-1.0,-1.0);	
   glEnd();
   glDisable(GL_LINE_STIPPLE);
   
   glColor3f(1.0,1.0,0.0);
   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
   glBegin(GL_TRIANGLES);
   		glVertex2f(5.0,-1.0);
   		glVertex2f(2.0,-4.0);
   		glVertex2f(8.0,-4.0);
   glEnd();
   
   glFlush();

   Sleep(3000);
   return 0;
}

