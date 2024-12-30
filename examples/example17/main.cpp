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
   glBegin(GL_TRIANGLES);
   		glVertex2f(1.0,1.0);
   		glVertex2f(1.0,3.0);
   		glVertex2f(3.0,1.0);
   glEnd();
   
   glMatrixMode(GL_MODELVIEW);
   
   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
   glTranslatef(3.0,-2.0,0.0);
   glScalef(-1.0,1.0,1.0);
   glScalef(3.0,2.0,1.0);
   glRotatef(90.0,0.0,0.0,1.0);
   glBegin(GL_TRIANGLES);
   		glVertex2f(1.0,1.0);
   		glVertex2f(1.0,3.0);
   		glVertex2f(3.0,1.0);
   glEnd();
   
   //Rotate
   glLoadIdentity();
   glRotatef(90.0,0.0,0.0,1.0);
   glColor3f(1.0,0.0,0.0);
   glLineWidth(2);
   glBegin(GL_LINES);
   		glVertex2f(1.0,1.0);
   		glVertex2f(1.0,3.0);
   glEnd();
   
   glLoadIdentity();
   glRotatef(90.0,0.0,0.0,1.0);
   glLineWidth(3);
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(1.0,3.0);
   		glVertex2f(3.0,1.0);
   glEnd();
   
   glLoadIdentity();
   glRotatef(90.0,0.0,0.0,1.0);
   glLineWidth(4);
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(3.0,1.0);
   		glVertex2f(1.0,1.0);
   glEnd();
   
   //Scale
   glLoadIdentity();
   glScalef(3.0,2.0,1.0);
   glRotatef(90.0,0.0,0.0,1.0);
   glColor3f(1.0,0.0,0.0);
   glLineWidth(2);
   glBegin(GL_LINES);
   		glVertex2f(1.0,1.0);
   		glVertex2f(1.0,3.0);
   glEnd();
   
   glLoadIdentity();
   glScalef(3.0,2.0,1.0);
   glRotatef(90.0,0.0,0.0,1.0);
   glLineWidth(3);
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(1.0,3.0);
   		glVertex2f(3.0,1.0);
   glEnd();
   
   glLoadIdentity();
   glScalef(3.0,2.0,1.0);
   glRotatef(90.0,0.0,0.0,1.0);
   glLineWidth(4);
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(3.0,1.0);
   		glVertex2f(1.0,1.0);
   glEnd();
   
   //symmetry
   glLoadIdentity();
   glScalef(-1.0,1.0,1.0);
   glScalef(3.0,2.0,1.0);
   glRotatef(90.0,0.0,0.0,1.0);
   glColor3f(1.0,0.0,0.0);
   glLineWidth(2);
   glBegin(GL_LINES);
   		glVertex2f(1.0,1.0);
   		glVertex2f(1.0,3.0);
   glEnd();
   
   glLoadIdentity();
   glScalef(-1.0,1.0,1.0);
   glScalef(3.0,2.0,1.0);
   glRotatef(90.0,0.0,0.0,1.0);
   glLineWidth(3);
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(1.0,3.0);
   		glVertex2f(3.0,1.0);
   glEnd();
   
   glLoadIdentity();
   glScalef(-1.0,1.0,1.0);
   glScalef(3.0,2.0,1.0);
   glRotatef(90.0,0.0,0.0,1.0);
   glLineWidth(4);
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(3.0,1.0);
   		glVertex2f(1.0,1.0);
   glEnd();
   
   //Move
   glLoadIdentity();
   glTranslatef(3.0,-2.0,0.0);
   glScalef(-1.0,1.0,1.0);
   glScalef(3.0,2.0,1.0);
   glRotatef(90.0,0.0,0.0,1.0);
   glColor3f(1.0,0.0,0.0);
   glLineWidth(2);
   glBegin(GL_LINES);
   		glVertex2f(1.0,1.0);
   		glVertex2f(1.0,3.0);
   glEnd();
   
   glLoadIdentity();
   glTranslatef(3.0,-2.0,0.0);
   glScalef(-1.0,1.0,1.0);
   glScalef(3.0,2.0,1.0);
   glRotatef(90.0,0.0,0.0,1.0);
   glLineWidth(3);
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(1.0,3.0);
   		glVertex2f(3.0,1.0);
   glEnd();
   
   glLoadIdentity();
   glTranslatef(3.0,-2.0,0.0);
   glScalef(-1.0,1.0,1.0);
   glScalef(3.0,2.0,1.0);
   glRotatef(90.0,0.0,0.0,1.0);
   glLineWidth(4);
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_LINES);
   		glVertex2f(3.0,1.0);
   		glVertex2f(1.0,1.0);
   glEnd();
   
   
   glFlush();

   Sleep(3000);
   return 0;
}

