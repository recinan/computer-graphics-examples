#include <GL/gl.h>
#include <GL/glaux.h>
#include<math.h>

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
   
   double angle;
   int i;
   int circle_points = 100;
   glBegin(GL_LINE_LOOP);
   		for(i = 0; i<circle_points;i++){
			angle = 2*3.14*i/circle_points;
			glVertex2f(cos(angle)+4,sin(angle)+2);
		}
   glEnd();
   
   glFlush();

   Sleep(3000);
   return 0;
}

