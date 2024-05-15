#include "../header/MainFrame.hpp"
#include <wx/wx.h>

//Base de la mainframe para poder agregar opciones a dicha pantalla.
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {}
