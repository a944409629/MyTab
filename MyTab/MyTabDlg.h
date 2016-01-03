
// MyTabDlg.h : 头文件
//

#pragma once
#include "afxcmn.h"
#include "Para1.h"
#include "Para2.h"


// CMyTabDlg 对话框
class CMyTabDlg : public CDialogEx
{
// 构造
public:
	CMyTabDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MYTAB_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_tab;
	CPara1 m_para1;
	CPara2 m_para2;
	int m_CurSelTab;
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};
