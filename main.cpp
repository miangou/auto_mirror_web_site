#include<iostream>
#include<windows.h> 
using namespace std;

int main()
{
	char k;
																																																																	cout<<"����:miangou��QQ:2944103698�����Ʊ��������ϵ���ߣ�������������ٶȷ���ʵʱ���ݵľ�����վ,δ�������ֹת�ر����"<<endl; 
																																																														cout<<"�������Ҫ����wget��������װ�����Ŀ��԰�ѹ��������һ�������Ϊwget������Ž�C:\Windows\System32���·��·��"<<endl;
																																																																cout<<"��ֹʹ�ñ������Υ�����£�������������ã����Ʋſ�����"<<endl<<endl<<endl<<endl;
																																																							cout<<"�����Ķ��겢ȷ�����ع涨(ȷ������Y,��������N)"<<endl;
	cin>>k;
	if (k=='y'||k=='Y')
	{
	cout<<"��л���"<<endl;	
	}
	else if(k=='n'||k=='N')
	{
		return 0;
	}
	else if(k!='y'||k!='Y'||k!='n'||k!='N')
	{
	return 0;	
	}
	cout<<"���������ʼ����"<<endl<<"������������������������" <<endl;
	system("pause");
	int a;
	cout<<"������������"<<endl; 
	cin >>a;
	int i=a;
	for (;;)
	{
	for(int y=0;y<=a;y++)
	{
		Sleep(1000);
		if(y>=10)
		{
		cout<<"����"<<i<<"�뿪ʼ������վ"<<endl;
		
		} 
		i=i-1;

	}
	system("rd /s /q voice.baidu.com");//"voice.baidu.com"���ļ����� 
	system("wget -c -m -k -np -p -E -U Mozilla --no-check-certificate https://voice.baidu.com/act/newpneumonia/newpneumonia/?from=osari_wangmeng");//��ַ��ǰ��ǵô���http/https 
	i=a;
	system("cls");
	}
	
}
