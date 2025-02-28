#include<GL/glut.h>
void sinit()
{
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
	glColor3d(0.5, 1.0, 0.0);

}
void sdisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glVertex2d(80,220);
	glVertex2d(80,160);
	glEnd();

	glBegin(GL_LINES);
	glColor3d(1.0, 1.0, 0.0);
	glVertex2d(80,220);
	glVertex2d(120, 220);
	glEnd();

	glBegin(GL_LINES);
	glColor3d(1.0, 1.0, 0.0);
	glVertex2d(80, 160);
	glVertex2d(120, 160);
	glEnd();

	glBegin(GL_LINES);
	glColor3d(1.0, 1.0, 0.0);
	glVertex2d(120,220);
	glVertex2d(120,160);
	glEnd();

	glBegin(GL_LINES);
	glColor3d(1.0, 1.0, 0.0);
	glVertex2d(100,160);
	glVertex2d(100,30);
	glEnd();

	glBegin(GL_LINES);
	glColor3d(1.0, 1.0, 0.0);
	glVertex2d(100,140);
	glVertex2d(130,110);
	glEnd();

	glBegin(GL_LINES);
	glColor3d(1.0, 1.0, 0.0);
	glVertex2d(100,140);
	glVertex2d(70,110);
	glEnd();

	glBegin(GL_LINES);
	glColor3d(1.0, 1.0, 0.0);
	glVertex2d(100,30);
	glVertex2d(70,0);
	glEnd();

	glBegin(GL_LINES);
	glColor3d(1.0, 1.0, 0.0);
	glVertex2d(100, 30);
	glVertex2d(130, 0);
	glEnd();

	glBegin(GL_LINES);
	glColor3d(1.0, 1.0, 0.0);
	glVertex2d(90,190);
	glVertex2d(95,190);
	glVertex2d(90,190);
	glVertex2d(90, 200);
	glVertex2d(90, 200);
	glVertex2d(95, 200);
	glVertex2d(95, 200);
	glVertex2d(95, 190);
	glEnd();

	glBegin(GL_LINES);
	glColor3d(1.0, 1.0, 0.0);
	glVertex2d(105,190);
	glVertex2d(110,190);
	glVertex2d(105,200);
	glVertex2d(105,190);
	glVertex2d(110,200);
	glVertex2d(110,190);
	glVertex2d(105,200);
	glVertex2d(110,200);
	glEnd();

	glBegin(GL_LINES);
	glColor3d(1.0, 1.0, 0.0);
	glVertex2d(90,170);
	glVertex2d(90, 180);
	glVertex2d(110, 180);
	glVertex2d(110,170);
	glVertex2d(90, 180);
	glVertex2d(110, 180);
	glVertex2d(90, 170);
	glVertex2d(110, 170);
	
	glEnd();


	
	glFlush();


}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("stickman");
	glutInitWindowSize(400, 400);
	sinit();
	glutDisplayFunc(sdisplay);
	glutMainLoop();
    return 0;
}