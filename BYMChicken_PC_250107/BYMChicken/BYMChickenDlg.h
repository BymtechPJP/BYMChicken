
#pragma once

#include "pch.h"
#include "framework.h"
#include "afxdialogex.h"
#include "BYMChicken.h"

class CBYMChickenDlg : public CDialogEx
{
// �����Դϴ�.
public:
	CBYMChickenDlg(CWnd* pParent = nullptr);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PHOTOGRAPHICTEST_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


	// �����Դϴ�.

protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

};