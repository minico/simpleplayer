
// SimplePlayerDlg.h : header file
//

#pragma once

extern "C"
{
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
}
 
extern "C"
{
	extern int ch01_dump_video(const char* pFilePath);
	extern int ch02_play_video(const char* pFilePath);
	extern int ch03_play_audio(const char* pFilePath);
}

#include <SDL.h>
#include <SDL_thread.h>

#include <stdio.h>

// CSimplePlayerDlg dialog
class CSimplePlayerDlg : public CDialogEx
{
// Construction
public:
	CSimplePlayerDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SIMPLEPLAYER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonPlay();
};
