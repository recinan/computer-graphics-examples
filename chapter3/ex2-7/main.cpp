#include <GL/gl.h>
#include <GL/glaux.h>
#include <math.h>


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
   glOrtho(-2.0, 2.0, -2.0, 2.0, -1.0, 1.0);
double X,Y,Z;

X=1.0;
Y=2.0;
Z=3.0;

GLint i;

static GLfloat vdata[12][3] = {
{-Y, 0.0, Y}, {X, 0.0, Z}, {X, 0.0, Y}, {X, 0.0, -Z},
{0.0, Z, X}, {0.0, -Z, -X}, {X, 0.0, -Y}, {-Z, X, 0.0},
{Z, -X, 0.0}, {-X, -X, 0.0}, {Z, -X, 0.0}, {-Z, -X, 0.0}
};
static GLint tindices[10][4] = {
{0,4,1,9}, {5,2,9,1}, {4,2,6,7}, {0,5,7,1}, {4,8,9,6},
{8,10,1,2}, {8,3,10,5}, {5,3,8,6}, {5,2,3,7}, {2,7,3,8} };
for (i = 0; i < 20; i++) {
/* color information here */
//glColor3f((i+1)*0.15, 0.5, 0.5);
glBegin(GL_LINES);
glVertex2fv(&vdata[tindices[i][0]][0]);
glVertex2fv(&vdata[tindices[i][1]][0]);
glVertex2fv(&vdata[tindices[i+1][2]][1]);
glVertex2fv(&vdata[tindices[i+1][3]][1]);
glEnd();
}
glFlush();

   Sleep(3000);
   return 0;
}
