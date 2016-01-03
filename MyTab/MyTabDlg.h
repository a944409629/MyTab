
// MyTabDlg.h : ͷ�ļ�
//

#pragma once
#include "afxcmn.h"
#include "Para1.h"
#include "Para2.h"


// CMyTabDlg �Ի���
class CMyTabDlg : public CDialogEx
{
// ����
public:
	CMyTabDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MYTAB_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
