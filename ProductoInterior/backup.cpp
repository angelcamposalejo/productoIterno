#include "stdafx.h"  //________________________________________ ProductoInterior.cpp
#include "ProductoInterior.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	ProductoInterior app;
	return app.BeginDialog(IDI_ProductoInterior, hInstance);
}

void ProductoInterior::Window_Open(Win::Event& e)
{
}

void ProductoInterior::bt1_Click(Win::Event& e)
{
}

