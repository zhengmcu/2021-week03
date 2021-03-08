#include <GL/glut.h> ///(0)記得include

static void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清空

    glColor3ub(181,212,148);
    glBegin(GL_TRIANGLES);

        glVertex2f((149-150)/150.0,-(116-150)/150.0);
        glVertex2f((189-150)/150.0,-(116-150)/150.0);
        glVertex2f((176-150)/150.0,-(144-150)/150.0);

    glEnd();

    glutSwapBuffers();///交換兩倍的buffers
}


int main(int argc, char ** argv)
{
    glutInit(&argc, argv);///(1)設定GLUT的初始碼

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)顯示模式

    glutCreateWindow("08162412");///(3)開GLUT視窗

    glutDisplayFunc(display);///(4)顯示的函式

    glutMainLoop();///(5)GLUT主要的迴圈,卡住不要結束
}
