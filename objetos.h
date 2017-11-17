/***************************************************
*	Desarrolladora: Tatiana Pastorini
*	Grado en Ingeniería Informática, UGR, ETSIIT.
*	Práctica 1. Modelado en 3D con OpenGL, C++.
***************************************************/

#include <vertex.h>
#include <iostream>
#include <vector>

/*
*	Clase Objeto3D.
*	Contiene la creación de los objetos Cubo, Pirámide y Tetraedro.
*/

class Objeto3D{
private:
	/* Variables privadas de la clase */
	vector<_vertex3f> vertices;		// Vértices de un objeto
	vector<_vertex3i> triangulos;	// Caras de un objeto (formada por un triángulo)
	vector<_vertex2i> lados;		// Líneas que unen los vértices (para el modo línea)
	vector<_vertex3f> colores;		// Vector de colores para cada vértice

public:
	/* Constructor por parámetros con id del objeto a crear */
	Objeto3D(int obj);

	/* Métodos de creación de los objetos */
	void CrearCubo(float lado);
	void CrearPiramide(float lado);
	void CrearTetraedro(float lado);

	/* Métodos para acceder a la parte privada de cada objeto */
	vector<_vertex3f> getVertices();
	vector<_vertex3i> getTriangulos();
	vector<_vertex2i> getLados();
	vector<_vertex3f> getColores();
};
