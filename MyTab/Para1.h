#pragma once


// CPara1 对话框

class CPara1 : public CDialog
{
	DECLARE_DYNAMIC(CPara1)

public:
	CPara1(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CPara1();

// 对话框数据
	enum { IDD = IDD_MYTAB_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
