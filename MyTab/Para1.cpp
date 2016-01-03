// Para1.cpp : 实现文件
//

#include "stdafx.h"
#include "MyTab.h"
#include "Para1.h"
#include "afxdialogex.h"


// CPara1 对话框

IMPLEMENT_DYNAMIC(CPara1, CDialog)

CPara1::CPara1(CWnd* pParent /*=NULL*/)
	: CDialog(CPara1::IDD, pParent)
{

}

CPara1::~CPara1()
{
}

void CPara1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPara1, CDialog)
END_MESSAGE_MAP()


// CPara1 消息处理程序
