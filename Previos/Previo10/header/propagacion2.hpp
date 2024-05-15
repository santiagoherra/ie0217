#include <wx/wx.h>

//Modificacion de la mainframe para poder ver la propagacion de eventos
class MainFrame : public wxFrame {
public:
    MainFrame(const wxString& title);

private:
    void OnAnyButtonClicked(wxCommandEvent& evt);
    void OnButton1Clicked(wxCommandEvent& evt);
    void OnButton2Clicked(wxCommandEvent& evt);
};
