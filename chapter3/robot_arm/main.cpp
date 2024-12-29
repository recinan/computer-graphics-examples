#include <stdlib.h>
#include <GL/glut.h>
static GLfloat shoulder = 0.0, elbow = 0.0,
wrist1 = 0.0, finger1 = 0.0,
b_wrist = 0.0, b_finger = 0.0;
void init(void) {
glClearColor(0.0, 0.0, 0.0, 0.0);
glShadeModel(GL_FLAT);
return;
} // end of void init(void)
void reshape(int w, int h) {
glViewport(0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(65.0, (GLfloat) w / (GLfloat) h, 1.0, 20.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glTranslatef(-2.0, 0.0, -5.0);
return;
} // end of reshape(int, int)
void display(void) {
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0, 1.0, 1.0);
glPushMatrix();
glTranslatef(-1.0, 0.0, 0.0);
glRotatef((GLfloat) shoulder, 0.0, 0.0, 1.0);
glTranslatef(1.0, 0.0, 0.0);
glPushMatrix();
glScalef(2.0, 0.4, 1.0);
glutWireCube(1.0);
glPopMatrix();
glTranslatef(1.0, 0.0, 0.0);
glRotatef((GLfloat) elbow, 0.0, 0.0, 1.0);
glTranslatef(1.0, 0.0, 0.0);
glPushMatrix();
glScalef(2.0, 0.4, 1.0);
glutWireCube(1.0);
glPopMatrix();
glPushMatrix();
glTranslatef(1.0, 0.125, 0.25);
glRotatef((GLfloat)wrist1, 0.0, 0.0, 1.0);
glTranslatef(0.25, 0.0, 0.0);
glPushMatrix();
glScalef(0.5, 0.1 , 0.25);
glutWireCube(1.0);
glPopMatrix();
glTranslatef(0.25, 0.0, 0.0);
glRotatef((GLfloat) finger1, 0.0, 0.0, 1.0);
glTranslatef(0.25, 0.0, 0.0);
glPushMatrix();
glScalef(0.5, 0.1 , 0.25);
glutWireCube(1.0);
glPopMatrix();
glPopMatrix();
glPushMatrix();
glTranslatef(1.0, 0.125, -0.25);
glRotatef((GLfloat)wrist1, 0.0, 0.0, 1.0);
glTranslatef(0.25, 0.0, 0.0);
glPushMatrix();
glScalef(0.5, 0.1, 0.25);
glutWireCube(1.0);
glPopMatrix();
glTranslatef(0.25, 0.0, 0.0);
glRotatef((GLfloat) finger1, 0.0, 0.0, 1.0);
glTranslatef(0.25, 0.0, 0.0);
glPushMatrix();
glScalef(0.5, 0.1, 0.25);
glutWireCube(1.0);
glPopMatrix();
glPopMatrix();
glPushMatrix();
glTranslatef(1.0, -0.125, 0.0);
glRotatef((GLfloat)b_wrist, 0.0, 0.0, 1.0);
glTranslatef(0.25, 0.0, 0.0);
glPushMatrix();
glScalef(0.5, 0.1, 0.25);
glutWireCube(1.0);
glPopMatrix();
glTranslatef(0.25, 0.0, 0.0);
glRotatef((GLfloat) b_finger, 0.0, 0.0, 1.0);
glTranslatef(0.25, 0.0, 0.0);
glPushMatrix();
glScalef(0.5, 0.1, 0.25);
glutWireCube(1.0);
glPopMatrix();
glPopMatrix();
glPopMatrix();
glutSwapBuffers();
return;
} // end of void display(void)
void keyboard(unsigned char key, int x, int y) {
switch (key) {
case 's':
shoulder += 5;
if (shoulder > 360.0) shoulder -= 360.0;
glutPostRedisplay();
break;
case 'S':
shoulder -= 5;
if (shoulder < 360.0) shoulder += 360.0;
glutPostRedisplay();
break;
case 'e':
elbow += 5;
if (elbow > 360.0) elbow -= 360.0;
glutPostRedisplay();
break;
case 'E':
elbow -= 5;
if (elbow < 360.0) elbow += 360.0;
glutPostRedisplay();
break;
case 'd':
wrist1 += 5;
if (wrist1 > 360.0) wrist1 -= 360.0;
glutPostRedisplay();
break;
case 'D':
wrist1 -= 5;
if (wrist1 < 360.0) wrist1 += 360.0;
glutPostRedisplay();
break;
case 'f':
finger1 += 5;
if (finger1 > 360.0) finger1 -= 360.0;
glutPostRedisplay();
break;
case 'F':
finger1 -= 5;
if (finger1 < 360.0) finger1 += 360.0;
glutPostRedisplay();
break;
case 'v':
b_finger += 5;
if (b_finger > 360.0) b_finger -= 360.0;
glutPostRedisplay();
break;
case 'V':
b_finger -= 5;
if (b_finger < 360.0) b_finger += 360.0;
glutPostRedisplay();
break;
case 'c':
b_wrist += 5;
if (b_wrist > 360.0) b_wrist -= 360.0;
glutPostRedisplay();
break;
case 'C':
b_wrist -= 5;
if (b_wrist < 360.0) b_wrist += 360.0;
glutPostRedisplay();
break;
case 27:
exit(0);
break;
default:
break;
} // end of switch (key)
} // end of void keyboard(unsigned char, int , int)
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(640, 480);
glutInitWindowPosition(100, 100);
glutCreateWindow(argv[0]);
init();
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutKeyboardFunc(keyboard);
glutMainLoop();
return 0;
} // end of int main(int, int)
