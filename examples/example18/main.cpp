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
   
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
   glTranslatef(4.0,3.0,0.0);
   
   for(int i=0;i<5;i++){
		glPushMatrix();
		glRotatef(45*i,0.0,0.0,1.0);
		glTranslatef(1.0,1.0,0.0);
		glPointSize(i+1);
		glBegin(GL_POINTS);
			glVertex2f(0.0,0.0);
		glEnd();
		glPopMatrix();
	}
   
   glFlush();

   Sleep(3000);
   return 0;
}

