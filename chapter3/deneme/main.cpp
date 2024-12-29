#include <GL/gl.h>
#include <GL/glaux.h>
#include <math.h>
#define drawOneLine(x1,y1,x2,y2) glBegin(GL_LINES); \
glVertex2f ((x1),(y1)); glVertex2f ((x2),(y2)); glEnd();
void myinit (void) {
/* background to be cleared to black */
glClearColor (0.0, 0.0, 0.0, 0.0);
glShadeModel (GL_FLAT);
}
void CALLBACK display(void)
{
int i;
glClear (GL_COLOR_BUFFER_BIT);
/* draw all lines in white */
glColor3f (1.0, 1.0, 1.0);
/* in 1st row, 3 lines, each with a different stipple */
glEnable (GL_LINE_STIPPLE);

/* in 2nd row, 3 wide lines, each with different stipple */
glLineWidth (5.0);

/* in 3rd row, 6 lines, with dash/dot/dash stipple, */
/* as part of a single connected line strip */
glLineStipple (1, 0x1C47);
glBegin (GL_LINE_STRIP);
for (i = 0; i < 7; i++)
glVertex2f (50.0 + ((GLfloat) i * 50.0), 75.0);
glEnd ();
/* in 4th row, 6 independent lines, */
/* with dash/dot/dash stipple */
for (i = 0; i < 6; i++) {
drawOneLine (50.0 + ((GLfloat) i * 50.0),
50.0, 50.0 + ((GLfloat)(i+1) * 50.0), 50.0);
}
/* in 5th row, 1 line, with dash/dot/dash stipple */
/* and repeat factor of 5 */
glLineStipple (5, 0x1C47);
drawOneLine (50.0, 25.0, 350.0, 25.0);
glFlush ();
}

int main(int argc, char** argv)
{
auxInitDisplayMode (AUX_SINGLE | AUX_RGBA);
auxInitPosition (0, 0, 400, 150);
auxInitWindow (argv[0]);
myinit ();
auxMainLoop(display);
glFlush ();
 Sleep(3000);
   return 0;
}
