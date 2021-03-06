#ifndef GRAPHAM_H_
#define GRAPHAM_H_

// GraphAM.h:ADT interface for undirected/unweighted graphs

typedef int Vertex;                     // use int to describe vertex
typedef struct edge *Edge;   		// use a struct to describe edge
typedef struct grapham *GraphAM;	// use a struct to describe grpah

GraphAM newGraph(int);		        // build a new graph
void freeGraph(GraphAM);                // free the graph mallocs
void showGraph(GraphAM);                // show the graph

Edge newEdge(Vertex, Vertex);  		// create a new edge
void insertEdge(GraphAM, Edge);		// insert a new edge to the graph
void removeEdge(GraphAM, Edge);         // remove an edge from the graph
void showEdge(Edge);                    // print an edge
int isEdge(GraphAM, Edge);   		// make sure if specific edge is in graph
int validV(GraphAM, Vertex);            // make sure if vertex in graph or not
#endif