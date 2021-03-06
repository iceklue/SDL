#pragma once
#include <GL/glew.h>

class Shader
{
public:
	Shader(const std::string& vertexFile, const std::string& fragmentFile);
	virtual ~Shader();

	void UseProgram() const;

	void LoadInt(GLuint location, int value);
	void LoadFloat(GLuint location, int value);

	void LoadVector2(GLuint location, const Vector2& vect);
	void LoadVector3(GLuint location, const Vector3& vect);
	void LoadVector4(GLuint location, const Vector4& vect);

	void LoadMatrix4(GLuint location, const Matrix4& matrix);

protected:
	virtual void GetUniforms() = 0;
	GLuint m_id;
};

