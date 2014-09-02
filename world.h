#include <GL/glew.h>
#include <GL/glut.h>
#include <iostream>
#include <string.h>

typedef struct _vertex {
	GLfloat vx, vy, vz;
	GLfloat nx, ny, nz;
	GLfloat tu, tv;
} Vertex;

typedef struct _chunkData {
	GLuint *indices;
	GLuint vboHandler;
	GLuint indexHandler;
	unsigned int size;
} ChunkData;

typedef struct _TextureData {
	GLuint texID;
	unsigned char *texData;
	int width;
	int height;
} TextureData;

ChunkData createChunk(GLfloat offsetX, GLfloat offsetY, GLfloat offsetZ);
void drawChunk(ChunkData chunk);
void drawChunks(ChunkData *chunks, int size);

void removeCube(ChunkData &chunk, int x, int y, int z);
void addCube(ChunkData &chunk, int x, int y, int z);

TextureData loadTextureFromFile(const char *fileName);