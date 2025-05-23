#include <GL/gl.h>
#include <GL/glaux.h>

GLuint listName = 1;
void myinit (void)
{
glNewList (listName, GL_COMPILE);
glTranslatef (1.0, 1.0, 0.0);
glBegin (GL_TRIANGLES);
glVertex2f (0.0, 0.0);
glVertex2f (1.0, 0.0);
glVertex2f (0.0, 1.0);
glEnd ();
glColor3f(1.0, 0.0, 0.0);
glTranslatef (1.0, 1.0, 0.0);
glEndList ();
glShadeModel (GL_FLAT);
}
void drawLine (void)
{
glBegin (GL_LINES);
glVertex2f (0.0, 1.0);
glVertex2f (3.0, 1.0);
glEnd ();
}
void CALLBACK display(void)
{

     
GLuint i;
glClear (GL_COLOR_BUFFER_BIT);
glLoadIdentity();
glTranslatef (-5.0, -5.0, 0.0);
glColor3f(0.0, 1.0, 0.0);
for (i = 1; i < 5; i++){
glPushMatrix();
glTranslatef ( i, (2*i), 0.0);
glCallList (listName);
glPopMatrix();
}
glColor3f(0.0, 0.0, 1.0);
glLoadIdentity();
glCallList (listName);
drawLine ();

glLoadIdentity();
glColor3f(1.0, 1.0, 1.0);
glBegin (GL_LINES);
glVertex2f (-10.0, 0.0);
glVertex2f (10.0, 0.0);
glVertex2f (0.0, 10.0);
glVertex2f (0.0, -10.0);
glEnd ();
glFlush ();
}
void CALLBACK myReshape(GLsizei w, GLsizei h)
{
glViewport(0, 0, w, h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
/*if (w <= h)
gluOrtho2D (0.0, 2.0, -0.5 * (GLfloat) h/(GLfloat) w,
1.5 * (GLfloat) h/(GLfloat) w);
else
gluOrtho2D (0.0, 2.0 * (GLfloat) w/(GLfloat) h, -0.5,
1.5);*/
glOrtho(-5.0, 5.0, -5.0, 5.0, -1.0, 1.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
}
int main(int argc, char** argv)
{
auxInitDisplayMode (AUX_SINGLE | AUX_RGBA);
auxInitPosition (0, 0, 400, 400);
auxInitWindow (argv[0]);
myinit ();
auxReshapeFunc (myReshape);
auxMainLoop(display);
   Sleep(3000);
   return 0;
}



