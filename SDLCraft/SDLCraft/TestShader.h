#pragma once
#include "Shader.h"
class TestShader : public Shader
{
public:
	TestShader( const std::string& VERTEX_FILE = "VertexShaderTest", 
				const std::string& FRAGMENT_FILE = "FragmentShaderTest" );

	GLuint m_locTime;
	GLuint m_locVel;

protected:
	void BindAttributes() override;
	void GetUniforms() override;
};