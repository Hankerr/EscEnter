
// EscEnter.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CEscEnterApp: 
// �йش����ʵ�֣������ EscEnter.cpp
//

class CEscEnterApp : public CWinApp
{
public:
	CEscEnterApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CEscEnterApp theApp;