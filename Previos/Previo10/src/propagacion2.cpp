#include "propagacion2.hpp"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this);
    wxButton* button1 = new wxButton(panel, wxID_ANY, "Button 1", wxPoint(300, 275), wxSize(200, 50));
    wxButton* button2 = new wxButton(panel, wxID_ANY, "Button 2", wxPoint(300, 350), wxSize(200, 50));

    this->Bind(wxEVT_BUTTON, &MainFrame::OnAnyButtonClicked, this);
    button1->Bind(wxEVT_BUTTON, &MainFrame::OnButton1Clicked, this);
    button2->Bind(wxEVT_BUTTON, &MainFrame::OnButton2Clicked, this);

    CreateStatusBar();
}

//Propagacion de eventos para mostrar la salida de cuando se preciona un boton
void MainFrame::OnAnyButtonClicked(wxCommandEvent& evt) {
    wxLogMessage("Button Clicked");
}

void MainFrame::OnButton1Clicked(wxCommandEvent& evt) {
    wxLogStatus("Button 1 Clicked");
}

void MainFrame::OnButton2Clicked(wxCommandEvent& evt) {
    wxLogStatus("Button 2 Clicked");
}
