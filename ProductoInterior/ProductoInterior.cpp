#include "stdafx.h"  //________________________________________ ProductoInterior.cpp
#include "ProductoInterior.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	ProductoInterior app;
	return app.BeginDialog(IDI_ProductoInterior, hInstance);
}

void ProductoInterior::Window_Open(Win::Event& e)
{
}

void ProductoInterior::btCalcular_Click(Win::Event& e)
{
	valarray<double>x, y;
	Sys::Convert::ToVector(tbxX.Text, x);
	Sys::Convert::ToVector(tbxY.Text, y);
	tbxProducto.DoubleValue = ProductoInterno(x, y);
}

double ProductoInterior::ProductoInterno(const valarray<double>x, const valarray<double>y)
{
	double product=0;
	int cont = x.size();
	for (int i = 0; i < cont; i++)
	{
		product += (x[i]*y[i]);
	}
	return product;
}
