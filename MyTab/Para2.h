#pragma once


// CPara2 �Ի���

class CPara2 : public CDialog
{
	DECLARE_DYNAMIC(CPara2)

public:
	CPara2(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CPara2();

// �Ի�������
	enum { IDD = IDD_MYTAB_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
