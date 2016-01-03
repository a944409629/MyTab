#pragma once


// CPara2 对话框

class CPara2 : public CDialog
{
	DECLARE_DYNAMIC(CPara2)

public:
	CPara2(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CPara2();

// 对话框数据
	enum { IDD = IDD_MYTAB_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
