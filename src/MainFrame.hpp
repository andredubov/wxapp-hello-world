#ifndef MYFRAME_HPP
#define MYFRAME_HPP

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

enum
{
    ID_Hello = 1
};

class MainFrame : public wxFrame
{
public:
    MainFrame();
 
private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
};

#endif // MYFRAME_HPP