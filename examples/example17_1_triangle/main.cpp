#include <GL/gl.h>
#include <GL/glaux.h>

void drawTriangle(){
	glLineWidth(2.0);
	glBegin(GL_LINES);
		glVertex2f(1.0,1.0);
		glVertex2f(1.0,2.0);
	glEnd();
	glLineWidth(3.0);
	glBegin(GL_LINES);
		glVertex2f(1.0,2.0);
		glVertex2f(2.0,1.0);
	glEnd();
	glLineWidth(3.0);
	glBegin(GL_LINES);
		glVertex2f(2.0,1.0);
		glVertex2f(1.0,1.0);
	glEnd();
	}

int main(int argc, char** argv)
{
   auxInitDisplayMode (AUX_SINGLE | AUX_RGBA);
   auxInitPosition (0, 0, 500, 500);
   auxInitWindow (argv[0]);

   glClearColor (0.0, 0.0, 0.0, 0.0);
   glClear(GL_COLOR_BUFFER_BIT);
   //glColor3f(1.0, 1.0, 1.0);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
   glBegin(GL_LINES);
      glVertex2f(-10.0, 0.0);
      glVertex2f(10.0, 0.0);
      glVertex2f(0.0, -10.0);
      glVertex2f(0.0, 10.0);
   glEnd();
   drawTriangle();
   
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
   glRotatef(90.0,0.0,0.0,1.0);
   drawTriangle();
   
   glLoadIdentity();
   glScalef(3.0,2.0,1.0);
   glRotatef(90.0,0.0,0.0,1.0);
   glPushMatrix();
   drawTriangle();
   
   glLoadIdentity();
   glScalef(-1.0,1.0,1.0);
   glScalef(3.0,2.0,1.0);
   glRotatef(90.0,0.0,0.0,1.0);
   glPushMatrix();
   drawTriangle();
   
   glLoadIdentity();
   glTranslatef(3.0,-2.0,0.0);
   glPopMatrix();
   drawTriangle();
	
   
   glFlush();

   Sleep(3000);
   return 0;
}

