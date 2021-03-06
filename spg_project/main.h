#pragma once
#include <Windows.h>
#include <GL/glew.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <filesystem>
#include <vector>
#include <GL/freeglut.h>
#include "CatmullRomCurve.h"
#include <math.h>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "squadCurve.h"
#include "camera.h"
#define GLM_SWIZZLE
#include <glm/glm.hpp>
#include "Shader.h"
#include "assimp/config.h"
#include "Model.h"
#include "Mesh.h"
#include "LUT.h"
//#include "imageLoader.h"

void geometry();

void CalcLightSpaceMatrix(float near_plane, float far_plane, glm::vec3 pos, glm::mat4& lightSpaceMatrix);

void renderShadowScene();

void drawCube(Shader* shader);
