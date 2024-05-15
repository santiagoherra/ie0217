#include "../header/mouse.hpp"
#include <wx/wx.h>

//Modificacion del mainframe para poder tener los dos eventos conel movimiento del mouse
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this);
    wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(300, 250), wxSize(200, 100));

    wxStatusBar* statusBar = CreateStatusBar();
    statusBar->SetDoubleBuffered(true);

    //Se tiene el panel y el botton que funcionan con el movimiento del mouse
    panel->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this);
    button->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this);
}

//Obtiene la posicion del mouse
void MainFrame::OnMouseEvent(wxMouseEvent& evt) {
    wxPoint mousePos = evt.GetPosition();
    wxString message = wxString::Format("Mouse Event Detected! (x=%d y=%d)", mousePos.x, mousePos.y);
    wxLogStatus(message);
}
