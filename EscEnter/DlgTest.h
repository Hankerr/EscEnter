#pragma once


// DlgTest 对话框

class DlgTest : public CDialogEx
{
	DECLARE_DYNAMIC(DlgTest)

public:
	DlgTest(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DlgTest();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = DIALOG_TEST };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnTest();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
