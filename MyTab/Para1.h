#pragma once


// CPara1 �Ի���

class CPara1 : public CDialog
{
	DECLARE_DYNAMIC(CPara1)

public:
	CPara1(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CPara1();

// �Ի�������
	enum { IDD = IDD_MYTAB_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
