#include <wx/wx.h>

//Modificacion de la mainframe para poder ver los eventos dinamicos
class MainFrame : public wxFrame {
public:
    MainFrame(const wxString& title);

private:
    void OnButtonClicked(wxCommandEvent& evt);
    void OnSliderChanged(wxCommandEvent& evt);
    void OnTextChanged(wxCommandEvent& evt);
    wxDECLARE_EVENT_TABLE();
};
