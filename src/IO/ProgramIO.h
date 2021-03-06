#ifndef PROGRAMIO_H_
#define PROGRAMIO_H_

#include "../Helper/HelperStructures.h"
#include "../Helper/MathHelp.h"
#include "../View/View.h"
#include "../Rendering/Render.h"

#include <cstdlib>
#include <iostream>


// Create an instance of the Importer class
extern Assimp::Importer importer;
extern int startX, startY, tracking;
extern float alpha;
extern float beta;
extern float r;

namespace IO
{
    bool parseInputFile(char *);
    
    bool Import3DFromFile(const std::string& pFile);

    int LoadGLTextures();

    void printProgramInfoLog(GLuint obj);

    void changeSize(int w, int h);

    void nextLocation(int);

    void processKeys(unsigned char key, int xx, int yy);

    void processMouseButtons(int button, int state, int xx, int yy);

    void processMouseMotion(int xx, int yy);

    void mouseWheel(int wheel, int direction, int x, int y);

    #define printOpenGLError() printOglError(__FILE__, __LINE__)
    int printOglError(char *file, int line);

} // end namespace IO

#endif
