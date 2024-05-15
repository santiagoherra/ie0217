#include <wx/wx.h>

//Modificacion de la mainframe para poder ver las funciones de mouse
class MainFrame : public wxFrame {
public:
    MainFrame(const wxString& title);

private:
    void OnMouseEvent(wxMouseEvent& evt);
};
