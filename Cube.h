#pragma once



#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>
#include "Malla.h"

class Cube
{
public:
	Cube();
	void drawCube(float x, float y, float z);
	~Cube();
};

