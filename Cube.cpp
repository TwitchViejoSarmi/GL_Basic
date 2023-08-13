#include "Cube.h"

Cube::Cube(){}

void Cube::drawCube(float x, float y, float z) {
    glPushMatrix();
    glTranslatef(x, y, z);
    glBegin(GL_QUADS);
    glVertex3f(-2, -2, 2);
    glVertex3f(2, -2, 2);
    glVertex3f(2, 2, 2);
    glVertex3f(-2, 2, 2);
    glEnd();



    glPopMatrix();
}
