 #include <iostream>
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
using namespace std;
int main();
int a,b,c,d,i=1,oo=5,asd,oo2,oo3,oo4,oo5,oo6;
int money;
int coin=0;
int daoju[4]={0,0,0,0};	
int peoplewar;
float liliang;
int liliang2;
float shanb;
float dik1;
float dik2;
int zht=0;
int direnwar;
int t,n;
int sj1;
int sj2;
int ex;
char ex2;
int lvl;
int maxhp;
int exp;
int aexp;
int tmp;
bool okkk=0;
int aaa[101]={200,300,400,500,800,1200,1500,2000,2800,4000,6500,9000,12000,15000,25000,40000,60000,80000,100000};
int bbb[101]={1000,1500,2000,2600,3200,4000,4900,5800,7000,8000,9000,10000,11200,12500,14000,16000,19000,25000,28000,30000};
void startb();
void slowp(string ssss,int times)
{
	for(int tmp999=0;tmp999<ssss.length();tmp999++)
		{
			cout<<ssss[tmp999];
			Sleep(times);
		}
}
class lv
{
	public:
	void lvup()
	{
		if(exp>=aaa[lvl-1])
		{
			slowp("�������ˣ���\n",100);
			cout<<"�ȼ���" <<lvl<<"   ";
			Sleep(2000);
			slowp("------>",60);
			Sleep(2000);
			lvl++;
			cout<<"   "<<lvl<<endl;
			exp-=aaa[lvl-2];
			cout<<"���HP��"<<endl;
			cout<<maxhp<<"   "; 
			Sleep(2000);
			slowp("------>",60);
			Sleep(2000);
			cout<<"   "<<bbb[lvl-1]<<endl;
			system("pause");
			system("cls");
		}
	}
	void lvsc(int a,int b,int c,int d)
	{
		cout<<"�ȼ���"<<a<<endl;
		cout<<"���HP��"<<b<<endl;
		cout<<"Exp/������Exp:"<<c<<"/"<<d<<endl; 
	} 
}lv;

class dushuju
{
	private:
	void srcoin()
	{
		FILE *fout=fopen("a1.dat","w");
		fprintf(fout,"%d %d %d",coin,lvl,exp);
		fclose(fout);
	}
	void srdaoju()
	{
		FILE *fout=fopen("a2.dat","w");
		fprintf(fout,"%d %d %d %d",daoju[0],daoju[1],daoju[2],daoju[3]);
		fclose(fout);
	}
	void drcoin()
	{
		FILE *fin=fopen("a1.dat","r");
		fscanf(fin,"%d%d%d",&coin,&lvl,&exp);
		fclose(fin);
	}
	void drdaoju()
	{
		FILE *fin=fopen("a2.dat","r");
		fscanf(fin,"%d%d%d%d",&daoju[0],&daoju[1],&daoju[2],&daoju[3],&lvl,&exp,&aexp,&maxhp);
		fclose(fin);
	}
	public:
	void srcoinmz()
	{
		srcoin();
	}
	void srdaojumz()
	{
		srdaoju();
	}
	void drcoinmz()
	{
		drcoin();
	}
	void drdaojumz()
	{
		drdaoju();
	}
};
class goumai
{
	public:
	int djgm()
	{
		printf("���Ϊ%d\n",coin);
		printf("��Ҫ����ʲôҩˮ��\n��1��������ҩˮ $400\n(5�غϣ�����x250%)\n");
		printf("��2��������ҩˮ $400\n(HP+359)\n��3��������ҩˮ $500\n(3�غϣ�60%�����˺�)\n");
		printf("��4����ֿ�ҩˮ $450\n(3�غϣ�����55%�˺�)\n�������˳�������档\n");
		printf("���ѡ���ǣ�");
		scanf("%d",&a);
		if(a<1||a>4)
		{
			tcgm();
			return 0;
		}
		qrgm(a);
	}
	void qrgm(int a1)
    {
   	int tmp9,tmp10,tmp11;
	if(a1==1)
	{
		cout<<"�����빺����"<<endl;
		cout<<"��Ҫx";
		cin>>tmp9;
		tmp10=tmp9*400;
		cout<<"ȷ����������ҩˮx"<<tmp9<<"���⽫������$"<<tmp10<<"��\n";
		cout<<"��1ȷ��������ȡ����\n";
		cin>>tmp11;
		if(tmp11!=1)
		{
			djgm();
		}
		if(coin<tmp10)
		{
			printf("���Ľ�Ҳ���\n");
			system("pause");
			system("cls");
			djgm();	
		}
		coin-=tmp10;
		cout<<"����ɹ���������$"<<tmp10<<"��Ŀǰ���Ϊ"<<coin<<"\n";
		daoju[0]+=tmp9;
		system("pause");
		system("cls");
		djgm();	
	}
	if(a1==2)
	{
		cout<<"�����빺����"<<endl;
		cout<<"��Ҫx";
		cin>>tmp9;
		tmp10=tmp9*400;
		cout<<"ȷ����������ҩˮx"<<tmp9<<"���⽫������$"<<tmp10<<"��\n";
		cout<<"��1ȷ��������ȡ����\n";
		cin>>tmp11;
		if(tmp11!=1)
		{
			djgm();
		}
		if(coin<tmp10)
		{
			printf("���Ľ�Ҳ���\n");
			system("pause");
			system("cls");
			djgm();	
		}
		coin-=tmp10;
		cout<<"����ɹ���������$"<<tmp10<<"��Ŀǰ���Ϊ"<<coin<<"\n";
		daoju[1]+=tmp9;
		system("pause");
		system("cls");
		djgm();	
	}
	if(a1==3)
	{
		cout<<"�����빺����"<<endl;
		cout<<"��Ҫx";
		cin>>tmp9;
		tmp10=tmp9*500;
		cout<<"ȷ����������ҩˮx"<<tmp9<<"���⽫������$"<<tmp10<<"��\n";
		cout<<"��1ȷ��������ȡ����\n";
		cin>>tmp11;
		if(tmp11!=1)
		{
			djgm();
		}
		if(coin<tmp10)
		{
			printf("���Ľ�Ҳ���\n");
			system("pause");
			system("cls");
			djgm();	
		}
		coin-=tmp10;
		cout<<"����ɹ���������$"<<tmp10<<"��Ŀǰ���Ϊ"<<coin<<"\n";
		daoju[2]+=tmp9;
		system("pause");
		system("cls");
		djgm();	
	}
	if(a1==4)
	{
		cout<<"�����빺����"<<endl;
		cout<<"��Ҫx";
		cin>>tmp9;
		tmp10=tmp9*450;
		cout<<"ȷ������ֿ�ҩˮx"<<tmp9<<"���⽫������$"<<tmp10<<"��\n";
		cout<<"��1ȷ��������ȡ����\n";
		cin>>tmp11;
		if(tmp11!=1)
		{
			djgm();
		}
		if(coin<tmp10)
		{
			printf("���Ľ�Ҳ���\n");
			system("pause");
			system("cls");
			djgm();	
		}
		coin-=tmp10;
		cout<<"����ɹ���������$"<<tmp10<<"��Ŀǰ���Ϊ"<<coin<<"\n";
		daoju[3]+=tmp9;
		system("pause");
		system("cls");
		djgm();	
	}
	else
	{
		djgm();
	}
    }
	void tcgm()
	{
		printf("��ӭ������\n");
		system("pause");
		system("cls");
		asd=0;
		startb();
	}
};
struct shuju
{
	int stsr1;
	int stsh2;
};
class yaoshui
{
	public:
	void daoju1()
	{
		if(liliang2>0)
		{
			cout<<"����ҩˮ��Ч!\n";
			srand(time(0));
			peoplewar=rand()%60+90;
			peoplewar=peoplewar*2.5;
			liliang2--;
			return;
		} 
		 peoplewar=rand()%60+90;
		return;
	}
	void daoju_2()
	{
		direnwar=0;
		srand(time(0));
		if(zht>0)
		{
			
			shanb=rand()%101+1;
			cout<<"����ҩˮ��Ч��\n";
			if(shanb<=60)
			{
				cout<<"��ɹ��������˵��˵Ĺ�������\n";
				zht--;
				return;
			}
			else 
			{
				cout<<"�������Ի�������\n";
				zht--;
				direnwar=rand()%61+60;
				return ;
			}
		}
		shanb=rand()%101+1;
		if(shanb<=5)
		{
			cout<<"��ɹ��������˵��˵Ĺ�������\n";
			return;
		}
		direnwar=rand()%61+60;
		
	}	
	void daoju3()
	{
		if(dik2>0)
		{
			dik2--;
			cout<<"�ֿ�ҩˮ��Ч����";
			t=direnwar;
			direnwar=direnwar*0.45;
			n=t-direnwar;
			cout<<"������"<<n<<"���˺�����\n" ;
			return; 
		}
	}
}; 
	void startb()
	{
		for(;;)
		{
		goumai as4;
		shuju mz2;
		printf("Powered by a1234 copyright <c> 2015-2017 ��Ȩ����\nV2.0.release.2\n");
		printf("                     _____________________\n");
		printf("                     |                   |\n");
		printf("                     |     ��Ϸ���˵�    |\n");
		printf("                     |                   |\n");
		printf("                     ��������������������  \n\n");
		printf("1����ʼս��     2�������̵�      3���鿴��Ϣ      4���˳�(�����Ų�ѯ)\n");
		printf("����ѡ��Ϊ��");	
		if(oo!=0)
		{
			system("cls");
			return;
		} 
		scanf("%d",&mz2.stsr1);
		if(mz2.stsr1==4)
		{
			system("cls");
			slowp("�����Ҫ�˳��𣿰�1�˳�����������\n",100);
			ex2=getch();
			if(ex2=='1')
			{
			system("cls");
			dushuju as2;
			as2.srcoinmz();
			as2.srdaojumz();
			exit(0);
			}
			system("cls");
			continue; 
		}
		if(mz2.stsr1==1)
		{
			for(;;)
			{
			system("cls");
			cout<<"��ѡ���Ѷȣ�\n";
			cout<<"1����(����HP800-1200)��������$1000\n";
			cout<<"2����ͨ(����HP1100-1600)��������$1750\n";
			cout<<"3������(����HP2000-3500)��������$3000\n";
			cout<<"4����ս(����HP5000-12000)��������$20000\n";
			slowp("ע�����ܲ��ܻ�ý���\nս�ܵĽ����ܵ�\n���齱��Ϊ����Ѫ����10%(���ܣ�ս��û�о��顣)\n",20);
			cout<<"�������Ѷȱ��\n";
			cin>>oo;
			if(oo==1)
			{
				oo2=800;
				oo3=1200;
				oo4=1000;
				oo6=200;
				main();
			}
			if(oo==2)
			{
				oo2=1100;
				oo3=1600;
				oo4=1750;
				oo6=350;
				main();
			}
			if(oo==3)
			{
				oo2=2000;
				oo3=3500;
				oo4=3000;
				oo6=500;
				main();
			}
			if(oo==4)
			{
				oo2=5000;
				oo3=12000;
				oo4=20000;
				oo6=2000;
				main();
			}
		}
		}
		if(mz2.stsr1==2)
		{
			system("cls");
			as4.djgm();
		}
		if(mz2.stsr1==3)
		{
			printf("��Ŀǰӵ�У�\n");
			printf("��ң�%d\n����ҩˮ��%d\n����ҩˮ��%d\n����ҩˮ��%d\n�ֿ�ҩˮ��%d\n",coin,daoju[0],daoju[1],daoju[2],daoju[3]);
			lv.lvsc(lvl,bbb[lvl-1],exp,aaa[lvl-1]);
			system("pause");
			system("cls");
			startb(); 
		}
		else
		{
			system("cls");
			continue;
		}
		}
		return;
	}

void maind()
{
	dushuju asdf;
 	goumai as3;
 	shuju mz2;
	oo=3;
 	asdf.drcoinmz();
 	asdf.drdaojumz();
 	system("title ����֮·V2.0.release.2");
	yaoshui mzz2;
 	for(;;)
 	{
 		if(i>3)
 		{
 			break;
		}
 		system("cls");
 		if(i==1) system("color fc");
 		if(i==2) system("color 8f");
 		if(i==3) system("color f4");
 		printf("��ӭ�汾��Ϸ\nPowered by a1234 copyright <c> 2015-2017 ��Ȩ����\n%d����Զ���ת",oo);
 		Sleep(999);
 		i++;
 		oo--;
	}
	system("cls");
startb();
	return;
}

int main()
{
	srand(time(0));
	shuju mzz;
	yaoshui mzz2;
	if(okkk==false)
	{
		okkk=true;
		maind();
	}
	system("cls");
	slowp("Game Start!!\n",20);
	slowp("��ĳ�ʼHPΪ\n",20);
	maxhp=bbb[lvl-1];
	cout<<maxhp<<endl;
	 sj1=maxhp;
	 for(;;)
	 {
	 sj2=rand()%(oo3+1);
	 if(sj2>=oo2)
	 {
	 	break;
	 }
	}
	tmp=sj2/10;
	money=oo4-(oo3- sj2)*2;
	slowp("���˵�HPΪ",20);cout<<sj2<<endl;
	slowp("ս����ʼ\n",20);
	for(;;)
	{
	printf("����1������,2��ʹ��ҩˮ,����������\n");
	scanf("%d",&c);
	 if(c!=1&&c!=2)
	 {
	 	d=rand()%10+1;
	if(d==3||d==5||d==8)
	 	{
	 		printf("����ʧ�ܣ�����ʹ�����У��㱻������ʬ......");
	 		printf("\n\n\n");
	 		printf("        ��֣�������ʬ\n"); 
	 		cout<<"��õ���$0!\n";
	 		cout<<"�밴��������أ�\n";
	 		oo=0;
			getch();getch();
			system("cls");
			startb();
		}
	 	if(d!=3&&d!=5&&d!=8)
	 	{
	 		printf("���ܳɹ�������");
	 		printf("\n\n\n");
	 		printf("        ��֣���Ϊ�ϲ�\n");
	 		cout<<"��õ���$0!\n";
			cout<<"�밴��������أ�\n";
			oo=0;
			getch();getch();
			system("cls");
			startb();
		 }
	 }
	 if(c==2)
	 {
	 	for(;;)
	 	{
		printf("��������Ҫʹ�õ�ҩˮ���: \n1������ҩˮ\n2������ҩˮ\n3������ҩˮ\n4���ֿ�ҩˮ\n5����������\n");
		scanf("%d",&c);
		if(c<1||c>5)
		{
			printf("�������\n");
			continue;
		}
		if(c==5)
		{
			c=1;
			break;
		}
		if(c==2)
		{
			if(daoju[1]<=0)
			{
				cout<<"���߲���\n";
				continue;
			}
			else
			{
				daoju[1]--;
				cout<<"ʹ�óɹ�!,����ҩˮʣ��"<<daoju[1]<<"��";
				 sj1+=359;
				cout<<"HP�ָ���"<< sj1<<"��\n";
				c=1;
				break;
			}
		}
		if(c==1)
		{
			if(daoju[0]<=0)
			{
				cout<<"���߲���\n";
				continue;
			}
			else
			{
				daoju[0]--;
				cout<<"ʹ�óɹ�!,����ҩˮʣ��"<<daoju[0]<<"��\n";
				liliang2=5;
				c=1;
				break;
			}
		}
		if(c==3)
		{
			if(daoju[2]<=0)
			{
				cout<<"���߲���\n";
				continue;
			}
			else
			{
				daoju[2]--; 
				cout<<"ʹ�óɹ�!,����ҩˮʣ��"<<daoju[0]<<"��\n";
				zht=3;
				c=1;
				break;
			}
		}
		if(c==4)
		{
			if(daoju[3]<=0)
			{
				cout<<"���߲���\n";
				continue;
			}
			else
			{
				daoju[3]--;
				cout<<"ʹ�óɹ�!,�ֿ�ҩˮʣ��"<<daoju[0]<<"��\n";
				dik2=3;
				c=1;
				break;
			}
		}
		}
	 }
	 if(c==1)
	 {
	 mzz2.daoju1();
	 printf("��Ե��������%d���˺���\n",peoplewar);
	 oo5++;
	  sj2-=peoplewar;
	 if( sj2<=0)
	 {
	 	printf("����ʣ��0HP����\n");
	 	printf("��ɱ���˵��ˣ���\n");
		printf("\n\n\n");
		printf("        ��֣����ȫʤ\n");
		if(oo5-5<0)
	 	{
	 		oo5=5;
	 	}	
	 	money-=(oo5-5)*30;
	 	if(money<oo6)
	 	{
	 		money=oo6;
	 	}
	 	cout<<"��õ���$"<<money<<",Exp:"<<tmp<<"!\n";
	 	coin+=money;
	 	exp+=tmp;
	 	aexp+=tmp;
	 	money=0;
		cout<<"�밴��������أ�\n";
		oo=0;
		getch();getch();
		system("cls");
		lv.lvup();
		startb();
		system("cls");
	 }
	 printf("����ʣ��%dHP!\n", sj2);
	 Sleep(1000);
	 mzz2.daoju_2();
	 mzz2.daoju3();
	 printf("���˶������%d���˺���\n",direnwar);
	  sj1-=direnwar;
	 if( sj1<=0)
	 {
	 	printf("��ʣ��0HP\n");
	 	printf("��Ҫ�����𣿸����Ѫ�������ص�800,�����������֣���\n����1����2000���������0ȡ����\n");
		scanf("%d",&c);
		if(c==1)
		{
			if(coin<2000)
			{
				printf("��Ľ�Ҳ���\n");
			}
			if(coin>=2000)
			{
				coin-=2000;
				printf("����ɹ���");
				system("pause");
				 sj1+=800;
				continue;
			}
		} 
	 	printf("����ɱ�����㣡��\n");
	 	printf("\n\n\n");
	 	printf("        ��֣�ս��ɳ��\n");
	 	if(oo5-5<0)
	 	{
	 		oo5=5;
	 	}	
	 	money-=(oo5-5)*30;
	 	money=money/2;
	 	if(money<oo6)
	 	{
	 		money=oo6;
	 	}
	 	money-=sj2/2;	
	 	cout<<"��õ���$"<<money<<"!\n";
	 	coin+=money;
	 	money=0;
		cout<<"�밴��������أ�\n";
		oo=0;
		getch();getch();
		system("cls");
		startb();
	  } 
	  printf("��ʣ��%dHP!\n", sj1);
	}
}
}
