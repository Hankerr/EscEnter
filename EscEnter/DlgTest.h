#pragma once


// DlgTest �Ի���

class DlgTest : public CDialogEx
{
	DECLARE_DYNAMIC(DlgTest)

public:
	DlgTest(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DlgTest();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = DIALOG_TEST };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnTest();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
