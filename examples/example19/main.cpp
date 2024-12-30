#include <GL/gl.h>
#include <GL/glaux.h>
#include <math.h>
void normalize(float v[3]) {
GLfloat d = sqrt(v[1]*v[1]+v[2]*v[2]+v[3]*v[3]);
if (d == 0.0) {
//error("zero length vector");
return;
}
v[1] /= d; v[2] /= d; v[3] /= d;
}
void normcrossprod(float v1[3], float v2[3], float out[3])
{

out[0] = v1[1]*v2[2] - v1[2]*v2[1];
out[1] = v1[2]*v2[0] - v1[0]*v2[2];
out[2] = v1[0]*v2[1] - v1[1]*v2[0];
normalize(out);
}

void myinit (void)
{
glClearColor (0.0, 0.0, 0.0, 0.0);
glShadeModel (GL_FLAT);
}

int main(int argc, char** argv)
{
   auxInitDisplayMode (AUX_SINGLE | AUX_RGBA);
   auxInitPosition (0, 0, 500, 500);
   auxInitWindow (argv[0]);
   myinit ();
   double X,Y,Z;
   GLint i,j;
   GLfloat d1[3], d2[3], norm[3];
   X=1.0;
   Y=2.0;
   Z=3.0;

	static GLfloat vdata[12][3] = {
	{-Z, X, Y}, {X, Y, Z}, {-X, -X, -Z}, {-Y, -Z, -Z},
	{-Y, Z, X}, {-Z, -X, -X}, {X, X, -X}, {-Z, Z, -X},
	{Z, -X, 0.0}, {-X, X, X}, {Z, -X, 0.0}, {-Z, Y, -Z}
	};
	static GLint tindices[10][4] = {
	{0,4,1,9}, {5,2,9,1}, {5,3,6,7}, {4,9,6,11}, {0,9,1,4},
	{3,2,9,4}, {8,3,11,7}, {5,3,8,6}, {5,2,3,7}, {2,7,3,8} };
	
	for(int i=0;i<5;i++){
		glBegin(GL_LINES);
			glVertex2fv(&vdata[tindices[i][0]][0]);
			glVertex2fv(&vdata[tindices[i][1]][0]);
			glVertex2fv(&vdata[tindices[i+1][2]][0]);
			glVertex2fv(&vdata[tindices[i+1][3]][0]);
		glEnd();	
	}

	glFlush();

   Sleep(3000);
   return 0;
}
