// Para2.cpp : 实现文件
//

#include "stdafx.h"
#include "MyTab.h"
#include "Para2.h"
#include "afxdialogex.h"


// CPara2 对话框

IMPLEMENT_DYNAMIC(CPara2, CDialog)

CPara2::CPara2(CWnd* pParent /*=NULL*/)
	: CDialog(CPara2::IDD, pParent)
{

}

CPara2::~CPara2()
{
}

void CPara2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPara2, CDialog)
END_MESSAGE_MAP()


// CPara2 消息处理程序
