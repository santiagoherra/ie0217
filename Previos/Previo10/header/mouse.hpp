#include <wx/wx.h>

class MainFrame : public wxFrame {
public:
    MainFrame(const wxString& title);

private:
    void OnMouseEvent(wxMouseEvent& evt);
};
