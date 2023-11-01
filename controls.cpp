#include "main.h"
#include <wx/msgdlg.h>


void MainFrame::OnListBox1Select(wxCommandEvent& event) {
	int i = ListBox1->GetSelection();
	wxString s = ListBox1->GetString(i);
	StaticText1->SetLabel(s);
}


void MainFrame::OnChoice1Select(wxCommandEvent& event) {
	int i = Choice1->GetSelection();
	wxString s = Choice1->GetString(i);
	StaticText1->SetLabel(s);
}

void MainFrame::OnRadioBox1Select(wxCommandEvent& event) {
	int k = RadioBox1->GetSelection();
	wxString s = RadioBox1->GetString(k);
	StaticText1->SetLabel(s);
}

void MainFrame::OnCheckBox1Click(wxCommandEvent& event) {
	bool b = CheckBox1->GetValue();
	if (b == true) {
		StaticText1->SetLabel("Да!");
	}
	else {
		StaticText1->SetLabel("Нет!");
	}
}

void MainFrame::OnQuit(wxCommandEvent& event) {
	Close();
}

