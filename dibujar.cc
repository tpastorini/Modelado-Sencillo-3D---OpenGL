/***************************************************
*	Desarrolladora: Tatiana Pastorini
*	Grado en Ingeniería Informática, UGR, ETSIIT.
*	Práctica 1. Modelado en 3D con OpenGL, C++.
***************************************************/

#include <dibujar.h>
#include <iostream>

using namespace std;


void Dibujar_puntos(vector<_vertex3f> vertices){
	glPointSize(5);
	glBegin( GL_POINTS );
		for(unsigned int i=0; i<vertices.size(); i++){
			glColor3f(0,0.75,1);
			glVertex3f(vertices[i].x,vertices[i].y,vertices[i].z);
		}
	glEnd();
}

void Dibujar_ajedrez(vector<_vertex3f> vertices, vector<_vertex3i> triangulos){
	glBegin( GL_TRIANGLES );
		for(unsigned int i=0; i<triangulos.size(); i++){
			if(i%2 == 0){
				glColor3f(0.5,1,0);
			}
			else{
				glColor3f(1,0,0.25);
			}

			glVertex3f(vertices[triangulos[i]._0].x,vertices[triangulos[i]._0].y,vertices[triangulos[i]._0].z);
			glVertex3f(vertices[triangulos[i]._1].x,vertices[triangulos[i]._1].y,vertices[triangulos[i]._1].z);
			glVertex3f(vertices[triangulos[i]._2].x,vertices[triangulos[i]._2].y,vertices[triangulos[i]._2].z);
		}
	glEnd();
}

void Dibujar_alambre(vector<_vertex3f> vertices, vector<_vertex2i> lados){
	glBegin( GL_LINES );
		for(unsigned int i=0; i<lados.size(); i++){
			glColor3f(0.5,1,0);
			glVertex3f(vertices[lados[i]._0].x,vertices[lados[i]._0].y,vertices[lados[i]._0].z);
			glVertex3f(vertices[lados[i]._1].x,vertices[lados[i]._1].y,vertices[lados[i]._1].z);
		}
	glEnd();
}

void Dibujar_solido(vector<_vertex3f> vertices, vector<_vertex3i> triangulos){
	glBegin( GL_TRIANGLES );
		for(unsigned int i=0; i<triangulos.size(); i++){
			glColor3f(1,0,1);
			glVertex3f(vertices[triangulos[i]._0].x,vertices[triangulos[i]._0].y,vertices[triangulos[i]._0].z);
			glVertex3f(vertices[triangulos[i]._1].x,vertices[triangulos[i]._1].y,vertices[triangulos[i]._1].z);
			glVertex3f(vertices[triangulos[i]._2].x,vertices[triangulos[i]._2].y,vertices[triangulos[i]._2].z);
		}
	glEnd();
}

void ColoresCarasPiramide(vector<_vertex3f> vertices, vector<_vertex3i> triangulos){
	glBegin( GL_TRIANGLES );

			glColor3f(0,1,1);
			glVertex3f(vertices[triangulos[0]._0].x,vertices[triangulos[0]._0].y,vertices[triangulos[0]._0].z);
			glVertex3f(vertices[triangulos[0]._1].x,vertices[triangulos[0]._1].y,vertices[triangulos[0]._1].z);
			glVertex3f(vertices[triangulos[0]._2].x,vertices[triangulos[0]._2].y,vertices[triangulos[0]._2].z);

			glColor3f(0,0,1);
			glVertex3f(vertices[triangulos[1]._0].x,vertices[triangulos[1]._0].y,vertices[triangulos[1]._0].z);
			glVertex3f(vertices[triangulos[1]._1].x,vertices[triangulos[1]._1].y,vertices[triangulos[1]._1].z);
			glVertex3f(vertices[triangulos[1]._2].x,vertices[triangulos[1]._2].y,vertices[triangulos[1]._2].z);

			glColor3f(1,0,1);
			glVertex3f(vertices[triangulos[2]._0].x,vertices[triangulos[2]._0].y,vertices[triangulos[2]._0].z);
			glVertex3f(vertices[triangulos[2]._1].x,vertices[triangulos[2]._1].y,vertices[triangulos[2]._1].z);
			glVertex3f(vertices[triangulos[2]._2].x,vertices[triangulos[2]._2].y,vertices[triangulos[2]._2].z);

			glColor3f(0,0,0);
			glVertex3f(vertices[triangulos[3]._0].x,vertices[triangulos[3]._0].y,vertices[triangulos[3]._0].z);
			glVertex3f(vertices[triangulos[3]._1].x,vertices[triangulos[3]._1].y,vertices[triangulos[3]._1].z);
			glVertex3f(vertices[triangulos[3]._2].x,vertices[triangulos[3]._2].y,vertices[triangulos[3]._2].z);

			glColor3f(1,0,0);
			glVertex3f(vertices[triangulos[4]._0].x,vertices[triangulos[4]._0].y,vertices[triangulos[4]._0].z);
			glVertex3f(vertices[triangulos[4]._1].x,vertices[triangulos[4]._1].y,vertices[triangulos[4]._1].z);
			glVertex3f(vertices[triangulos[4]._2].x,vertices[triangulos[4]._2].y,vertices[triangulos[4]._2].z);

			glColor3f(1,1,0);
			glVertex3f(vertices[triangulos[5]._0].x,vertices[triangulos[5]._0].y,vertices[triangulos[5]._0].z);
			glVertex3f(vertices[triangulos[5]._1].x,vertices[triangulos[5]._1].y,vertices[triangulos[5]._1].z);
			glVertex3f(vertices[triangulos[5]._2].x,vertices[triangulos[5]._2].y,vertices[triangulos[5]._2].z);

	glEnd();

}

void ColoresCarasCubo(vector<_vertex3f> vertices, vector<_vertex3i> triangulos){
		glBegin( GL_TRIANGLES );

			glColor3f(0,1,1);
			glVertex3f(vertices[triangulos[0]._0].x,vertices[triangulos[0]._0].y,vertices[triangulos[0]._0].z);
			glVertex3f(vertices[triangulos[0]._1].x,vertices[triangulos[0]._1].y,vertices[triangulos[0]._1].z);
			glVertex3f(vertices[triangulos[0]._2].x,vertices[triangulos[0]._2].y,vertices[triangulos[0]._2].z);

			glColor3f(0,0,1);
			glVertex3f(vertices[triangulos[1]._0].x,vertices[triangulos[1]._0].y,vertices[triangulos[1]._0].z);
			glVertex3f(vertices[triangulos[1]._1].x,vertices[triangulos[1]._1].y,vertices[triangulos[1]._1].z);
			glVertex3f(vertices[triangulos[1]._2].x,vertices[triangulos[1]._2].y,vertices[triangulos[1]._2].z);

			glColor3f(1,0,1);
			glVertex3f(vertices[triangulos[2]._0].x,vertices[triangulos[2]._0].y,vertices[triangulos[2]._0].z);
			glVertex3f(vertices[triangulos[2]._1].x,vertices[triangulos[2]._1].y,vertices[triangulos[2]._1].z);
			glVertex3f(vertices[triangulos[2]._2].x,vertices[triangulos[2]._2].y,vertices[triangulos[2]._2].z);

			glColor3f(0,0,0);
			glVertex3f(vertices[triangulos[3]._0].x,vertices[triangulos[3]._0].y,vertices[triangulos[3]._0].z);
			glVertex3f(vertices[triangulos[3]._1].x,vertices[triangulos[3]._1].y,vertices[triangulos[3]._1].z);
			glVertex3f(vertices[triangulos[3]._2].x,vertices[triangulos[3]._2].y,vertices[triangulos[3]._2].z);

			glColor3f(1,0,0);
			glVertex3f(vertices[triangulos[4]._0].x,vertices[triangulos[4]._0].y,vertices[triangulos[4]._0].z);
			glVertex3f(vertices[triangulos[4]._1].x,vertices[triangulos[4]._1].y,vertices[triangulos[4]._1].z);
			glVertex3f(vertices[triangulos[4]._2].x,vertices[triangulos[4]._2].y,vertices[triangulos[4]._2].z);

			glColor3f(1,1,0);
			glVertex3f(vertices[triangulos[5]._0].x,vertices[triangulos[5]._0].y,vertices[triangulos[5]._0].z);
			glVertex3f(vertices[triangulos[5]._1].x,vertices[triangulos[5]._1].y,vertices[triangulos[5]._1].z);
			glVertex3f(vertices[triangulos[5]._2].x,vertices[triangulos[5]._2].y,vertices[triangulos[5]._2].z);

			glColor3f(1,1,0);
			glVertex3f(vertices[triangulos[6]._0].x,vertices[triangulos[6]._0].y,vertices[triangulos[6]._0].z);
			glVertex3f(vertices[triangulos[6]._1].x,vertices[triangulos[6]._1].y,vertices[triangulos[6]._1].z);
			glVertex3f(vertices[triangulos[6]._2].x,vertices[triangulos[6]._2].y,vertices[triangulos[6]._2].z);

			glColor3f(0,0,1);
			glVertex3f(vertices[triangulos[7]._0].x,vertices[triangulos[7]._0].y,vertices[triangulos[7]._0].z);
			glVertex3f(vertices[triangulos[7]._1].x,vertices[triangulos[7]._1].y,vertices[triangulos[7]._1].z);
			glVertex3f(vertices[triangulos[7]._2].x,vertices[triangulos[7]._2].y,vertices[triangulos[7]._2].z);

			glColor3f(1,0,1);
			glVertex3f(vertices[triangulos[8]._0].x,vertices[triangulos[8]._0].y,vertices[triangulos[8]._0].z);
			glVertex3f(vertices[triangulos[8]._1].x,vertices[triangulos[8]._1].y,vertices[triangulos[8]._1].z);
			glVertex3f(vertices[triangulos[8]._2].x,vertices[triangulos[8]._2].y,vertices[triangulos[8]._2].z);

			glColor3f(0,0,0);
			glVertex3f(vertices[triangulos[9]._0].x,vertices[triangulos[9]._0].y,vertices[triangulos[9]._0].z);
			glVertex3f(vertices[triangulos[9]._1].x,vertices[triangulos[9]._1].y,vertices[triangulos[9]._1].z);
			glVertex3f(vertices[triangulos[9]._2].x,vertices[triangulos[9]._2].y,vertices[triangulos[9]._2].z);

			glColor3f(1,0,0);
			glVertex3f(vertices[triangulos[10]._0].x,vertices[triangulos[10]._0].y,vertices[triangulos[10]._0].z);
			glVertex3f(vertices[triangulos[10]._1].x,vertices[triangulos[10]._1].y,vertices[triangulos[10]._1].z);
			glVertex3f(vertices[triangulos[10]._2].x,vertices[triangulos[10]._2].y,vertices[triangulos[10]._2].z);

			glColor3f(1,1,0);
			glVertex3f(vertices[triangulos[11]._0].x,vertices[triangulos[11]._0].y,vertices[triangulos[11]._0].z);
			glVertex3f(vertices[triangulos[11]._1].x,vertices[triangulos[11]._1].y,vertices[triangulos[11]._1].z);
			glVertex3f(vertices[triangulos[11]._2].x,vertices[triangulos[11]._2].y,vertices[triangulos[11]._2].z);

	glEnd();
}

void ColoresTriangulos(vector<_vertex3f> vertices, vector<_vertex3i> triangulos){
	glBegin( GL_TRIANGLES );
		for(unsigned int i=0; i<triangulos.size(); i++){
			if(i%triangulos.size() == 0) glColor3f(0.4,0.4,0.4);
			if(i%triangulos.size() == 1) glColor3f(1,0,1);
			if(i%triangulos.size() == 2) glColor3f(0.3,0,0.1);
			if(i%triangulos.size() == 3) glColor3f(0,1,1);
			if(i%triangulos.size() == 4) glColor3f(1,1,0);
			if(i%triangulos.size() == 5) glColor3f(1,0,0);
			if(i%triangulos.size() == 6) glColor3f(0.4,0.2,0.1);
			if(i%triangulos.size() == 7) glColor3f(0,1,0);
			if(i%triangulos.size() == 8) glColor3f(1,0.5,0.5);
			if(i%triangulos.size() == 9) glColor3f(1,0,0);
			if(i%triangulos.size() == 10) glColor3f(0,1,1);
			if(i%triangulos.size() == 11) glColor3f(0.7,0.2,0.2);

			glVertex3f(vertices[triangulos[i]._0].x,vertices[triangulos[i]._0].y,vertices[triangulos[i]._0].z);
			glVertex3f(vertices[triangulos[i]._1].x,vertices[triangulos[i]._1].y,vertices[triangulos[i]._1].z);
			glVertex3f(vertices[triangulos[i]._2].x,vertices[triangulos[i]._2].y,vertices[triangulos[i]._2].z);
		}
	glEnd();

}

void Smooth(vector<_vertex3f> vertices, vector<_vertex3i> triangulos){
	glShadeModel(GL_SMOOTH);
	glBegin( GL_TRIANGLES );
		for(unsigned int i=0; i<triangulos.size(); i++){
			glColor3f(1,0,1);
			glVertex3f(vertices[triangulos[i]._0].x,vertices[triangulos[i]._0].y,vertices[triangulos[i]._0].z);
			glColor3f(0,1,1);
			glVertex3f(vertices[triangulos[i]._1].x,vertices[triangulos[i]._1].y,vertices[triangulos[i]._1].z);
			glColor3f(1,1,0);
			glVertex3f(vertices[triangulos[i]._2].x,vertices[triangulos[i]._2].y,vertices[triangulos[i]._2].z);
		}
	glEnd();

}

/* MODIFICACION DEFENSA DE LA PRÁCTICA */
//PINTO SOLO LOS CIRCULOS

void Circulo(float radio, char modo, vector<_vertex3f> vertices, vector<_vertex3f> colores){
	for(int i=0; i<vertices.size(); i++){
		Dibujo_Circulo(radio, vertices[i].x, vertices[i].y, vertices[i].z, 10, modo, colores);
	}
}

void Dibujo_Circulo(float radio, float cx, float cy, float cz, float num_seg, char modo, vector<_vertex3f> colores){
	glBegin(GL_POLYGON);
		for(int i=0; i<num_seg; i++){
			glColor3f(colores[i].r, colores[i].g, colores[i].b);
			glVertex3f(cx+radio*cos(2.0*M_PI*i/num_seg), 
					   cy+radio*sin(2.0*M_PI*i/num_seg),
					   cz);
		}
	glEnd();
}

/* FIN MODIFICACION*/

void Dibujar_objeto(char modo, vector<_vertex3f> vertices, vector<_vertex3i> triangulos, vector<_vertex2i> lados, vector<_vertex3f> colores){

	Circulo(0.5, modo, vertices, colores);

	switch(modo){
		case 'P':
			Dibujar_puntos(vertices);
			break;
		case 'A':
			Dibujar_ajedrez(vertices, triangulos);
			break;
		case 'L':
			Dibujar_alambre(vertices, lados);
			break;
		case 'S':
			Dibujar_solido(vertices, triangulos);
			break;
		case 'M':
			ColoresTriangulos(vertices, triangulos);
			break;
		case 'H':
			Smooth(vertices, triangulos);
			break;
		/*case 'C':
			Circulo(0.5, modo, vertices, colores);
			break;*/
	}
}