// DlgTest.cpp : 实现文件
//

#include "stdafx.h"
#include "EscEnter.h"
#include "DlgTest.h"
#include "afxdialogex.h"


// DlgTest 对话框

IMPLEMENT_DYNAMIC(DlgTest, CDialogEx)

DlgTest::DlgTest(CWnd* pParent /*=NULL*/)
	: CDialogEx(DIALOG_TEST, pParent)
{

}

DlgTest::~DlgTest()
{
}

void DlgTest::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DlgTest, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_TEST, &DlgTest::OnBnClickedBtnTest)
END_MESSAGE_MAP()


// DlgTest 消息处理程序


void DlgTest::OnBnClickedBtnTest()
{
	AfxMessageBox(_T("Test"));
	return;
}


BOOL DlgTest::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 取消Esc与Enter按键
	if (pMsg->message==WM_KEYDOWN||pMsg->message==VK_ESCAPE) {
		return TRUE;
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}
