/* includes */
#include <iostream>
#include "MyWindow.h"
#include "Player.h"

/* namespaces */
using namespace std;
using namespace sf;

/* Global variables */
const int WIN_WIDTH = 1900;
const int WIN_HEIGHT = 1000;
const string WIN_TITLE = "Pong";

int main()
{
	MyWindow window(WIN_WIDTH, WIN_HEIGHT, WIN_TITLE);
	window.createWindow();

	return EXIT_SUCCESS;
}