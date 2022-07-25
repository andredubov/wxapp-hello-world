#include "App.hpp"
#include "MainFrame.hpp"

wxIMPLEMENT_APP(MyApp);
 
bool MyApp::OnInit()
{
    MainFrame *frame = new MainFrame();
    frame->Show(true);
    return true;
}
