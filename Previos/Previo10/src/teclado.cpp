#include "../header/teclado.hpp"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this);

    CreateStatusBar();

    panel->Bind(wxEVT_KEY_DOWN, &MainFrame::OnKeyEvent, this);
}

void MainFrame::OnKeyEvent(wxKeyEvent& evt) {
    wxChar keyChar = evt.GetUnicodeKey();
    if (keyChar == WXK_NONE) {
        int keyCode = evt.GetKeyCode();
        wxLogStatus("Key Event %d", keyCode);
    } else {
        wxLogStatus("Key Event %c", keyChar);
    }
}
