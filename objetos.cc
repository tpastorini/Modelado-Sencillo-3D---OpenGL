/***************************************************
*	Desarrolladora: Tatiana Pastorini
*	Grado en Ingeniería Informática, UGR, ETSIIT.
*	Práctica 1. Modelado en 3D con OpenGL, C++.
***************************************************/

#include <objetos.h>

using namespace std;

/*
*	Constructor por parámetros.
*	@param obj indica el objeto a crear.
*	1 = Pirámide
*	2 = Cubo
*	3 = Tetraedro
*/

Objeto3D::Objeto3D(int obj){

	if(obj == 1)
		CrearPiramide(4);
	else if(obj == 2)
		CrearCubo(3);
	else
		CrearTetraedro(4);
}

/*
*	Método que construye la pirámide.
*	@param lado indica el tamaño del lado.
*/

void Objeto3D::CrearPiramide(float lado){
	// Inicializo los elementos del objeto
	vertices.resize(5);
	triangulos.resize(6);
	lados.resize(9);
	colores.resize(5);

	// Relleno del vector de vértices
	vertices[0].x = -lado;	vertices[1].x = lado;
	vertices[0].y = -lado;	vertices[1].y = -lado;
	vertices[0].z = lado;	vertices[1].z = lado;

	vertices[2].x = lado;	vertices[3].x = -lado;
	vertices[2].y = -lado;	vertices[3].y = -lado;
	vertices[2].z = -lado;	vertices[3].z = -lado;

	vertices[4].x = 0;
	vertices[4].y = lado;
	vertices[4].z = 0;

	// Relleno del vector de triángulos
	triangulos[0]._0 = 0;	triangulos[1]._0 = 3;
	triangulos[0]._1 = 1;	triangulos[1]._1 = 0;
	triangulos[0]._2 = 4;	triangulos[1]._2 = 4;

	triangulos[2]._0 = 3;	triangulos[3]._0 = 2;
	triangulos[2]._1 = 2;	triangulos[3]._1 = 1;
	triangulos[2]._2 = 4;	triangulos[3]._2 = 4;

	triangulos[4]._0 = 3;	triangulos[5]._0 = 3;
	triangulos[4]._1 = 1;	triangulos[5]._1 = 2;
	triangulos[4]._2 = 0;	triangulos[5]._2 = 1;

	// Relleno del vector de lados
	lados[0]._0 = 0;	lados[1]._0 = 1;
	lados[0]._1 = 1;	lados[1]._1 = 2;

	lados[2]._0 = 2;	lados[3]._0 = 3;
	lados[2]._1 = 3;	lados[3]._1 = 0;

	lados[4]._0 = 0;	lados[5]._0 = 1;
	lados[4]._1 = 4;	lados[5]._1 = 4;

	lados[6]._0 = 2;	lados[7]._0 = 3;
	lados[6]._1 = 4;	lados[7]._1 = 4;

	lados[8]._0 = 3;
	lados[8]._1 = 1;

	// Relleno del vector de colores
	colores[0].r = 1;	colores[1].r = 0;
	colores[0].g = 0;	colores[1].g = 0.5;
	colores[0].b = 1;	colores[1].b = 0.5;

	colores[2].r = 1;	colores[3].r = 0;
	colores[2].g = 1;	colores[3].g = 0;
	colores[2].b = 0;	colores[3].b = 0;

	colores[4].r = 0.1;
	colores[4].g = 0.9;
	colores[4].b = 0.8;
}


/*
*	Método que construye el cubo.
*	@param lado indica el tamaño del lado.
*/

void Objeto3D::CrearCubo(float lado){
	// Inicializo los elementos del objeto
	vertices.resize(8);
	triangulos.resize(12);
	lados.resize(18);
	colores.resize(8);

	// Relleno del vector de vértices

	vertices[0].x = -lado;	vertices[1].x = lado;
	vertices[0].y = -lado;	vertices[1].y = -lado;
	vertices[0].z = -lado;	vertices[1].z = -lado;

	vertices[2].x = lado;	vertices[3].x = -lado;
	vertices[2].y = -lado;	vertices[3].y = -lado;
	vertices[2].z = lado;	vertices[3].z = lado;

	vertices[4].x = -lado;	vertices[5].x = lado;
	vertices[4].y = lado;	vertices[5].y = lado;
	vertices[4].z = -lado;	vertices[5].z = -lado;

	vertices[6].x = lado;	vertices[7].x = -lado;
	vertices[6].y = lado;	vertices[7].y = lado;
	vertices[6].z = lado;	vertices[7].z = lado;


	// Relleno del vector de triángulos

	triangulos[0]._0 = 0;	triangulos[1]._0 = 0;
	triangulos[0]._1 = 1;	triangulos[1]._1 = 5;
	triangulos[0]._2 = 5;	triangulos[1]._2 = 4;

	triangulos[2]._0 = 2;	triangulos[3]._0 = 2;
	triangulos[2]._1 = 3;	triangulos[3]._1 = 7;
	triangulos[2]._2 = 7;	triangulos[3]._2 = 6;

	triangulos[4]._0 = 1;	triangulos[5]._0 = 1;
	triangulos[4]._1 = 2;	triangulos[5]._1 = 6;
	triangulos[4]._2 = 6;	triangulos[5]._2 = 5;

	triangulos[6]._0 = 0;	triangulos[7]._0 = 0;
	triangulos[6]._1 = 4;	triangulos[7]._1 = 7;
	triangulos[6]._2 = 7;	triangulos[7]._2 = 3;

	triangulos[8]._0 = 0;	triangulos[9]._0 = 0;
	triangulos[8]._1 = 1;	triangulos[9]._1 = 2;
	triangulos[8]._2 = 2;	triangulos[9]._2 = 3;

	triangulos[10]._0 = 4;	triangulos[11]._0 = 4;
	triangulos[10]._1 = 5;	triangulos[11]._1 = 6;
	triangulos[10]._2 = 6;	triangulos[11]._2 = 7;

	
	// Relleno del vector de lados

	lados[0]._0 = 0;	lados[1]._0 = 0;
	lados[0]._1 = 1;	lados[1]._1 = 2;

	lados[2]._0 = 0;	lados[3]._0 = 0;
	lados[2]._1 = 3;	lados[3]._1 = 4;

	lados[4]._0 = 1;	lados[5]._0 = 1;
	lados[4]._1 = 4;	lados[5]._1 = 5;

	lados[6]._0 = 1;	lados[7]._0 = 1;
	lados[6]._1 = 6;	lados[7]._1 = 2;

	lados[8]._0 = 3;	lados[9]._0 = 3;
	lados[8]._1 = 4;	lados[9]._1 = 7;

	lados[10]._0 = 3;	lados[11]._0 = 5;
	lados[10]._1 = 6;	lados[11]._1 = 6;

	lados[12]._0 = 4;	lados[13]._0 = 4;
	lados[12]._1 = 5;	lados[13]._1 = 7;

	lados[14]._0 = 4;	lados[15]._0 = 6;
	lados[14]._1 = 6;	lados[15]._1 = 7; 

	lados[16]._0 = 2;	lados[17]._0 = 2;
	lados[16]._1 = 3;	lados[17]._1 = 6;

	// Relleno del vector de colores

	colores[0].r = 1;	colores[1].r = 0;
	colores[0].g = 0;	colores[1].g = 0.5;
	colores[0].b = 1;	colores[1].b = 0.5;

	colores[2].r = 1;	colores[3].r = 0;
	colores[2].g = 1;	colores[3].g = 0;
	colores[2].b = 0;	colores[3].b = 0;

	colores[4].r = 0.1;	colores[5].r = 0;
	colores[4].g = 0.9;	colores[5].g = 0;
	colores[4].b = 0.8;	colores[5].b = 1;

	colores[6].r = 1;	colores[7].r = 0.7;
	colores[6].g = 0.5;	colores[7].g = 0.6;
	colores[6].b = 0;	colores[7].b = 0;
}

/*
*	Método que construye el tetraedro.
*	@param lado indica el tamaño del lado.
*/

void Objeto3D::CrearTetraedro(float lado){
	// Inicializo los elementos del objeto
	vertices.resize(4);
	triangulos.resize(4);
	lados.resize(6);
	colores.resize(4);

	// Relleno del vector de vértices
	vertices[0].x = 0;		vertices[1].x = -lado;
	vertices[0].y = lado;	vertices[1].y = -lado;
	vertices[0].z = 0;		vertices[1].z = -lado;

	vertices[2].x = 0;		vertices[3].x = lado;
	vertices[2].y = -lado;	vertices[3].y = -lado;
	vertices[2].z = lado;	vertices[3].z = -lado;

	// Relleno del vector de triángulos
	triangulos[0]._0 = 0;	triangulos[1]._0 = 1;
	triangulos[0]._1 = 1;	triangulos[1]._1 = 2;
	triangulos[0]._2 = 3;	triangulos[1]._2 = 3;

	triangulos[2]._0 = 0;	triangulos[3]._0 = 0;
	triangulos[2]._1 = 2;	triangulos[3]._1 = 1;
	triangulos[2]._2 = 3;	triangulos[3]._2 = 2;

	// Relleno del vector de líneas
	lados[0]._0 = 0;	lados[1]._0 = 0;
	lados[0]._1 = 1;	lados[1]._1 = 2;

	lados[2]._0 = 0;	lados[3]._0 = 1;
	lados[2]._1 = 3;	lados[3]._1 = 2;

	lados[4]._0 = 1;	lados[5]._0 = 2;
	lados[4]._1 = 3;	lados[5]._1 = 3;

	// Relleno del vector de colores
	colores[0].r = 1;	colores[1].r = 0;
	colores[0].g = 0;	colores[1].g = 0.5;
	colores[0].b = 1;	colores[1].b = 0.5;

	colores[2].r = 1;	colores[3].r = 0;
	colores[2].g = 1;	colores[3].g = 0;
	colores[2].b = 0;	colores[3].b = 0;
}

/*
*	Método que devuelve los vértices del objeto.
*/

vector<_vertex3f> Objeto3D::getVertices(){
	return vertices;
}

/*
*	Método que devuelve los triángulos del objeto.
*/
vector<_vertex3i> Objeto3D::getTriangulos(){
	return triangulos;
}

/*
*	Método que devuelve los lados del objeto.
*/
vector<_vertex2i> Objeto3D::getLados(){
	return lados;
}

/*
*	Método que devuelve los colores de los vértices del objeto.
*/
vector<_vertex3f> Objeto3D::getColores(){
	return colores;
}