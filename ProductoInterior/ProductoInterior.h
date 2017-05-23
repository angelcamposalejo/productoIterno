#pragma once  //______________________________________ ProductoInterior.h  
#include "Resource.h"
class ProductoInterior : public Win::Dialog
{
public:
	ProductoInterior()
	{
	}
	~ProductoInterior()
	{
	}
	double ProductoInterno(const valarray<double>x, const valarray<double>y);
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Label lb2;
	Win::Textbox tbxX;
	Win::Textbox tbxY;
	Win::Label lb3;
	Win::Textbox tbxProducto;
	Win::Button btCalcular;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(222);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(114);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"ProductoInterior";
		lb1.Create(NULL, L"X", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 14, 7, 21, 25, hWnd, 1000);
		lb2.Create(NULL, L"Y", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 13, 42, 24, 25, hWnd, 1001);
		tbxX.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 35, 6, 104, 25, hWnd, 1002);
		tbxY.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 35, 42, 104, 25, hWnd, 1003);
		lb3.Create(NULL, L"X*Y", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 10, 82, 44, 25, hWnd, 1004);
		tbxProducto.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 53, 81, 134, 25, hWnd, 1005);
		btCalcular.Create(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 150, 7, 65, 28, hWnd, 1006);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		lb2.Font = fontArial014A;
		tbxX.Font = fontArial014A;
		tbxY.Font = fontArial014A;
		lb3.Font = fontArial014A;
		tbxProducto.Font = fontArial014A;
		btCalcular.Font = fontArial014A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) { btCalcular_Click(e); return true; }
		return false;
	}
};
