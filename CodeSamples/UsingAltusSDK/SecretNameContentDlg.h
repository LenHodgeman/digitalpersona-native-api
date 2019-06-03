// SecretNameContentDlg.h
#pragma once

class CSecretNameContentDlg : public CDialogImpl<CSecretNameContentDlg> {
public:
	enum { IDD = IDD_WRITE_SECRET };

	BEGIN_MSG_MAP(CSecretNameContentDlg)
		COMMAND_ID_HANDLER(IDCANCEL, OnCancel)
		COMMAND_ID_HANDLER(IDOK, OnOK)
	END_MSG_MAP()


	LRESULT OnCancel(WORD, WORD, HWND hWnd, BOOL& bHandled) {
		EndDialog(IDCANCEL);
		return 0;
	}

	LRESULT OnOK(WORD, WORD, HWND hWnd, BOOL& bHandled) {
		GetDlgItemText(IDC_EDIT_SECRET_NAME, m_sSecretName);
		GetDlgItemText(IDC_EDIT_SECRET_DATA, m_sSecretContent);
		EndDialog(IDOK);
		return 0;
	}

	CString m_sSecretName;
	CString m_sSecretContent;
};
