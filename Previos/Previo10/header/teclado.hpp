#include <wx/wx.h>

//Modificacion de la mainframe para poder ver los eventos del teclado
class MainFrame : public wxFrame {
public:
    MainFrame(const wxString& title);

private:
    void OnKeyEvent(wxKeyEvent& evt);
};
