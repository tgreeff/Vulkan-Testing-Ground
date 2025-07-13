#include <GL/gl.h>
#include <GL/glut.h>

void drawTriangle()
{
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.5, -0.5, 0.0);
    glVertex3f( 0.5, -0.5, 0.0);
    glVertex3f( 0.0,  0.5, 0.0);
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    drawTriangle();
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Triangle");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}