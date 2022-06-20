#include <stdlib.h>
#include <GL/glut.h>

// -- -- -- Dibuat oleh github.com/ardoardo02 sebagai bentuk tugas Grafika Komputer -- -- -- //

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    // -- -- -- BADAN -- -- -- //
    glBegin(GL_QUADS); //atas
        glColor3f(0.65, 0.65, 0.65);
        glVertex2f(-0.25, 0.15);
        glVertex2f(-0.25, -0.15);
        glVertex2f(0.25, -0.15);
        glVertex2f(0.25,0.15);
    glEnd();
    glBegin(GL_POLYGON); //bawah
        glColor3f(0.65, 0.65, 0.65);
        glVertex2f(-0.25, -0.15);
        glVertex2f(-0.2, -0.4);
        glVertex2f(0.2, -0.4);
        glVertex2f(0.25, -0.15);
    glEnd();

    // -- -- -- TANGAN KANAN -- -- -- //
    glBegin(GL_QUADS); //penyambung
        glColor3f(0.3, 0.5, 0.8);
        glVertex2f(0.25, 0.125);
        glVertex2f(0.275, 0.125);
        glVertex2f(0.275, 0.025);
        glVertex2f(0.25, 0.025);
    glEnd();
    glBegin(GL_QUADS); //bahu
        glColor3f(0.55, 0.55, 0.55);
        glVertex2f(0.275, 0.135);
        glVertex2f(0.38, 0.135);
        glVertex2f(0.38, 0.015);
        glVertex2f(0.275, 0.015);
    glEnd();
    glBegin(GL_QUADS); //lengan dalam
        glColor3f(0.7, 0.7, 0.7);
        glVertex2f(0.38, 0.1);
        glVertex2f(0.55, 0.1);
        glVertex2f(0.55, 0.05);
        glVertex2f(0.38, 0.05);
    glEnd();
    glBegin(GL_QUADS); //lengan luar
        glColor3f(0.7, 0.7, 0.7);
        glVertex2f(0.55, 0.05);
        glVertex2f(0.55, 0.3);
        glVertex2f(0.6, 0.3);
        glVertex2f(0.6, 0.05);
    glEnd();
    glBegin(GL_POLYGON); //capit
        glColor3f(0.8, 0., 0.);
        glVertex2f(0.55, 0.3);
        glVertex2f(0.5, 0.35);
        glVertex2f(0.5, 0.4);
        glVertex2f(0.57, 0.35);
        glVertex2f(0.58, 0.35);
        glVertex2f(0.65, 0.4);
        glVertex2f(0.65, 0.35);
        glVertex2f(0.6, 0.3);
    glEnd();

    // -- -- -- TANGAN KIRI -- -- -- //
    glBegin(GL_QUADS); //penyambung
        glColor3f(0.3, 0.5, 0.8);
        glVertex2f(-0.25, 0.125);
        glVertex2f(-0.275, 0.125);
        glVertex2f(-0.275, 0.025);
        glVertex2f(-0.25, 0.025);
    glEnd();
    glBegin(GL_QUADS); //bahu
        glColor3f(0.55, 0.55, 0.55);
        glVertex2f(-0.275, 0.135);
        glVertex2f(-0.38, 0.135);
        glVertex2f(-0.38, 0.015);
        glVertex2f(-0.275, 0.015);
    glEnd();
    glBegin(GL_QUADS); //lengan dalam
        glColor3f(0.7, 0.7, 0.7);
        glVertex2f(-0.38, 0.1);
        glVertex2f(-0.55, 0.1);
        glVertex2f(-0.55, 0.05);
        glVertex2f(-0.38, 0.05);
    glEnd();
    glBegin(GL_QUADS); //lengan luar
        glColor3f(0.7, 0.7, 0.7);
        glVertex2f(-0.55, 0.1);
        glVertex2f(-0.55, -0.15);
        glVertex2f(-0.6, -0.15);
        glVertex2f(-0.6, 0.1);
    glEnd();
    glBegin(GL_POLYGON); //capit
        glColor3f(0.8, 0., 0.);
        glVertex2f(-0.55, -0.15);
        glVertex2f(-0.5, -0.2);
        glVertex2f(-0.5, -0.25);
        glVertex2f(-0.57, -0.2);
        glVertex2f(-0.58, -0.2);
        glVertex2f(-0.65, -0.25);
        glVertex2f(-0.65, -0.2);
        glVertex2f(-0.6, -0.15);
    glEnd();

    // -- -- -- KAKI KANAN -- -- -- //
    glBegin(GL_QUADS); //penyambung
        glColor3f(0.55, 0.55, 0.55);
        glVertex2f(0.165, -0.4);
        glVertex2f(0.165, -0.7);
        glVertex2f(0.075, -0.7);
        glVertex2f(0.075, -0.4);
    glEnd();
    glBegin(GL_POLYGON); //sepatu
        glColor3f(0.8, 0., 0.);
        glVertex2f(0.165, -0.7);
        glVertex2f(0.25, -0.725);
        glVertex2f(0.25, -0.8);
        glVertex2f(0.075, -0.8);
        glVertex2f(0.075, -0.7);
    glEnd();

    // -- -- -- KAKI KIRI -- -- -- //
    glBegin(GL_QUADS); //penyambung
        glColor3f(0.55, 0.55, 0.55);
        glVertex2f(-0.165, -0.4);
        glVertex2f(-0.165, -0.7);
        glVertex2f(-0.075, -0.7);
        glVertex2f(-0.075, -0.4);
    glEnd();
    glBegin(GL_POLYGON); //sepatu
        glColor3f(0.8, 0., 0.);
        glVertex2f(-0.165, -0.7);
        glVertex2f(-0.25, -0.725);
        glVertex2f(-0.25, -0.8);
        glVertex2f(-0.075, -0.8);
        glVertex2f(-0.075, -0.7);
    glEnd();

    // -- -- -- LEHER -- -- -- //
    glBegin(GL_QUADS);
        glColor3f(0.3, 0.5, 0.8);
        glVertex2f(-0.06, 0.15);
        glVertex2f(-0.06, 0.2);
        glVertex2f(0.06, 0.2);
        glVertex2f(0.06, 0.15);
    glEnd();

    // -- -- -- KEPALA -- -- -- //
    glBegin(GL_QUADS); //telinga
        glColor3f(0.55, 0.55, 0.55);
        glVertex2f(-0.2, 0.25);
        glVertex2f(-0.2, 0.4);
        glVertex2f(0.2, 0.4);
        glVertex2f(0.2, 0.25);
    glEnd();
    glBegin(GL_QUADS); //antena
        glColor3f(0.55, 0.55, 0.55);
        glVertex2f(-0.01, 0.45);
        glVertex2f(-0.01, 0.525);
        glVertex2f(0.01, 0.525);
        glVertex2f(0.01, 0.45);
    glEnd();
    glBegin(GL_QUADS); //base
        glColor3f(0.65, 0.65, 0.65);
        glVertex2f(-0.175, 0.2);
        glVertex2f(-0.175, 0.45);
        glVertex2f(0.175, 0.45);
        glVertex2f(0.175, 0.2);
    glEnd();
    glBegin(GL_TRIANGLES); //mata kanan
        glColor3f(1., 0.9, 0.05);
        glVertex2f(0.09, 0.4);
        glVertex2f(0.04, 0.325);
        glVertex2f(0.14, 0.325);
    glEnd();
    glBegin(GL_TRIANGLES); //mata kiri
        glColor3f(1., 0.9, 0.05);
        glVertex2f(-0.09, 0.4);
        glVertex2f(-0.04, 0.325);
        glVertex2f(-0.14, 0.325);
    glEnd();
    glBegin(GL_QUADS); //mulut
        glColor3f(0., 0., 0.);
        glVertex2f(0.1, 0.23);
        glVertex2f(0.1, 0.26);
        glVertex2f(-0.1, 0.26);
        glVertex2f(-0.1, 0.23);
    glEnd();


    glFlush();
}

void init(){
    glClearColor(0.6, 0.85, 1., 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv){
    glutInit(&argc, argv);

    glutInitWindowSize(500, 500);
    glutInitWindowPosition(200, 100);

    glutCreateWindow("Robot Cakep Abis");
    glutDisplayFunc(display);
    init();
    glutMainLoop();

    return 0;
}
