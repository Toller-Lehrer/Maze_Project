#include <glew.h>
#include <glfw3.h>
#include <iostream>

using namespace std;

void error_callback(int error, const char* description << endl) {
	cerr << "Error: " << description << endl;
}

int main() {
	glfwSetErrorCallback(error_callback);

	if (!glfwInit()) {
		glfwTerminate();
		return -1;
	}

	glfMakeContextCurrent(window);

	glewExperimental = GL_TRUE;

	if (glewInit() != GLEW_OK) {
		cerr << "Failed to Initialize GLEW" << endl;
		return -1;
	}

	while (!glfwWindowShouldClose(window)) {
		glClearColor(1.0f, 1.0f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		GLFWSwappBuffers(window);
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}