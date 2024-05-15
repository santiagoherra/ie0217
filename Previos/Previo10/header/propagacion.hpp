#include <wx/wx.h>

//Modificacion de la mainframe para poder ver la propagacion de eventos
class MainFrame : public wxFrame {
public:
    MainFrame(const wxString& title);

private:
    void OnButtonClicked(wxCommandEvent& evt);
};
