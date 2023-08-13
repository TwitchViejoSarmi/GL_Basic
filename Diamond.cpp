#include "Diamond.h"

Diamond::Diamond() {}

void Diamond::drawDiamond(float x, float y, float z) {
	glPushMatrix();
	glTranslatef(x, y, z);
	glBegin(GL_TRIANGLES);

	//Frente
	glVertex3f(0, 0.5, 0);
	glVertex3f(-0.5, 0, 0.5);
	glVertex3f(0.5, 0, 0.5);

	glVertex3f(0, 0.5, 0);
	glVertex3f(0.5, 0, 0.5);
	glVertex3f(0.5, 0, -0.5);

	glVertex3f(0, 0.5, 0);
	glVertex3f(0.5, 0, -0.5);
	glVertex3f(-0.5, 0, -0.5);

	glVertex3f(0, 0.5, 0);
	glVertex3f(-0.5, 0, -0.5);
	glVertex3f(-0.5, 0, 0.5);

	//Atras
	glVertex3f(0, -0.5, 0);
	glVertex3f(0.5, 0, 0.5);
	glVertex3f(-0.5, 0, 0.5);

	glVertex3f(0, -0.5, 0);
	glVertex3f(-0.5, 0, 0.5);
	glVertex3f(-0.5, 0, -0.5);

	glVertex3f(0, -0.5, 0);
	glVertex3f(-0.5, 0, -0.5);
	glVertex3f(0.5, 0, -0.5);

	glVertex3f(0, -0.5, 0);
	glVertex3f(0.5, 0, -0.5);
	glVertex3f(0.5, 0, 0.5);

	glEnd();

	glPopMatrix();
}
