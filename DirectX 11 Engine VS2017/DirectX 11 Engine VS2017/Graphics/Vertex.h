#pragma once
#include <DirectXMath.h>

struct Vertex
{
	Vertex() {}
	Vertex(float x, float y, float z, float u, float v, float nX, float nY, float nZ)
		: pos(x, y, z), texCoord(u, v), normal(nX, nY, nZ) {}

	DirectX::XMFLOAT3 pos;
	DirectX::XMFLOAT2 texCoord;
	DirectX::XMFLOAT3 normal;

};