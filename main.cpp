#include<iostream>
#include<windows.h> 
using namespace std;

int main()
{
	char k;
																																																																	cout<<"作者:miangou，QQ:2944103698，定制本软件请联系作者，本软件仅能做百度肺炎实时数据的镜像网站,未经允许禁止转载本软件"<<endl; 
																																																														cout<<"本软件需要环境wget，不懂安装环境的可以把压缩包另外一个软件名为wget的软件放进C:\Windows\System32这个路径路径"<<endl;
																																																																cout<<"禁止使用本软件干违法的事，此软件不可商用，定制才可商用"<<endl<<endl<<endl<<endl;
																																																							cout<<"我已阅读完并确认遵守规定(确认输入Y,反对输入N)"<<endl;
	cin>>k;
	if (k=='y'||k=='Y')
	{
	cout<<"感谢理解"<<endl;	
	}
	else if(k=='n'||k=='N')
	{
		return 0;
	}
	else if(k!='y'||k!='Y'||k!='n'||k!='N')
	{
	return 0;	
	}
	cout<<"软件即将开始运行"<<endl<<"————————————" <<endl;
	system("pause");
	int a;
	cout<<"请输入间隔秒数"<<endl; 
	cin >>a;
	int i=a;
	for (;;)
	{
	for(int y=0;y<=a;y++)
	{
		Sleep(1000);
		if(y>=10)
		{
		cout<<"还有"<<i<<"秒开始更新网站"<<endl;
		
		} 
		i=i-1;

	}
	system("rd /s /q voice.baidu.com");//"voice.baidu.com"是文件夹名 
	system("wget -c -m -k -np -p -E -U Mozilla --no-check-certificate https://voice.baidu.com/act/newpneumonia/newpneumonia/?from=osari_wangmeng");//网址，前面记得带上http/https 
	i=a;
	system("cls");
	}
	
}
