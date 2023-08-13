#include "Malla.h"



Malla::Malla() {}
void Malla::DibujarMalla(float x, float y, float z) {
    glPushMatrix();
    glTranslatef(x, y, z);
    glBegin(GL_TRIANGLES);
    glVertex3f(1, 0, 0);
    glVertex3f(0, 1, 0);
    glVertex3f(-1, 0, 0);
    glEnd();



    glPopMatrix();

}
