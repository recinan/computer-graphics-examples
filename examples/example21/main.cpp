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
   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
   //Triangle
   glBegin(GL_TRIANGLES);
		glVertex2f(1.0,1.0);
		glVertex2f(3.0,1.0);
		glVertex2f(3.0,3.0);
   glEnd();
   
   glMatrixMode(GL_MODELVIEW);
   
   glLoadIdentity();
   glRotatef(30.0,0.0,0.0,1.0);
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_TRIANGLES);
   		glVertex2f(1.0,1.0);
   		glVertex2f(3.0,1.0);
   		glVertex2f(3.0,3.0);
   glEnd();
   
   glLoadIdentity();
   glScalef(2.0,3.0,1.0);
   glRotatef(30.0,0.0,0.0,1.0);
   glColor3f(0.0,1.0,0.0);
   glBegin(GL_TRIANGLES);
   		glVertex2f(1.0,1.0);
   		glVertex2f(3.0,1.0);
   		glVertex2f(3.0,3.0);
   glEnd();
   
   glLoadIdentity();
   glTranslatef(3.0,-1.0,0.0);
   glScalef(2.0,3.0,1.0);
   glRotatef(30.0,0.0,0.0,1.0);
   glColor3f(0.0,0.0,1.0);
   glPushMatrix();
   glBegin(GL_TRIANGLES);
   		glVertex2f(1.0,1.0);
   		glVertex2f(3.0,1.0);
   		glVertex2f(3.0,3.0);
   glEnd();
   
   // Stippled Lines
   glLoadIdentity();
   glEnable(GL_LINE_STIPPLE);
   glLineStipple(1,0x3E37);
   glLineWidth(3.0);
   glColor3f(1.0,1.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(1.0,-1.0);
   		glVertex2f(2.0,-1.0);
   glEnd();
   
   glLoadIdentity();
   glRotatef(45.0,0.0,0.0,0.0);
   glColor3f(1.0,0.0,1.0);
   glBegin(GL_LINES);
   		glVertex2f(1.0,-1.0);
   		glVertex2f(2.0,-1.0);
   glEnd();
   glDisable(GL_LINE_STIPPLE);
   
   glLoadIdentity();
   
   //Point
   glPointSize(5.0);
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_POINTS);
   		glVertex2f(-2.0,1.5);
   glEnd();
   
   glLoadIdentity();
   glTranslatef(2.0,-1.0,0.0);
   glColor3f(0.0,0.0,1.0);
   glBegin(GL_POINTS);
   		glVertex2f(-2.0,1.5);
   glEnd();
   
   //Rectangle
   glLoadIdentity();
   glLineWidth(1.0);
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(-1.0,1.0);
   		glVertex2f(-5.0,1.0);
   glEnd();
    glColor3f(0.0,1.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(-5.0,1.0);
   		glVertex2f(-5.0,5.0);
   glEnd();
    glColor3f(0.0,0.0,1.0);
   glBegin(GL_LINES);
   		glVertex2f(-5.0,5.0);
   		glVertex2f(-1.0,5.0);
   glEnd();
   glColor3f(1.0,1.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(-1.0,5.0);
   		glVertex2f(-1.0,1.0);
   glEnd();
   
   glLoadIdentity();
   glPopMatrix();
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(-1.0,1.0);
   		glVertex2f(-5.0,1.0);
   glEnd();
    glColor3f(0.0,1.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(-5.0,1.0);
   		glVertex2f(-5.0,5.0);
   glEnd();
    glColor3f(0.0,0.0,1.0);
   glBegin(GL_LINES);
   		glVertex2f(-5.0,5.0);
   		glVertex2f(-1.0,5.0);
   glEnd();
   glColor3f(1.0,1.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(-1.0,5.0);
   		glVertex2f(-1.0,1.0);
   glEnd();
   
   
   
   
   
   
   
   glFlush();

   Sleep(3000);
   return 0;
}

