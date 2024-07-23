//#include <GL/glut.h>
//#include <cmath>
//draw rectangle 2D(Assignmentnp.2)

//void display() {
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    // Set the color to white (1.0, 1.0, 1.0)
//    glColor3f(1.0, 1.0, 1.0);
//
//    // Define the vertices of the rectangle
//    glBegin(GL_POLYGON);
//    glVertex3f(0.25, 0.25, 0.0);
//    glVertex3f(0.75, 0.25, 0.0);
//    glVertex3f(0.75, 0.75, 0.0);
//    glVertex3f(0.25, 0.75, 0.0);
//    glEnd();
//
//    glFlush();
//}
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowSize(400, 400);
//    glutInitWindowPosition(100, 100);
//    glutCreateWindow("OpenGL Rectangle");
//
//    glClearColor(0.0, 0.0, 0.0, 0.0);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
//
//    glutDisplayFunc(display);
//    glutMainLoop();
//
//    return 0;
//}

//draw circle

//const int sides = 100;  // Number of sides of the circle.
//
//void display() {
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    // Set the color to white (1.0, 1.0, 1.0)
//    glColor3f(1.0, 1.0, 1.0);
//
//    // Define the radius and center of the circle
//    float radius = 0.3;
//    float centerX = 0.5;
//    float centerY = 0.5;
//
//    glBegin(GL_LINE_LOOP);
//    for (int i = 0; i < sides; i++) {
//        float angle = 2.0 * M_PI * i / sides;
//        float x = centerX + radius * std::cos(angle);
//        float y = centerY + radius * std::sin(angle);
//        glVertex2f(x, y);
//    }
//    glEnd();
//
//    glFlush();
//}
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowSize(400, 400);
//    glutInitWindowPosition(100, 100);
//    glutCreateWindow("OpenGL Rectangle");
//
//    glClearColor(0.0, 0.0, 0.0, 0.0);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
//
//    glutDisplayFunc(display);
//    glutMainLoop();
//
//    return 0;
//}

//draw 3D rectangle

//void display() {
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//    // Define the vertices of the rectangle
//    GLfloat vertices[] = {
//        0.25, 0.25, 0.0,
//        0.75, 0.25, 0.0,
//        0.75, 0.75, 0.0,
//        0.25, 0.75, 0.0
//    };
//
//    // Define the colors for each vertex
//    GLfloat colors[] = {
//        1.0, 0.0, 0.0, // Red
//        0.0, 1.0, 0.0, // Green
//        0.0, 0.0, 1.0, // Blue
//        1.0, 1.0, 0.0  // Yellow
//    };
//
//    glEnableClientState(GL_VERTEX_ARRAY);
//    glEnableClientState(GL_COLOR_ARRAY);
//
//    glVertexPointer(3, GL_FLOAT, 0, vertices);
//    glColorPointer(3, GL_FLOAT, 0, colors);
//
//    glDrawArrays(GL_QUADS, 0, 4);
//
//    glDisableClientState(GL_VERTEX_ARRAY);
//    glDisableClientState(GL_COLOR_ARRAY);
//
//    glFlush();
//}
//
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
//    glutInitWindowSize(400, 400);
//    glutInitWindowPosition(100, 100);
//    glutCreateWindow("OpenGL 3D Rectangle");
//
//    glClearColor(0.0, 0.0, 0.0, 0.0);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
//
//    glutDisplayFunc(display);
//
//    glEnable(GL_DEPTH_TEST); // Enable depth testing
//
//    glutMainLoop();
//
//    return 0;
//}


//Draw a Car

//#include <cmath>
//#include <GL/glut.h>  // GLUT, include glu.h and gl.h
//
//const int sides = 100;
//void initGL()
//{
//	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);   // Set background Black
//}
//
//void display()
//{
//	glClear(GL_COLOR_BUFFER_BIT);// Clear the color buffer (background)
//	// Red square
//	glBegin(GL_QUADS);
//	glColor3f(1.0f, 0.0f, 0.0f); // Red
//	glVertex3f(-0.5f, 0.5f, 0.0f);
//	glVertex3f(0.5f, 0.5f, 0.0f);
//	glVertex3f(0.5f, 0.2f, 0.0f);
//	glVertex3f(-0.5f, 0.2f, 0.0f);
//
//	// Grnee
//	glColor3f(0.0f, 1.0f, 0.0f);
//	glVertex3f(-1.0f, 0.2f, 0.0f);
//	glVertex3f(1.0f, 0.2f, 0.0f);
//	glVertex3f(1.0f, -0.2f, 0.0f);
//	glVertex3f(-1.0f, -0.2f, 0.0f);
//	glEnd();
//	
//	
//	//white line 
//	glBegin(GL_LINES);
//	glColor3f(1.0f, 1.0f, 1.0f);
//	glVertex3f(0.0f, 0.2f, 0.0f);
//	glVertex3f(0.0f, 0.5f, 0.0f);
//	glEnd();
//	glFlush();
//
//	
//	}
//int main(int argc, char** argv) 
//{
//	glutInit(&argc, argv);                 
//	glutCreateWindow("Draw a car"); 
//	glutInitWindowSize(50, 50);   
//	glutInitWindowPosition(50, 50); 
//	glutDisplayFunc(display); 
//	initGL();
//	glutMainLoop();           
//	return 0;
//}

//Draw a 3d chair

//#include <windows.h>
//#include <GL/glut.h>
//Initializes 3D rendering
//void initRendering() {
//    glEnable(GL_DEPTH_TEST);
//    glEnable(GL_COLOR_MATERIAL);
//    glEnable(GL_LIGHTING); //Enable lighting
//    glEnable(GL_LIGHT0); //Enable light #0
//    glEnable(GL_LIGHT1); //Enable light #1
//    glEnable(GL_NORMALIZE); //Automatically normalize normals
//    glShadeModel(GL_SMOOTH); //Enable smooth shading
//}
//
////Called when the window is resized
//void handleResize(int w, int h) {
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
//}
//
//float _angle = -70.0f;
//
////Draws the 3D scene
//void drawScene() {
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//    glMatrixMode(GL_MODELVIEW); // keep it like this
//    glLoadIdentity();
//
//    glTranslatef(0.0f, 0.0f, -14.0f);
//
//    //Add ambient light
//    GLfloat ambientColor[] = { 0.2f, 0.2f, 0.2f, 1.0f }; //Color (0.2, 0.2, 0.2)
//    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientColor);
//
//    //Add positioned light
//    GLfloat lightColor0[] = { 0.5f, 0.5f, 0.5f, 1.0f }; //Color (0.5, 0.5, 0.5)
//    GLfloat lightPos0[] = { 0.0f, -8.0f, 8.0f, 1.0f }; //Positioned at (4, 0, 8)
//    glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor0);
//    glLightfv(GL_LIGHT0, GL_POSITION, lightPos0);
//
//    //Add directed light
//    GLfloat lightColor1[] = { 0.5f, 0.2f, 0.2f, 1.0f }; //Color (0.5, 0.2, 0.2)
//    //Coming from the direction (-1, 0.5, 0.5)
//    GLfloat lightPos1[] = { -1.0f, 0.5f, 0.5f, 0.0f };
//    glLightfv(GL_LIGHT1, GL_DIFFUSE, lightColor1);
//    glLightfv(GL_LIGHT1, GL_POSITION, lightPos1);
//
//    glRotatef(10, 1.0f, 0.0f, 0.0f);
//    glRotatef(-10, 0.0f, 0.0f, 1.0f);
//    glRotatef(_angle, 0.0f, 1.0f, 0.0f);
//    //glRotatef(10, 1.0f, 0.0f, 0.0f);
//    //glRotatef(-10, 0.0f, 0.0f, 1.0f);
//    //glRotatef(_angle,0.0f, 1.0f, 0.0f);
//    glColor3f(1.0f, 1.0f, 0.0f);
//    glBegin(GL_QUADS);
//
//    //Front
//    glNormal3f(0.0f, 0.0f, 1.0f);
//    glVertex3f(-2.0f, -0.2f, 2.0f);
//    glVertex3f(2.0f, -0.2f, 2.0f);
//    glVertex3f(2.0f, 0.2f, 2.0f);
//    glVertex3f(-2.0f, 0.2f, 2.0f);
//
//    //Right
//    glNormal3f(1.0f, 0.0f, 0.0f);
//    glVertex3f(2.0f, -0.2f, -2.0f);
//    glVertex3f(2.0f, 0.2f, -2.0f);
//    glVertex3f(2.0f, 0.2f, 2.0f);
//    glVertex3f(2.0f, -0.2f, 2.0f);
//
//    //Back
//    glNormal3f(0.0f, 0.0f, -1.0f);
//    glVertex3f(-2.0f, -0.2f, -2.0f);
//    glVertex3f(-2.0f, 0.2f, -2.0f);
//    glVertex3f(2.0f, 0.2f, -2.0f);
//    glVertex3f(2.0f, -0.2f, -2.0f);
//
//    //Left
//    glNormal3f(-1.0f, 0.0f, 0.0f);
//    glVertex3f(-2.0f, -0.2f, -2.0f);
//    glVertex3f(-2.0f, -0.2f, 2.0f);
//    glVertex3f(-2.0f, 0.2f, 2.0f);
//    glVertex3f(-2.0f, 0.2f, -2.0f);
//
//    //top
//    glNormal3f(0.0f, 1.0f, 0.0f);
//
//    glVertex3f(2.0f, 0.2f, 2.0f);
//    glVertex3f(-2.0f, 0.2f, 2.0f);
//    glVertex3f(-2.0f, 0.2f, -2.0f);
//    glVertex3f(2.0f, 0.2f, -2.0f);
//
//    //bottom
//    glNormal3f(0.0f, -1.0f, 0.0f);
//
//    glVertex3f(2.0f, -0.2f, 2.0f);
//    glVertex3f(-2.0f, -0.2f, 2.0f);
//    glVertex3f(-2.0f, -0.2f, -2.0f);
//    glVertex3f(2.0f, -0.2f, -2.0f);
//
//    //table front leg
//    //front
//    glNormal3f(0.0f, 0.0f, 1.0f);
//
//    glVertex3f(1.8f, -0.2f, 1.6f);
//    glVertex3f(1.4f, -0.2f, 1.6f);
//    glVertex3f(1.4f, -3.0f, 1.6f);
//    glVertex3f(1.8f, -3.0f, 1.6f);
//
//    //back
//    glNormal3f(0.0f, 0.0f, -1.0f);
//
//    glVertex3f(1.8f, -0.2f, 1.2f);
//    glVertex3f(1.4f, -0.2f, 1.2f);
//    glVertex3f(1.4f, -3.0f, 1.2f);
//    glVertex3f(1.8f, -3.0f, 1.2f);
//
//    //right
//    glNormal3f(1.0f, 0.0f, 0.0f);
//
//    glVertex3f(1.8f, -0.2f, 1.6f);
//    glVertex3f(1.8f, -0.2f, 1.2f);
//    glVertex3f(1.8f, -3.0f, 1.2f);
//    glVertex3f(1.8f, -3.0f, 1.6f);
//
//    //left
//    glNormal3f(-1.0f, 0.0f, 0.0f);
//
//    glVertex3f(1.4f, -0.2f, 1.6f);
//    glVertex3f(1.4f, -0.2f, 1.2f);
//    glVertex3f(1.4f, -3.0f, 1.2f);
//    glVertex3f(1.4f, -3.0f, 1.6f);
//
//    //back leg back
//    //front
//    glNormal3f(0.0f, 0.0f, -1.0f);
//
//    glVertex3f(1.8f, -0.2f, -1.2f);
//    glVertex3f(1.4f, -0.2f, -1.2f);
//    glVertex3f(1.4f, -3.0f, -1.2f);
//    glVertex3f(1.8f, -3.0f, -1.2f);
//
//    //back
//    glNormal3f(0.0f, 0.0f, -1.0f);
//
//    glVertex3f(1.8f, -0.2f, -1.6f);
//    glVertex3f(1.4f, -0.2f, -1.6f);
//    glVertex3f(1.4f, -3.0f, -1.6f);
//    glVertex3f(1.8f, -3.0f, -1.6f);
//
//    //right
//    glNormal3f(1.0f, 0.0f, 0.0f);
//
//    glVertex3f(1.8f, -0.2f, -1.6f);
//    glVertex3f(1.8f, -0.2f, -1.2f);
//    glVertex3f(1.8f, -3.0f, -1.2f);
//    glVertex3f(1.8f, -3.0f, -1.6f);
//
//    //left
//    glNormal3f(1.0f, 0.0f, 0.0f);
//
//    glVertex3f(1.4f, -0.2f, -1.6f);
//    glVertex3f(1.4f, -0.2f, -1.2f);
//    glVertex3f(1.4f, -3.0f, -1.2f);
//    glVertex3f(1.4f, -3.0f, -1.6f);
//
//    //leg left front
//    glNormal3f(0.0f, 0.0f, 1.0f);
//
//    glVertex3f(-1.8f, -0.2f, 1.6f);
//    glVertex3f(-1.4f, -0.2f, 1.6f);
//    glVertex3f(-1.4f, -3.0f, 1.6f);
//    glVertex3f(-1.8f, -3.0f, 1.6f);
//
//    //back
//    glNormal3f(0.0f, 0.0f, -1.0f);
//
//    glVertex3f(-1.8f, -0.2f, 1.2f);
//    glVertex3f(-1.4f, -0.2f, 1.2f);
//    glVertex3f(-1.4f, -3.0f, 1.2f);
//    glVertex3f(-1.8f, -3.0f, 1.2f);
//
//    //right
//    glNormal3f(1.0f, 0.0f, 0.0f);
//
//    glVertex3f(-1.8f, -0.2f, 1.6f);
//    glVertex3f(-1.8f, -0.2f, 1.2f);
//    glVertex3f(-1.8f, -3.0f, 1.2f);
//    glVertex3f(-1.8f, -3.0f, 1.6f);
//
//    //left
//    glNormal3f(-1.0f, 0.0f, 0.0f);
//
//    glVertex3f(-1.4f, -0.2f, 1.6f);
//    glVertex3f(-1.4f, -0.2f, 1.2f);
//    glVertex3f(-1.4f, -3.0f, 1.2f);
//    glVertex3f(-1.4f, -3.0f, 1.6f);
//
//    //left leg back front
//
//    //front
//    glNormal3f(0.0f, 0.0f, -1.0f);
//
//    glVertex3f(-1.8f, -0.2f, -1.2f);
//    glVertex3f(-1.4f, -0.2f, -1.2f);
//    glVertex3f(-1.4f, -3.0f, -1.2f);
//    glVertex3f(-1.8f, -3.0f, -1.2f);
//
//    //back
//    glNormal3f(0.0f, 0.0f, -1.0f);
//
//    glVertex3f(-1.8f, -0.2f, -1.6f);
//    glVertex3f(-1.4f, -0.2f, -1.6f);
//    glVertex3f(-1.4f, -3.0f, -1.6f);
//    glVertex3f(-1.8f, -3.0f, -1.6f);
//
//    //right
//    glNormal3f(1.0f, 0.0f, 0.0f);
//
//    glVertex3f(-1.8f, -0.2f, -1.6f);
//    glVertex3f(-1.8f, -0.2f, -1.2f);
//    glVertex3f(-1.8f, -3.0f, -1.2f);
//    glVertex3f(-1.8f, -3.0f, -1.6f);
//
//    //left
//    glNormal3f(-1.0f, 0.0f, 0.0f);
//
//    glVertex3f(-1.4f, -0.2f, -1.6f);
//    glVertex3f(-1.4f, -0.2f, -1.2f);
//    glVertex3f(-1.4f, -3.0f, -1.2f);
//    glVertex3f(-1.4f, -3.0f, -1.6f);
//
//    //chair back
//    //front
//    glColor3f(1, 0, 0);
//    //glNormal3f(-1.0f, 0.0f, 0.0f);
//    glVertex3f(-1.8f, 0.2f, -1.8f);
//    glVertex3f(1.8f, 0.2f, -1.8f);
//    glVertex3f(1.8f, 3.5f, -1.8f);
//    glVertex3f(-1.8f, 3.5f, -1.8f);
//
//    //back
// //glNormal3f(-1.0f, 0.0f, 0.0f);
//    glVertex3f(-1.8f, 0.2f, -2.0f);
//    glVertex3f(1.8f, 0.2f, -2.0f);
//    glVertex3f(1.8f, 3.5f, -2.0f);
//    glVertex3f(-1.8f, 3.5f, -2.0f);
//
//
//    //  glNormal3f(-1.0f, 0.0f, 0.0f);
//    glVertex3f(-1.8f, 0.2f, -2.0f);
//    glVertex3f(-1.8f, 3.5f, -2.0f);
//    glVertex3f(-1.8f, 3.5f, -1.8f);
//    glVertex3f(-1.8f, 0.2f, -1.8f);
//
//
//    glVertex3f(1.8f, 0.2f, -2.0f);
//    glVertex3f(1.8f, 3.5f, -2.0f);
//    glVertex3f(1.8f, 3.5f, -1.8f);
//    glVertex3f(1.8f, 0.2f, -1.8f);
//
//    glVertex3f(-1.8f, 3.5f, -2.0f);
//    glVertex3f(-1.8f, 3.5f, -1.8f);
//    glVertex3f(1.8f, 3.5f, -1.8f);
//    glVertex3f(1.8f, 3.5f, -2.0f);
//    glEnd();
//    glutSwapBuffers();
//}
//
//void update(int value) {
//    _angle += 1.5f;
//    if (_angle > 360) {
//        _angle -= 360;
//    }
//
//    glutPostRedisplay();
//    glutTimerFunc(25, update, 0);
//}
//
//int main(int argc, char** argv) {
//    //Initialize GLUT
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
//    glutInitWindowSize(600, 600);
//
//    //Create the window
//    glutCreateWindow("Lighting");
//    initRendering();
//
//    //Set handler functions
//    glutDisplayFunc(drawScene);
//
//    glutReshapeFunc(handleResize);
//
//    update(0);
//
//    glutMainLoop();
//    return 0;
//}



































//#include<Windows.h>
//#include<GL\glew.h>
//#include<GL\freeglut.h>
//#include<iostream>
//#include<fstream>
//#include<vector>
//#include<math.h>
//#include<GL/glut.h>
//#define PI 3.1415926535898;

//class Circle{
//	Public:
//	void Draw()
//	{
//		glClear(GL_COLOR_BUFFER_BIT);
//		GLfloat angle;
//		GLint Circle_Points = 100;
//		glBegin(GL_LINE_LOOP);
//		glColor3f(0.0, 0.0, 1.0f);
//		for (GLint i = 0;i < Circle_Points;i++)
//		{
//			angle = 2 * PI i / Circle_Points;
//			glVertex2f(cos(angle), sin(angle));
//		}
//		glEnd();
//		glFlush();
//	}
//};
//glLoadIdentity();
//
//glRotatef(rotate_x, 1.0, 0.0, 0.0);
//glRotatef(rotate_y, 1.0, 0.0, 0.0);
//glBehin(GL_OUADS);
//
//void specialKey(int key, int x, int y) {
//	if (key == Glut_key_left)
//		rotate_y + = 5;
//}

//
//class Circle {
//public:
//	void Draw() {
//		glClear(GL_COLOR_BUFFER_BIT);
//		float angle;
//		GLint circle_points = 100;
//		glBegin(GL_LINE_LOOP);
//		glColor3f(0.0, 0.0, 1.0f);
//

//int main(int argc, char** argv) {
//	glutInit(&argc, argv);            // Initialize GLUT
//	glutInitWindowSize(640, 480);   // Set the window's initial width & height
//	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
//	glutCreateWindow(title);          // Create window with the given title
//	glutDisplayFunc(Display);// Register callback handler for window re-paint event
//	initGL();                       // Our own OpenGL initialization
//	glutMainLoop();                 // Enter the infinite event-processing loop
//	return 0;
//}

//Draw chess borad

//#include<GL\glut.h>
//
//int black = 0, white = 1, color = 0;
//GLint a1 = 10, b1 = 10, a2 = 30, b2 = 30;
//
//void init(void)
//{
//    glClearColor(0.0, 0.0, 1.0, 0.0);
//    glMatrixMode(GL_PROJECTION);
//    glClear(GL_COLOR_BUFFER_BIT);
//    gluOrtho2D(0.0, 120.0, 0.0, 140.0);
//}
//
//void lineSegment()
//{
//    for (int i = 0;i < 3;i++)
//    {
//        if (b2 < 120)
//        {
//            a1 = 10;b1 = b2;
//            a2 = 30;b2 = b2 + 20;
//        }
//        for (int j = 0;j < 5;j++)
//        {
//            if (a2 < 120)
//            {
//                if (color == black)
//                {
//                    glColor3f(0, 0, 0);
//                    glRecti(a1, b1, a2, b2);
//                    color = 1;
//                    a1 = a2;
//                    a2 = a2 + 20;
//                }
//                else
//                {
//                    glColor3f(1, 1, 1);
//                    glRecti(a1, b1, a2, b2);
//                    color = 0;
//                    a1 = a2;
//                    a2 = a2 + 20;
//                }
//            }
//        }
//        //GLint a1=10,b1=10,a2=30,b2=30;    
//    }
//    glFlush();
//}
//
//void main(int argc, char** argv)
//{
//    glutInit(&argc, argv); //Initialize GLUT.
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Set display mode.
//    glutInitWindowPosition(50, 100); //Set top-left display-window position.
//    glutInitWindowSize(400, 300); //Set display-window width and height.
//    glutCreateWindow("An Example OpenGL Program"); //Create display window.
//
//    init(); // Execute initialization procedure.
//
//    glutDisplayFunc(lineSegment); //send graphics to display window.
//    glutMainLoop(); //display everything and wait.
//}
//#endif
//#ifdef __APPLE__
//#include <OpenGL/OpenGL.h>
//#include <GLUT/glut.h>
//#else
//#include <stdlib.h>
 

//Draw  3d house


//#include <iostream>
//#include <GL/glut.h>
//using namespace std;
//void handleKeypress(unsigned char key, int x, int y) {
//    switch (key) {
//    case 27:
//        exit(0);
//    }
//}
//void initRendering() {
//    glEnable(GL_DEPTH_TEST);
//}
//void handleResize(int w, int h) {
//    glViewport(0, 0, w, h);//Set the new port to cover the new window
//    glMatrixMode(GL_PROJECTION);//To operate on the projection of matrix
//    glLoadIdentity();
//    gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
//}
//float _angle = 45.0f;
//float _cameraAngle = 0.0f;
//void drawScene() {
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
//    glRotatef(-_cameraAngle, 0.0f, 1.0f, 0.0f);
//    glTranslatef(-1.0f, -1.5f, -2.0f);
//    glPopMatrix();// Pop the old matrix without the transformations.
//    glPushMatrix();// Set current matrix on the stack
//    glTranslatef(1.0f, 1.0f, 0.0f);
//    glRotatef(_angle, 0.0f, 1.0f, 0.0f);
//    glScalef(1.0f, 1.0f, 1.0f);
//    glColor3f(1.0, 0.25, 1.0);
//    glColor3f(.5, 0.5, .25);
//
//    //main Rectangle
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(.5, .75, .35);
//    glBegin(GL_POLYGON);
//    glVertex3f(0.2, 0.1, 0.0);
//    glVertex3f(0.9, 0.1, 0.0);
//    glVertex3f(0.9, 0.575, 0.0);
//    glVertex3f(0.2, 0.575, 0.0);
//    glEnd();
//
//   //back Rectangle
//    glColor3f(.5, .75, .35);
//    glBegin(GL_POLYGON);
//    glVertex3f(0.2, 0.1, 0.5);
//    glVertex3f(0.9, 0.1, 0.5);
//    glVertex3f(0.9, 0.575, 0.5);
//    glVertex3f(0.2, 0.575, 0.5);
//    glEnd();
//
//    //left Rectangle
//    glColor3f(.75, 0.75, .25);
//    glBegin(GL_POLYGON);
//    glVertex3f(0.2, 0.1, 0.5);
//    glVertex3f(0.2, 0.1, 0.0);
//    glVertex3f(0.2, 0.575, 0.0);
//    glVertex3f(0.2, 0.575, 0.5);
//    glEnd();
//
//   //Right Rectangle
//    glColor3f(.75, 0.75, .25);
//    glBegin(GL_POLYGON);
//    glVertex3f(0.9, 0.1, 0.5);
//    glVertex3f(0.9, 0.1, 0.0);
//    glVertex3f(0.9, 0.575, 0.0);
//    glVertex3f(0.9, 0.575, 0.5);
//    glEnd();
//
//    //left triangle
//    glColor3f(.5, 0.5, .25);
//    glBegin(GL_TRIANGLES);
//    glVertex3f(0.9, 0.575, 0.0);
//    glVertex3f(0.9, 0.575, 0.5);
//    glVertex3f(0.9, 0.8, 0.25);
//    glEnd();
//
//    //Right triangle
//    glColor3f(.5, 0.5, .25);
//    glBegin(GL_TRIANGLES);
//    glVertex3f(0.2, 0.575, 0.0);
//    glVertex3f(0.2, 0.575, 0.5);
//    glVertex3f(0.2, 0.8, 0.25);
//    glEnd();
//
//    //Roof
//    glColor3f(.55, 0.35, .2);
//    glBegin(GL_POLYGON);
//    glVertex3f(0.2, 0.575, 0.0);
//    glVertex3f(0.9, 0.575, 0.0);
//    glVertex3f(0.9, 0.8, 0.25);
//    glVertex3f(0.2, 0.8, 0.25);
//    glEnd();
//
//    //Back Roof
//    glColor3f(.55, 0.35, .2);
//    glBegin(GL_POLYGON);
//    glVertex3f(0.2, 0.575, 0.5);
//    glVertex3f(0.9, 0.575, 0.5);
//    glVertex3f(0.9, 0.8, 0.25);
//    glVertex3f(0.2, 0.8, 0.25);
//    glEnd();
//
//    //Door
//    glColor3f(.15, 0.2, .3);
//    glBegin(GL_POLYGON);
//    glVertex3f(0.47, 0.105, 0.0);
//    glVertex3f(0.65, 0.105, 0.0);
//    glVertex3f(0.65, 0.46, 0.0);
//    glVertex3f(0.47, 0.46, 0.0);
//    glEnd();
//
//    //first window
//    glColor3f(.3, 0.2, .1);
//    glBegin(GL_POLYGON);
//    glVertex3f(0.72, 0.25, 0.0);
//    glVertex3f(0.83, 0.25, 0.0);
//    glVertex3f(0.83, 0.4, 0.0);
//    glVertex3f(0.72, 0.4, 0.0);
//    glEnd();
//
//    //Second window
//    glColor3f(.3, 0.2, .1);
//    glBegin(GL_POLYGON);
//    glVertex3f(0.27, 0.25, 0.0);
//    glVertex3f(0.38, 0.25, 0.0);
//    glVertex3f(0.38, 0.4, 0.0);
//    glVertex3f(0.27, 0.4, 0.0);
//    glEnd();
//
//
//    glFlush();
//    glPopMatrix();// Pop the old matrix without the transformations.
//    glutSwapBuffers();
//}
//void update(int value) {
//    _angle += 1.0f;
//    if (_angle > 360) {
//        _angle -= 360;
//    }
//    glutPostRedisplay();//marks the current window as needing to be redisplayed.
//    glutTimerFunc(25, update, 0);
//}
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);//initialize Glut
//    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);// sets the initial display mode.
//    glutInitWindowSize(1000, 800);
//    glutCreateWindow("3D House Rotate");
//    initRendering();
//    glutDisplayFunc(drawScene);
//    glutKeyboardFunc(handleKeypress);//sets the keyboard callback for the current window.
//    glutReshapeFunc(handleResize);;//sets the reshape callback for the new window
//    glutTimerFunc(25, update, 0);//registers a timer callback to be triggered in a specified number of milliseconds
//    glutMainLoop();
//    return 0;
//}

//Draw  3d Car

//#include <GL/glut.h>
//// Variables for rotation
//float rotationX = 0.0f;
//float rotationY = 0.0f;
//float rotationZ = 0.0f;
//
//const int num_faces = 3;
//
//void drawCar() {
//    // Set car vertices
//    GLfloat vertices[] = {
//        // Define car vertices here
//            // Car body
//    -0.5f, -0.5f, 0.5f,    // Bottom left front
//    0.5f, -0.5f, 0.5f,     // Bottom right front
//    0.5f, 0.5f, 0.5f,      // Top right front
//    -0.5f, 0.5f, 0.5f,     // Top left front
//    -0.3f, 0.5f, 0.5f,     // Top left roof
//    0.3f, 0.5f, 0.5f,      // Top right roof
//    -0.5f, 0.0f, 0.5f,     // Bottom left rear
//    0.5f, 0.0f, 0.5f,      // Bottom right rear
//
//    // Wheels
//    -0.4f, -0.6f, 0.5f,    // Bottom left front wheel
//    -0.2f, -0.6f, 0.5f,    // Bottom right front wheel
//    -0.4f, -0.8f, 0.5f,    // Top left front wheel
//    -0.2f, -0.8f, 0.5f,    // Top right front wheel
//    0.2f, -0.6f, 0.5f,     // Bottom left rear wheel
//    0.4f, -0.6f, 0.5f,     // Bottom right rear wheel
//    0.2f, -0.8f, 0.5f,     // Top left rear wheel
//    0.4f, -0.8f, 0.5f      // Top right rear wheel
//
//    };
//
//    // Define car faces
//    GLuint faces[] = {
//        // Define car faces here
//
//            // Car body faces (front)
//            0, 1, 2, 3,    // Front face
//            3, 2, 4, 5,    // Roof face
//            0, 3, 5, 6,    // Left side face
//            1, 2, 4, 7,    // Right side face
//            6, 5, 7, 4,    // Back face
//            0, 1, 7, 6,    // Bottom face
//
//            // Wheels faces (front wheels)
//            8, 9, 11, 10,  // Front left wheel
//            12, 13, 15, 14, // Front right wheel
//
//            // Wheels faces (rear wheels)
//            16, 17, 19, 18, // Rear left wheel
//            20, 21, 23, 22  // Rear right wheel
//        
//    };
//
//    // Define car colors
//    GLfloat colors[] = {
//        // Define car colors here
//         1.0f, 0.0f, 0.0f, // Red (vertices 0-3)
//         0.0f, 1.0f, 0.0f, // Green (vertices 4-5)
//         0.0f, 0.0f, 1.0f, // Blue (vertices 6-7)
//
//        // Wheels colors (front)
//         0.5f, 0.5f, 0.5f, // Grey (vertices 8-15)
//
//         // Wheels colors (rear)
//         0.3f, 0.3f, 0.3f  // Dark Grey (vertices 16-23)
//    };
//
//    // Draw car
//    glLoadIdentity();
//    glTranslatef(0.0f, 0.0f, -5.0f); // Move the car away from the camera
//    glRotatef(rotationX, 1.0f, 0.0f, 0.0f); // Rotate around X axis
//    glRotatef(rotationY, 0.0f, 1.0f, 0.0f); // Rotate around Y axis
//    glRotatef(rotationZ, 0.0f, 0.0f, 1.0f); // Rotate around Z axis
//
//    glEnableClientState(GL_VERTEX_ARRAY);
//    glEnableClientState(GL_COLOR_ARRAY);
//
//    glVertexPointer(3, GL_FLOAT, 0, vertices);
//    glColorPointer(3, GL_FLOAT, 0, colors);
//
//    for (int i = 0; i < num_faces; ++i) {
//        glDrawElements(GL_POLYGON, 4, GL_UNSIGNED_INT, &faces[i * 4]);
//    }
//
//    glDisableClientState(GL_VERTEX_ARRAY);
//    glDisableClientState(GL_COLOR_ARRAY);
//}
//
//void display() {
//    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Background color: white
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    double aspect_ratio = glutGet(GLUT_WINDOW_WIDTH) / (double)glutGet(GLUT_WINDOW_HEIGHT);
//    gluPerspective(45, aspect_ratio, 0.1, 100); // Perspective projection
//
//    glMatrixMode(GL_MODELVIEW);
//
//    drawCar();
//
//    glutSwapBuffers();
//}
//
//void keyboard(unsigned char key, int x, int y) {
//    switch (key) {
//    case 'x':
//        rotationX += 5.0f;
//        break;
//    case 'X':
//        rotationX -= 5.0f;
//        break;
//    case 'y':
//        rotationY += 5.0f;
//        break;
//    case 'Y':
//        rotationY -= 5.0f;
//        break;
//    case 'z':
//        rotationZ += 5.0f;
//        break;
//    case 'Z':
//        rotationZ -= 5.0f;
//        break;
//    }
//    glutPostRedisplay();
//}
//
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
//    glutInitWindowSize(800, 600);
//    glutCreateWindow("3D Car");
//
//    glEnable(GL_DEPTH_TEST);
//
//    glutDisplayFunc(display);
//    glutKeyboardFunc(keyboard);
//
//    glutMainLoop();
//
//    return 0;
//}


//#include<gl/freeglut.h>
//#include<iostream>
//using namespace std;
//void initGL()
//{
//	glClearColor(0.02, 0.02, 0.04, 0.5);
//	glEnable(GL_DEPTH_TEST);
//}
//void handleKeyPress(unsigned char key, int x, int y)
//{
//	switch (key)
//	{
//	case 27:
//		exit(0);
//	}
//}
//void handleResize(int w, int h)
//{
//	glViewport(0, 0, w, h);//Set the new port to cover the new window
//	glMatrixMode(GL_PROJECTION);//To operate on the projection of matrix
//		glLoadIdentity();//Replaces Current Matrix with Identity Matrix 
//	gluPerspective(45.0, (GLfloat)w / GLfloat(h), 1.0, 200.0);
//}
//GLfloat angle = 45.0f;
//GLfloat cameraAngle = 0.0f;
//void drawscene() //hena hanrsm el bet nafso 
//{
//	glClear(GL_COLOR_BUFFER_BIT |
//		GL_DEPTH_BUFFER_BIT);//clear color buffer and z-buffer
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	glRotatef(cameraAngle, 0.0f, 1.0f, 0.0f);
//	glTranslatef(-1.0f, -1.5f, -2.0f);
//	glPopMatrix();// Pop the old matrix without the transformations.
//	glPushMatrix(); // Set current matrix on the stack
//	glTranslatef(1.0f, 1.0f, 0.0f);
//	glRotatef(angle, 0.0f, 1.0f, 0.0f);
//	glScalef(1.0f, 1.0f, 1.0f);
//	glColor3f(1.0, 0.25, 1.0);
//	glColor3f(.5, 0.5, .25);
//	//main rectangle
//	glColor3f(0.25, 0.27, 0.42);
//	glBegin(GL_POLYGON);
//	glVertex3f(0.2, 0.1, 0.0);
//	glVertex3f(0.9, 0.1, 0.0);
//	glVertex3f(0.9, 0.575, 0.0);
//	glVertex3f(0.2, 0.575, 0.0);
//	glEnd();
//	//Back Rectangle
//	glColor3f(0.48, 0.41, 0.60);
//	glBegin(GL_QUADS);
//	glVertex3f(0.2, 0.1, 0.5);
//	glVertex3f(0.9, 0.1, 0.5);
//	glVertex3f(0.9, 0.575, 0.5);
//	glVertex3f(0.2, 0.575, 0.5);
//	glEnd();
//	//Left Rectangle
//	glBegin(GL_QUADS);
//	glColor3f(1.0, 0.0, 0.0);//Red color
//	glVertex3f(0.2, 0.1, 0.5);
//	glColor3f(0.09, 0.01, 0.05);//darga mn dargat purple
//	glVertex3f(0.2, 0.1, 0.0);
//	glColor3f(0.07, 0.3, 0.46);//darga mn dargat el azr2
//	glVertex3f(0.2, 0.575, 0.0);
//	glColor3f(0.5, 0.64, 0.47);//darga mn green
//	glVertex3f(0.2, 0.575, 0.5);
//	glEnd();
//	//Right rectangle
//	glBegin(GL_QUADS);
//	glColor3f(1.0, 0.0, 1.0);//red
//	glVertex3f(0.9, 0.1, 0.5);
//	glColor3f(0.09, 0.01, 0.05);//darga mn dargat purple
//	glVertex3f(0.9, 0.1, 0.0);
//	glColor3f(0.07, 0.3, 0.46);//darga mn dargat el azr2
//	glVertex3f(0.9, 0.575, 0.0);
//	glColor3f(0.5, 0.64, 0.47);//darga mn green
//	glVertex3f(0.9, 0.575, 0.5);
//	glEnd();
//	//Left Triangle
//	glBegin(GL_TRIANGLES);
//	glColor3f(1.0, 0.0, 0.0);//point 1 is red
//	glVertex3f(0.9, 0.575, 0.0);
//	glColor3f(0.0, 0.0, 1.0);//point 2 is blue
//	glVertex3f(0.9, 0.575, 0.5);
//	glColor3f(1.0, 0.0, 1.0);//point 3 is purple
//	glVertex3f(0.9, 0.8, 0.25);
//	glEnd();
//	//right triangle
//	glBegin(GL_TRIANGLES);
//	glColor3f(1.0, 0.0, 0.0);//point 1 is red
//	glVertex3f(0.2, 0.575, 0.0);
//	glColor3f(0.0, 0.0, 1.0);//point 2 is blue
//	glVertex3f(0.2, 0.575, 0.5);
//	glColor3f(1.0, 0.0, 1.0);//point 3 is purple
//	glVertex3f(0.2, 0.8, 0.25);
//	glEnd();
//	//Roof 
//	glColor3f(0.08, 0.08, 0.2);
//	glBegin(GL_QUADS);
//	glVertex3f(0.2, 0.575, 0.0);
//	glVertex3f(0.9, 0.575, 0.0);
//	glVertex3f(0.9, 0.8, 0.25);
//	glVertex3f(0.2, 0.8, 0.25);
//	glEnd();
//	//Back roof
//	glColor3f(0.08, 0.08, 0.2);
//	glBegin(GL_QUADS);
//	glVertex3f(0.2, 0.575, 0.5);
//	glVertex3f(0.9, 0.575, 0.5);
//	glVertex3f(0.9, 0.8, 0.25);
//	glVertex3f(0.2, 0.8, 0.25);
//	glEnd();
//	//Window 1
//	glColor3f(0.98, 0.98, 0.97);
//	glBegin(GL_POLYGON);
//	glVertex3f(0.72, 0.25, 0.0);
//	glVertex3f(0.83, 0.25, 0.0);
//	glVertex3f(0.83, 0.4, 0.0);
//	glVertex3f(0.72, 0.4, 0.0);
//	glEnd();
//	//Window 2 
//	glColor3f(0.98, 0.98, 0.97);
//	glBegin(GL_POLYGON);
//	glVertex3f(0.27, 0.25, 0.0);
//	glVertex3f(0.38, 0.25, 0.0);
//	glVertex3f(0.38, 0.4, 0.0);
//	glVertex3f(0.27, 0.4, 0.0);
//	glEnd();
//	/*******************************************/
//	glPopMatrix();// Pop the old matrix without the transformations.
//	glutSwapBuffers();
//}
//void update(int value)
//{
//	angle += 1.0f;
//	if (angle > 360)
//	{
//		angle -= 360;
//	}
//	glutPostRedisplay();//marks the current window as needing to be redisplayed.
//		glutTimerFunc(25, update, 0);
//}
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);//initialize Glut
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB |
//		GLUT_DEPTH);// sets the initial display mode.
//	glutInitWindowSize(1000, 800);
//	glutCreateWindow("Home Sweet Home");//Title of Window
//	glutDisplayFunc(drawscene);
//	glutKeyboardFunc(handleKeyPress); //sets the keyboard callback for the current window.
//		glutReshapeFunc(handleResize);//sets the reshape callback for the new window
//		glutTimerFunc(25, update, 0);//registers a timer callback to be triggered in a specified number of milliseconds
//		initGL();
//	glutMainLoop();//tfdl trsm lhd ma kolo yo2f
//	return 0;
//}

//cube

//#include <GL/glut.h>
//void display() {
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//    // Draw each face of the cube using GL_QUADS
//    // 1. Green Top Face
//    glBegin(GL_QUADS);
//    glColor3f(0.0f, 1.0f, 0.0f); // Set color to green
//    // Vertices in clockwise order for correct face orientation
//    glVertex3f(1.0f, 1.0f, -1.0f); // Top-right
//    glVertex3f(-1.0f, 1.0f, -1.0f); // Top-left
//    glVertex3f(-1.0f, 1.0f, 1.0f); // Bottom-left
//    glVertex3f(1.0f, 1.0f, 1.0f); // Bottom-right
//    
//
//    // 2. Orange Bottom Face
//    
//    glColor3f(1.0f, 0.5f, 0.0f); // Set color to orange
//    glVertex3f(1.0f, -1.0f, -1.0f); // Bottom-right
//    glVertex3f(-1.0f, -1.0f, -1.0f); // Bottom-left
//    glVertex3f(-1.0f, -1.0f, 1.0f); // Top-left
//    glVertex3f(1.0f, -1.0f, 1.0f); // Top-right
// 
//
//    // 3. Red Front Face
//    
//    glColor3f(1.0f, 0.0f, 0.0f); // Set color to red
//    glVertex3f(1.0f, 1.0f, 1.0f); // Top-right
//    glVertex3f(-1.0f, 1.0f, 1.0f); // Top-left
//    glVertex3f(-1.0f, -1.0f, 1.0f); // Bottom-left
//    glVertex3f(1.0f, -1.0f, 1.0f); // Bottom-right
//    
//
//    // 4. Yellow Back Face
//    
//    glColor3f(1.0f, 1.0f, 0.0f); // Set color to yellow
//    glVertex3f(1.0f, 1.0f, -1.0f); // Top-right
//    glVertex3f(-1.0f, 1.0f, -1.0f); // Top-left
//    glVertex3f(-1.0f, -1.0f, -1.0f); // Bottom-left
//    glVertex3f(1.0f, -1.0f, -1.0f); // Bottom-right
// 
//
//    // 5. Blue Left Face
//    
//    glColor3f(0.0f, 0.0f, 1.0f); // Set color to blue
//    glVertex3f(-1.0f, 1.0f, 1.0f); // Top-right
//    glVertex3f(-1.0f, 1.0f, -1.0f); // Top-left
//    glVertex3f(-1.0f, -1.0f, -1.0f); // Bottom-left
//    glVertex3f(-1.0f, -1.0f, 1.0f); // Bottom-right
//   
//
//    // 6. Magenta Right Face
//    
//    glColor3f(1.0f, 0.0f, 1.0f); // Set color to magenta
//    glVertex3f(1.0f, 1.0f, -1.0f); // Top-right
//    glVertex3f(1.0f, 1.0f, 1.0f); // Top-left
//    glVertex3f(1.0f, -1.0f, 1.0f); // Bottom-left
//    glVertex3f(1.0f, -1.0f, -1.0f); // Bottom-right
//    
//    glEnd();
//    glutSwapBuffers(); // Swap front and back buffers for smooth animation
//
//}
//
//int main(int argc, char** argv) {
//    // Initialize GLUT and create window
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
//    glutCreateWindow("Colored Cube");
//
//    // Set viewport and projection
//    glViewport(0, 0, 500, 500);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    gluPerspective(60.0, 1.0, 1.0, 10.0);
//
//    // Set viewing transformation
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
//    gluLookAt(3.0, 3.0, 3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
//
//    // Register display function
//    glutDisplayFunc(display);
//
//    // Enable depth testing for proper visibility
//    glEnable(GL_DEPTH_TEST);
//
//    // Start GLUT main loop
//    glutMainLoop();
//
//    return 0;
//}

#include <GL/glut.h> // Include GLUT library for OpenGL
float angle = 1.0; // Speed Of Rotation
void display()
{
	glClearColor(1, 1, 1, 0); // Set background color to white
	glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer
	glColor3f(0, 0.5, 1); // Set color for drawing (RGB: 0, 0.5, 1 - Light Blue)
	glLineWidth(1.5); // Set line width for drawing
	glMatrixMode(GL_MODELVIEW); // Set the matrix mode to modelview
	glRotatef(angle, 0, 1, 0); // Rotate around Y-axis based on the 'angle'
	glutWireCube(30); // Draw a wireframe cube with size 30
	glColor3f(1, 0, 1); // Set color for drawing (RGB: 1, 0, 1 - Magenta)
	glutWireTeapot(20); // Draw a wireframe teapot with size 20
	glFlush(); // Flush the OpenGL pipeline
	glutSwapBuffers(); // Swap the front and back buffers for double buffering
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv); // Initialize GLUT
	glutInitWindowPosition(50, 60); // Set initial window position
	glutInitWindowSize(800, 800); // Set initial window size
	glutInitDisplayMode(GLUT_RGB | GL_DOUBLE); // Set display mode (RGB color and double buffering)
	glutCreateWindow("Rotate Cube"); // Create a window with the given title
	glutDisplayFunc(display); // Register the display callback function
	glutIdleFunc(display); // Set the idle callback function (same as display)
	glutPostRedisplay(); // Post a redisplay request
	glOrtho(-44.0, 44, -44.0, 44, -44.0, 44); // Set orthographic projection matrix
	glRotatef(1, 1, 0, 0); // Apply an initial rotation
	glutMainLoop(); // Enter the GLUT event-processing loop
	return 0; // Return from the main function
}