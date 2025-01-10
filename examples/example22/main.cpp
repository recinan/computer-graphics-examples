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
   
   //Stýppled Line
   glEnable(GL_LINE_STIPPLE);
   glLineStipple(1,0x7E37);
   glLineWidth(4.0);
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(1.0,0.0);
   		glVertex2f(2.0,0.0);
   glEnd();
   
   glMatrixMode(GL_MODELVIEW);
   
   glLoadIdentity();
   glTranslatef(2.0,-3.0,0.0);
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(1.0,0.0);
   		glVertex2f(2.0,0.0);
   glEnd();
   
   glLoadIdentity();
   glScalef(3.0,2.0,1.0);
   glTranslatef(2.0,-3.0,0.0);
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(1.0,0.0);
   		glVertex2f(2.0,0.0);
   glEnd();
   
   glLoadIdentity();
   glScalef(-1.0,1.0,1.0);
   glScalef(3.0,2.0,1.0);
   glTranslatef(2.0,-3.0,0.0);
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(1.0,0.0);
   		glVertex2f(2.0,0.0);
   glEnd();
   
   glLoadIdentity();
   glRotatef(45.0,0.0,0.0,1.0);
   glScalef(-1.0,1.0,1.0);
   glScalef(3.0,2.0,1.0);
   glTranslatef(2.0,-3.0,0.0);
   glColor3f(0.0,1.0,0.0);
   glPushMatrix();
   glBegin(GL_LINES);
   		glVertex2f(1.0,0.0);
   		glVertex2f(2.0,0.0);
   glEnd();
   glDisable(GL_LINE_STIPPLE);
   
   //Point
   glLoadIdentity();
   glPointSize(3.0);
   glColor3f(1.0,1.0,0.0);
   glBegin(GL_POINTS);
   		glVertex2f(2.5,3.5);
   glEnd();
   
   glLoadIdentity();
   glRotatef(30.0,0.0,1.0,0.0);
   glColor3f(1.0,1.0,0.0);
   glBegin(GL_POINTS);
   		glVertex2f(2.5,3.5);
   glEnd();
   
   glLoadIdentity();
   glTranslatef(3.0,1.0,0.0);
   glRotatef(30.0,0.0,1.0,0.0);
   glColor3f(1.0,1.0,0.0);
   glBegin(GL_POINTS);
   		glVertex2f(2.5,3.5);
   glEnd();

   
   glFlush();

   Sleep(3000);
   return 0;
}

