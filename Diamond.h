#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>

class Diamond
{
public:
	Diamond();
	void drawDiamond(float x, float y, float z);
	~Diamond();
};

