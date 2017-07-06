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
			slowp("你升级了！！\n",100);
			cout<<"等级：" <<lvl<<"   ";
			Sleep(2000);
			slowp("------>",60);
			Sleep(2000);
			lvl++;
			cout<<"   "<<lvl<<endl;
			exp-=aaa[lvl-2];
			cout<<"最大HP："<<endl;
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
		cout<<"等级："<<a<<endl;
		cout<<"最大HP："<<b<<endl;
		cout<<"Exp/升级需Exp:"<<c<<"/"<<d<<endl; 
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
		printf("余额为%d\n",coin);
		printf("你要购买什么药水？\n输1购买力量药水 $400\n(5回合，攻击x250%)\n");
		printf("输2购买治疗药水 $400\n(HP+359)\n输3购买闪避药水 $500\n(3回合，60%不受伤害)\n");
		printf("输4购买抵抗药水 $450\n(3回合，减少55%伤害)\n输其它退出购买界面。\n");
		printf("你的选择是：");
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
		cout<<"请输入购买量"<<endl;
		cout<<"我要x";
		cin>>tmp9;
		tmp10=tmp9*400;
		cout<<"确定购买力量药水x"<<tmp9<<"吗？这将花费您$"<<tmp10<<"。\n";
		cout<<"输1确定，其他取消。\n";
		cin>>tmp11;
		if(tmp11!=1)
		{
			djgm();
		}
		if(coin<tmp10)
		{
			printf("您的金币不足\n");
			system("pause");
			system("cls");
			djgm();	
		}
		coin-=tmp10;
		cout<<"购买成功，您花费$"<<tmp10<<"，目前余额为"<<coin<<"\n";
		daoju[0]+=tmp9;
		system("pause");
		system("cls");
		djgm();	
	}
	if(a1==2)
	{
		cout<<"请输入购买量"<<endl;
		cout<<"我要x";
		cin>>tmp9;
		tmp10=tmp9*400;
		cout<<"确定购买治疗药水x"<<tmp9<<"吗？这将花费您$"<<tmp10<<"。\n";
		cout<<"输1确定，其他取消。\n";
		cin>>tmp11;
		if(tmp11!=1)
		{
			djgm();
		}
		if(coin<tmp10)
		{
			printf("您的金币不足\n");
			system("pause");
			system("cls");
			djgm();	
		}
		coin-=tmp10;
		cout<<"购买成功，您花费$"<<tmp10<<"，目前余额为"<<coin<<"\n";
		daoju[1]+=tmp9;
		system("pause");
		system("cls");
		djgm();	
	}
	if(a1==3)
	{
		cout<<"请输入购买量"<<endl;
		cout<<"我要x";
		cin>>tmp9;
		tmp10=tmp9*500;
		cout<<"确定购买闪避药水x"<<tmp9<<"吗？这将花费您$"<<tmp10<<"。\n";
		cout<<"输1确定，其他取消。\n";
		cin>>tmp11;
		if(tmp11!=1)
		{
			djgm();
		}
		if(coin<tmp10)
		{
			printf("您的金币不足\n");
			system("pause");
			system("cls");
			djgm();	
		}
		coin-=tmp10;
		cout<<"购买成功，您花费$"<<tmp10<<"，目前余额为"<<coin<<"\n";
		daoju[2]+=tmp9;
		system("pause");
		system("cls");
		djgm();	
	}
	if(a1==4)
	{
		cout<<"请输入购买量"<<endl;
		cout<<"我要x";
		cin>>tmp9;
		tmp10=tmp9*450;
		cout<<"确定购买抵抗药水x"<<tmp9<<"吗？这将花费您$"<<tmp10<<"。\n";
		cout<<"输1确定，其他取消。\n";
		cin>>tmp11;
		if(tmp11!=1)
		{
			djgm();
		}
		if(coin<tmp10)
		{
			printf("您的金币不足\n");
			system("pause");
			system("cls");
			djgm();	
		}
		coin-=tmp10;
		cout<<"购买成功，您花费$"<<tmp10<<"，目前余额为"<<coin<<"\n";
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
		printf("欢迎您再来\n");
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
			cout<<"力量药水生效!\n";
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
			cout<<"闪避药水生效！\n";
			if(shanb<=60)
			{
				cout<<"你成功地闪避了敌人的攻击！！\n";
				zht--;
				return;
			}
			else 
			{
				cout<<"但敌人仍击中了你\n";
				zht--;
				direnwar=rand()%61+60;
				return ;
			}
		}
		shanb=rand()%101+1;
		if(shanb<=5)
		{
			cout<<"你成功地闪避了敌人的攻击！！\n";
			return;
		}
		direnwar=rand()%61+60;
		
	}	
	void daoju3()
	{
		if(dik2>0)
		{
			dik2--;
			cout<<"抵抗药水生效！！";
			t=direnwar;
			direnwar=direnwar*0.45;
			n=t-direnwar;
			cout<<"抵消了"<<n<<"点伤害！！\n" ;
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
		printf("Powered by a1234 copyright <c> 2015-2017 版权所有\nV2.0.release.2\n");
		printf("                     _____________________\n");
		printf("                     |                   |\n");
		printf("                     |     游戏主菜单    |\n");
		printf("                     |                   |\n");
		printf("                     ￣￣￣￣￣￣￣￣￣￣  \n\n");
		printf("1、开始战斗     2、进入商店      3、查看信息      4、退出(输入编号查询)\n");
		printf("您的选择为：");	
		if(oo!=0)
		{
			system("cls");
			return;
		} 
		scanf("%d",&mz2.stsr1);
		if(mz2.stsr1==4)
		{
			system("cls");
			slowp("你真的要退出吗？按1退出，其他返回\n",100);
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
			cout<<"请选择难度：\n";
			cout<<"1、简单(敌人HP800-1200)奖励上限$1000\n";
			cout<<"2、普通(敌人HP1100-1600)奖励上限$1750\n";
			cout<<"3、困难(敌人HP2000-3500)奖励上限$3000\n";
			cout<<"4、挑战(敌人HP5000-12000)奖励上限$20000\n";
			slowp("注：逃跑不能获得奖励\n战败的奖励很低\n经验奖励为敌人血量的10%(逃跑，战败没有经验。)\n",20);
			cout<<"请输入难度编号\n";
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
			printf("您目前拥有：\n");
			printf("金币：%d\n力量药水：%d\n治疗药水：%d\n闪避药水：%d\n抵抗药水：%d\n",coin,daoju[0],daoju[1],daoju[2],daoju[3]);
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
 	system("title 勇者之路V2.0.release.2");
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
 		printf("欢迎玩本游戏\nPowered by a1234 copyright <c> 2015-2017 版权所有\n%d秒后自动跳转",oo);
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
	slowp("你的初始HP为\n",20);
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
	slowp("敌人的HP为",20);cout<<sj2<<endl;
	slowp("战斗开始\n",20);
	for(;;)
	{
	printf("输入1键攻击,2键使用药水,其他键逃跑\n");
	scanf("%d",&c);
	 if(c!=1&&c!=2)
	 {
	 	d=rand()%10+1;
	if(d==3||d==5||d==8)
	 	{
	 		printf("逃跑失败，敌人使出大招，你被敌人碎尸......");
	 		printf("\n\n\n");
	 		printf("        结局：惨遭碎尸\n"); 
	 		cout<<"你得到了$0!\n";
	 		cout<<"请按任意键返回！\n";
	 		oo=0;
			getch();getch();
			system("cls");
			startb();
		}
	 	if(d!=3&&d!=5&&d!=8)
	 	{
	 		printf("逃跑成功！！！");
	 		printf("\n\n\n");
	 		printf("        结局：走为上策\n");
	 		cout<<"你得到了$0!\n";
			cout<<"请按任意键返回！\n";
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
		printf("请输入你要使用的药水编号: \n1、力量药水\n2、治疗药水\n3、闪避药水\n4、抵抗药水\n5放弃并攻击\n");
		scanf("%d",&c);
		if(c<1||c>5)
		{
			printf("输入错误\n");
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
				cout<<"道具不足\n";
				continue;
			}
			else
			{
				daoju[1]--;
				cout<<"使用成功!,治疗药水剩余"<<daoju[1]<<"个";
				 sj1+=359;
				cout<<"HP恢复到"<< sj1<<"了\n";
				c=1;
				break;
			}
		}
		if(c==1)
		{
			if(daoju[0]<=0)
			{
				cout<<"道具不足\n";
				continue;
			}
			else
			{
				daoju[0]--;
				cout<<"使用成功!,力量药水剩余"<<daoju[0]<<"个\n";
				liliang2=5;
				c=1;
				break;
			}
		}
		if(c==3)
		{
			if(daoju[2]<=0)
			{
				cout<<"道具不足\n";
				continue;
			}
			else
			{
				daoju[2]--; 
				cout<<"使用成功!,闪避药水剩余"<<daoju[0]<<"个\n";
				zht=3;
				c=1;
				break;
			}
		}
		if(c==4)
		{
			if(daoju[3]<=0)
			{
				cout<<"道具不足\n";
				continue;
			}
			else
			{
				daoju[3]--;
				cout<<"使用成功!,抵抗药水剩余"<<daoju[0]<<"个\n";
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
	 printf("你对敌人造成了%d点伤害！\n",peoplewar);
	 oo5++;
	  sj2-=peoplewar;
	 if( sj2<=0)
	 {
	 	printf("敌人剩余0HP！！\n");
	 	printf("你杀死了敌人！！\n");
		printf("\n\n\n");
		printf("        结局：大获全胜\n");
		if(oo5-5<0)
	 	{
	 		oo5=5;
	 	}	
	 	money-=(oo5-5)*30;
	 	if(money<oo6)
	 	{
	 		money=oo6;
	 	}
	 	cout<<"你得到了$"<<money<<",Exp:"<<tmp<<"!\n";
	 	coin+=money;
	 	exp+=tmp;
	 	aexp+=tmp;
	 	money=0;
		cout<<"请按任意键返回！\n";
		oo=0;
		getch();getch();
		system("cls");
		lv.lvup();
		startb();
		system("cls");
	 }
	 printf("敌人剩余%dHP!\n", sj2);
	 Sleep(1000);
	 mzz2.daoju_2();
	 mzz2.daoju3();
	 printf("敌人对你造成%d点伤害！\n",direnwar);
	  sj1-=direnwar;
	 if( sj1<=0)
	 {
	 	printf("你剩余0HP\n");
	 	printf("想要复活吗？复活后血量立即回到800,继续攻击对手！！\n（输1即花2000立即复活，输0取消）\n");
		scanf("%d",&c);
		if(c==1)
		{
			if(coin<2000)
			{
				printf("你的金币不足\n");
			}
			if(coin>=2000)
			{
				coin-=2000;
				printf("复活成功，");
				system("pause");
				 sj1+=800;
				continue;
			}
		} 
	 	printf("敌人杀死了你！！\n");
	 	printf("\n\n\n");
	 	printf("        结局：战死沙场\n");
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
	 	cout<<"你得到了$"<<money<<"!\n";
	 	coin+=money;
	 	money=0;
		cout<<"请按任意键返回！\n";
		oo=0;
		getch();getch();
		system("cls");
		startb();
	  } 
	  printf("你剩余%dHP!\n", sj1);
	}
}
}
