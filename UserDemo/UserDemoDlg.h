
// UserDemoDlg.h : ͷ�ļ�
//
#include "..\ChartCtrlDll\ChartCtrl.h" //����������ͷ�ļ�
#pragma comment( lib,"ChartCtrlDll.lib")


#pragma once
#include "afxwin.h"


// CUserDemoDlg �Ի���
class CUserDemoDlg : public CDialogEx
{
// ����
public:
	CUserDemoDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_USERDEMO_DIALOG };

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
	//CChartCtrl m_ChartCtrl;
	//CWnd m_ChartCtrl;
	//CButton m_ChartCtrl;
	//CChartCtrl kkl;
	CChartCtrl m_chartCtrl;
};
