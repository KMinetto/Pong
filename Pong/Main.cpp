/* includes */
#include <iostream>
#include "MyWindow.h"

/* namespaces */
using namespace std;
using namespace sf;

/* Global variables */

int main()
{
	MyWindow window(1900, 1000, "Pong");
	window.createWindow();

	return EXIT_SUCCESS;
}