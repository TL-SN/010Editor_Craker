
// 010Editor_Keygen_crakerDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "010Editor_Keygen_craker.h"
#include "010Editor_Keygen_crakerDlg.h"
#include "afxdialogex.h"
#include <stdio.h>
#include <malloc.h>
#include <iostream>
#include <Windows.h>

#define _DWORD unsigned __int32
#define _BYTE unsigned __int8
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMy010EditorKeygencrakerDlg 对话框



CMy010EditorKeygencrakerDlg::CMy010EditorKeygencrakerDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MY010EDITOR_KEYGEN_CRAKER_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMy010EditorKeygencrakerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMy010EditorKeygencrakerDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT1, &CMy010EditorKeygencrakerDlg::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &CMy010EditorKeygencrakerDlg::OnEnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON1, &CMy010EditorKeygencrakerDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &CMy010EditorKeygencrakerDlg::OnBnClickedButton3)
	ON_WM_DROPFILES()
END_MESSAGE_MAP()


// CMy010EditorKeygencrakerDlg 消息处理程序

BOOL CMy010EditorKeygencrakerDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMy010EditorKeygencrakerDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMy010EditorKeygencrakerDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMy010EditorKeygencrakerDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CMy010EditorKeygencrakerDlg::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码

	
	/*GetDlgItemText(IDC_EDIT1, tarPath);*/


}

void CMy010EditorKeygencrakerDlg::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
	//GetDlgItemText(IDC_EDIT2, Name);
}



unsigned int map_data[308] = {
	0x39CB44B8, 0x23754F67, 0x5F017211, 0x3EBB24DA, 0x351707C6, 0x63F9774B, 0x17827288, 0x0FE74821,
	0x5B5F670F, 0x48315AE8, 0x785B7769, 0x2B7A1547, 0x38D11292, 0x42A11B32, 0x35332244, 0x77437B60,
	0x1EAB3B10, 0x53810000, 0x1D0212AE, 0x6F0377A8, 0x43C03092, 0x2D3C0A8E, 0x62950CBF, 0x30F06FFA,
	0x34F710E0, 0x28F417FB, 0x350D2F95, 0x5A361D5A, 0x15CC060B, 0x0AFD13CC, 0x28603BCF, 0x3371066B,
	0x30CD14E4, 0x175D3A67, 0x6DD66A13, 0x2D3409F9, 0x581E7B82, 0x76526B99, 0x5C8D5188, 0x2C857971,
	0x15F51FC0, 0x68CC0D11, 0x49F55E5C, 0x275E4364, 0x2D1E0DBC, 0x4CEE7CE3, 0x32555840, 0x112E2E08,
	0x6978065A, 0x72921406, 0x314578E7, 0x175621B7, 0x40771DBF, 0x3FC238D6, 0x4A31128A, 0x2DAD036E,
	0x41A069D6, 0x25400192, 0x00DD4667, 0x6AFC1F4F, 0x571040CE, 0x62FE66DF, 0x41DB4B3E, 0x3582231F,
	0x55F6079A, 0x1CA70644, 0x1B1643D2, 0x3F7228C9, 0x5F141070, 0x3E1474AB, 0x444B256E, 0x537050D9,
	0x0F42094B, 0x2FD820E6, 0x778B2E5E, 0x71176D02, 0x7FEA7A69, 0x5BB54628, 0x19BA6C71, 0x39763A99,
	0x178D54CD, 0x01246E88, 0x3313537E, 0x2B8E2D17, 0x2A3D10BE, 0x59D10582, 0x37A163DB, 0x30D6489A,
	0x6A215C46, 0x0E1C7A76, 0x1FC760E7, 0x79B80C65, 0x27F459B4, 0x799A7326, 0x50BA1782, 0x2A116D5C,
	0x63866E1B, 0x3F920E3C, 0x55023490, 0x55B56089, 0x2C391FD1, 0x2F8035C2, 0x64FD2B7A, 0x4CE8759A,
	0x518504F0, 0x799501A8, 0x3F5B2CAD, 0x38E60160, 0x637641D8, 0x33352A42, 0x51A22C19, 0x085C5851,
	0x032917AB, 0x2B770AC7, 0x30AC77B3, 0x2BEC1907, 0x035202D0, 0x0FA933D3, 0x61255DF3, 0x22AD06BF,
	0x58B86971, 0x5FCA0DE5, 0x700D6456, 0x56A973DB, 0x5AB759FD, 0x330E0BE2, 0x5B3C0DDD, 0x495D3C60,
	0x53BD59A6, 0x4C5E6D91, 0x49D9318D, 0x103D5079, 0x61CE42E3, 0x7ED5121D, 0x14E160ED, 0x212D4EF2,
	0x270133F0, 0x62435A96, 0x1FA75E8B, 0x6F092FBE, 0x4A000D49, 0x57AE1C70, 0x004E2477, 0x561E7E72,
	0x468C0033, 0x5DCC2402, 0x78507AC6, 0x58AF24C7, 0x0DF62D34, 0x358A4708, 0x3CFB1E11, 0x2B71451C,
	0x77A75295, 0x56890721, 0x0FEF75F3, 0x120F24F1, 0x01990AE7, 0x339C4452, 0x27A15B8E, 0x0BA7276D,
	0x60DC1B7B, 0x4F4B7F82, 0x67DB7007, 0x4F4A57D9, 0x621252E8, 0x20532CFC, 0x6A390306, 0x18800423,
	0x19F3778A, 0x462316F0, 0x56AE0937, 0x43C2675C, 0x65CA45FD, 0x0D604FF2, 0x0BFD22CB, 0x3AFE643B,
	0x3BF67FA6, 0x44623579, 0x184031F8, 0x32174F97, 0x4C6A092A, 0x5FB50261, 0x01650174, 0x33634AF1,
	0x712D18F4, 0x6E997169, 0x5DAB7AFE, 0x7C2B2EE8, 0x6EDB75B4, 0x5F836FB6, 0x3C2A6DD6, 0x292D05C2,
	0x052244DB, 0x149A5F4F, 0x5D486540, 0x331D15EA, 0x4F456920, 0x483A699F, 0x3B450F05, 0x3B207C6C,
	0x749D70FE, 0x417461F6, 0x62B031F1, 0x2750577B, 0x29131533, 0x588C3808, 0x1AEF3456, 0x0F3C00EC,
	0x7DA74742, 0x4B797A6C, 0x5EBB3287, 0x786558B8, 0x00ED4FF2, 0x6269691E, 0x24A2255F, 0x62C11F7E,
	0x2F8A7DCD, 0x643B17FE, 0x778318B8, 0x253B60FE, 0x34BB63A3, 0x5B03214F, 0x5F1571F4, 0x1A316E9F,
	0x7ACF2704, 0x28896838, 0x18614677, 0x1BF569EB, 0x0BA85EC9, 0x6ACA6B46, 0x1E43422A, 0x514D5F0E,
	0x413E018C, 0x307626E9, 0x01ED1DFA, 0x49F46F5A, 0x461B642B, 0x7D7007F2, 0x13652657, 0x6B160BC5,
	0x65E04849, 0x1F526E1C, 0x5A0251B6, 0x2BD73F69, 0x2DBF7ACD, 0x51E63E80, 0x5CF2670F, 0x21CD0A03,
	0x5CFF0261, 0x33AE061E, 0x3BB6345F, 0x5D814A75, 0x257B5DF4, 0x0A5C2C5B, 0x16A45527, 0x16F23945,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000
};

int toupper(unsigned __int8 inp) {
	if (inp - 'Z' <= 0) {
		return inp;
	}
	else {
		return inp - ('a' - 'A');
	}
}

__int64  sub_7FF6B053D1A0(__int64 input_nameee, int a2, char a3, char a4)
{
	unsigned int v5; // ebp
	__int64 name_lenn; // rax
	__int64 v7; // r13
	__int64 v8; // rbx
	unsigned __int8 v9; // r14
	unsigned __int8 v10; // si
	unsigned __int8 v11; // r15
	unsigned __int8 v12; // di
	int v13; // eax
	_DWORD* v14; // r9
	unsigned int v15; // r11d
	_DWORD* v16; // r10
	int v17; // ebp
	__int64 v18; // rcx
	__int64 v19; // rax

	v5 = 0;
	name_lenn = -1;
	do
		++name_lenn;
	while (*(_BYTE*)(input_nameee + name_lenn));
	v7 = (int)name_lenn;
	if ((int)name_lenn > 0)
	{
		v8 = 0;
		v9 = 0;
		v10 = 15 * a4;
		v11 = 0;
		v12 = 17 * a3;
		do
		{
			v13 = toupper(*(unsigned __int8*)(v8 + input_nameee));// 转大写
			v14 = &map_data[v12];
			v15 = v5 + map_data[v13];
			v16 = &map_data[v10];
			if (a2)
			{
				v17 = map_data[(unsigned __int8)(v13 + 13)];
				v18 = (unsigned __int8)(v13 + 47);
				v19 = v9;
			}
			else
			{
				v17 = map_data[(unsigned __int8)(v13 + 63)];
				v18 = (unsigned __int8)(v13 + 23);
				v19 = v11;
			}
			v12 += 9;
			v10 += 13;
			v9 += 19;
			v11 += 7;
			++v8;
			v5 = *v16 + *v14 + map_data[v19] + map_data[v18] * (v15 ^ v17);
		} while (v8 < v7);
	}
	return v5;
}


char* get_keygen(char* name) {
	int a2 = 1;
	int a3 = 0xafff;
	int a4 = 0x98;
	char buff[10];
	int v6;
	char* str = (char*)malloc(0x100);
	unsigned int v25 = sub_7FF6B053D1A0((__int64)name, a2, a3, a4);
	for (int i = 0; i < 4; ++i) {
		buff[4 + i] = (v25 >> (i * 8)) & 0xff;
	}
	buff[3] = 0xac;
	int a1_48 = 0x98 * 0xb;
	int v15 = ((a1_48 ^ 0x3421) - 19760) ^ 0x7892;
	buff[2] = (v15 & 0xff) ^ buff[5];
	buff[1] = ((v15 >> 8) & 0xff) ^ buff[7];
	v6 = ((((0xafff * 0x11) ^ 0xffe53167) + 180597) ^ 0x22c078 ^ 0x5b8c27) & 0xffffff;
	buff[0] = (v6 & 0xff) ^ buff[6];
	buff[8] = ((v6 >> 8) & 0xff) ^ buff[4];
	buff[9] = ((v6 >> 16) & 0xff) ^ buff[5];
	sprintf(str, "%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x", buff[0] & 0xff, buff[1] & 0xff, buff[2] & 0xff, buff[3] & 0xff, buff[4] & 0xff, buff[5] & 0xff, buff[6] & 0xff, buff[7] & 0xff, buff[8] & 0xff, buff[9] & 0xff);
	return str;
}

void err_p(string buff) {
	//cout << buff << endl;
	MessageBoxA(0, buff.c_str(), 0, 0);
}
unsigned char buff[0x10000000] = { 0 };   //这玩意太大了，在函数内分配直接栈溢出 ... 

int crack(char *path) {
	//char path[100] = "F:\\My_Pj\\010 Editor\\010Editor.exe";

	
	FILE* fp = NULL;
	int len = 0;
	fp = fopen(path, "rb");
	if (!fp) {
		err_p("fopen error\n");
		return 0;
	}
	fseek(fp, 0, SEEK_END);
	len = ftell(fp);
	fseek(fp, 0, SEEK_SET);
	fread(buff, sizeof(unsigned char), len, fp);
	fclose(fp);

	if (buff[0] != 0x4d || buff[1] != 0x5a) {		//防止选择错文件
		err_p("错误的文件格式....你可能选择错了文件....");
		return 0;
	}
	buff[0x36e1d3] = 0xeb;   //  0x74 => 0xEB

	buff[0x20faa3] = 0xB8;
	buff[0x20faa4] = 0x86;
	buff[0x20faa5] = 0x00;
	buff[0x20faa6] = 0x01;
	buff[0x20faa7] = 0x00;      // E8 A9 62 DF FF =>  B8 86 00 01 00

	FILE* fp_w;
	fp_w = fopen(path, "wb");
	if (!fp_w) {
		err_p("fopen error\n");
		return 0;
	}
	fwrite(buff, len, 1, fp_w);
	fclose(fp_w);

	return 1;
}

CString Name;
CString tarPath;
void CMy010EditorKeygencrakerDlg::OnBnClickedButton1()
{
	
	GetDlgItemText(IDC_EDIT2, Name);
	GetDlgItemText(IDC_EDIT1, tarPath);

	CStringA s2(Name);
	const char* ch_name = s2;
	string Passwd = get_keygen((char *)ch_name);



	CStringA s_path(tarPath);
	const char* ch_path = s_path;
	


	string ttt = "crack Success, your password is ";
	// TODO: 在此添加控件通知处理程序代码
	if (crack((char*)ch_path)) {
		MessageBoxA(0,  (ttt + Passwd).c_str(), "crack Success", 0);
	}
	else {
		MessageBoxA(0, "crack error", "crack error", 0);
	}
	
	
}


void CMy010EditorKeygencrakerDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码

	CString strFile = _T("");



	CFileDialog    dlgFile(TRUE, NULL, NULL, OFN_HIDEREADONLY, _T("Describe Files (*.exe)|*.exe|All Files (*.*)|*.*||"), NULL);

	if (dlgFile.DoModal())
	{
		strFile = dlgFile.GetPathName();
	}
	SetDlgItemText(IDC_EDIT1, strFile);
}


void CMy010EditorKeygencrakerDlg::OnDropFiles(HDROP hDropInfo)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CDialogEx::OnDropFiles(hDropInfo);
	int count_droppedfile = DragQueryFile(hDropInfo, 0xFFFFFFFF, NULL, 0);
	for (int i = 0; i < count_droppedfile; ++i)
	{
		wchar_t filepath[MAX_PATH] = { 0 };
		if (DragQueryFile(hDropInfo, i, filepath, MAX_PATH) > 0)
		{
			SetDlgItemText(IDC_EDIT1,filepath);
		}
	}
}
