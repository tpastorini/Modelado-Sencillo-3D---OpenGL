/***************************************************
*	Desarrolladora: Tatiana Pastorini
*	Grado en Ingeniería Informática, UGR, ETSIIT.
*	Práctica 1. Modelado en 3D con OpenGL, C++.
***************************************************/

#include <GL/glut.h>
#include <vector>
#include <vertex.h>

/*
*	Fichero .cc que contiene los modos de visualización de un Objeto3D.
*	Los modos disponibles son: Modo sólido, modo ajedrez, modo línea o alambre y modo puntos de un objeto 3D.
*/

/*
*	Método que dibuja el objeto en modo puntos.
*	@param vertices, es el vector con los vértices del objeto.
*/
void Dibujar_puntos(vector<_vertex3f> vertices);

/*
*	Método que dibuja el objeto en modo ajedrez.
*	@param vertices, es el vector con los vértices del objeto.
*	@param triangulos, es el vector con los triángulos que forman cada cara del objeto.
*/
void Dibujar_ajedrez(vector<_vertex3f> vertices, vector<_vertex3i> triangulos);

/*
*	Método que dibuja el objeto en modo línea o alambre.
*	@param vertices, es el vector con los vértices del objeto.
*	@param lados, es el vector con los lados que unen cada vértice con los demás.
*/
void Dibujar_alambre(vector<_vertex3f> vertices, vector<_vertex2i> lados);

/*
*	Método que dibuja el objeto en modo sólido.
*	@param vertices, es el vector con los vértices del objeto.
*	@param triangulos, es el vector con los triángulos que forman cada cara del objeto.
*/
void Dibujar_solido(vector<_vertex3f> vertices, vector<_vertex3i> triangulos);

/*
*	Método que crea un círculo en cada vértice del objeto3D.
*	@param radio, es el radio que va a tener el círculo.
*	@param modo, caracter que indica el modo de dibujo de los círculos.
*	@param vertices, es el vector con los vértices del objeto.
*	@param colores, es el vector con los colores para los círculos.
*/
void Circulo(float radio, char modo, vector<_vertex3f> vertices, vector<_vertex3f> colores);

/*
*	Método que dibuja un círculo en cada vértice del objeto3D.
*	@param radio, es el radio que va a tener el círculo.
*	@param cx, la coordenada x del vértice donde irá el círculo.
*	@param cy, la coordenada y del vértice donde irá el círculo.
*	@param cz, la coordenada z del vértice donde irá el círculo.
*	@param num_seg, para poder pintar cada coordenada correctamente.
*	@param modo, caracter que indica el modo de dibujo de los círculos.
*	@param colores, es el vector con los colores para los círculos.
*/
void Dibujo_Circulo(float radio, float cx, float cy, float cz, float num_seg, char modo, vector<_vertex3f> colores);

/*
*	Método de visualización de un objeto3D según el modo de dibujo.
*	@param modo, caracter que indica el modo de dibujo del objeto3D.
*	@param vertices, es el vector con los vértices del objeto.
*	@param triangulos, es el vector con los triángulos que forman cada cara del objeto.
*	@param lados, es el vector con los lados que unen cada vértice con los demás.
*	@param colores, es el vector con los colores para cada vértice.
*/
void Dibujar_objeto(char modo, vector<_vertex3f> vertices, vector<_vertex3i> triangulos, vector<_vertex2i> lados, vector<_vertex3f> colores);


					/***********************************************************/
					/* MÉTODOS DE AMPLIACIÓN PROPIA, NO PEDIDOS EN LA PRÁCTICA */
					/***********************************************************/

/*
*	Método que establece un color distinto por cada cara del objeto3D Pirámide.
*	@param vertices, es el vector con los vértices del objeto.
*	@param triangulos, es el vector con los triángulos que forman cada cara del objeto.
*/
void ColoresCarasPiramide(vector<_vertex3f> vertices, vector<_vertex3i> triangulos);

/*
*	Método que establece un color distinto por cada cara del objeto3D Cubo.
*	@param vertices, es el vector con los vértices del objeto.
*	@param triangulos, es el vector con los triángulos que forman cada cara del objeto.
*/
void ColoresCarasCubo(vector<_vertex3f> vertices, vector<_vertex3i> triangulos);

/*
*	Método que establece un color distinto por cada cara del objeto3D Pirámide.
*	@param vertices, es el vector con los vértices del objeto.
*	@param triangulos, es el vector con los triángulos que forman cada cara del objeto.
*/
void ColoresCarasCubo(vector<_vertex3f> vertices, vector<_vertex3i> triangulos);

/*
*	Método que establece un suavizado por cada cara del objeto3D.
*	@param vertices, es el vector con los vértices del objeto.
*	@param triangulos, es el vector con los triángulos que forman cada cara del objeto.
*/
void Smooth(vector<_vertex3f> vertices, vector<_vertex3i> triangulos);
