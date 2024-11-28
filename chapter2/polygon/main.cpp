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
   glOrtho(-6.0, 6.0, -6.0, 6.0, -1.0, 1.0);
   glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,0);
      glVertex2f(0.0, 0.0);
      glVertex2f(0.0, 3.0);
      glVertex2f(3.0, 3.0);
      glVertex2f(4.0, 1.5);
      glVertex2f(3.0, 0.0);
   glEnd();
   glFlush();

   Sleep(3000);
   return 0;
}

