#include <GL/glut.h> ///(0)記得include
#include <stdio.h>///TODO
float vx[2000],vy[2000];///準備一堆頂點
int N=0;///有N個頂點
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清空
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<N;i++){
        glVertex2f(vx[i],vy[i]);
    }
    glEnd();
    glutSwapBuffers();///交換兩倍的buffers
}
void mouse(int button,int state,int x,int y)///TODO
{
}
void motion(int x,int y)///motion函式
{
    printf("%d %d\n",x,y);///記頂點
    vx[N]=(x-150)/150.0;///換算座標
    vy[N]=-(y-150)/150.0;
    N++;
    display();///更新
}
int main(int argc, char ** argv)
{
    glutInit(&argc, argv);///(1)設定GLUT的初始碼
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)顯示模式
    glutCreateWindow("week05");///(3)開GLUT視窗
    glutDisplayFunc(display);///(4)顯示的函式
    glutMouseFunc(mouse);///按下彈起
    glutMotionFunc(motion);///motion移動的函事(拖曳)
    glutMainLoop();///(5)GLUT主要的迴圈,卡住不要結束
}
