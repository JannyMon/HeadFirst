#include<stdlib.h>
#include<stdio.h>

class CFlyBehavior
{
	public:
			     CFlyBehavior( ) ;
		virtual ~CFlyBehavior( ) ;            //���������������Ҫ����Ϊ�麯�������������Ϊ�麯��������������ֻ����������������������������û�����������������ܴ�������
		virtual void Fly()= 0 ;
};


class CFlyWithWings:public CFlyBehavior
{
	public:
		CFlyWithWings() ;
		~CFlyWithWings() ;
	void Fly() ;

};


class CFlyNoWay:public CFlyBehavior
{
	public:
		CFlyNoWay() ;
		~CFlyNoWay() ;
		void Fly() ;

};


class CFlyWithRocket:public CFlyBehavior
{
	public:
		CFlyWithRocket() ;
		~CFlyWithRocket() ;
		void Fly() ;
};


class CQuackBehavior
{
	public:
				 CQuackBehavior( ) ;
		virtual ~CQuackBehavior( ) ;
		virtual void Quack()= 0 ;
};



class CQuack:public CQuackBehavior
{
	public:
		CQuack() ;
		~CQuack() ;
		void Quack() ;
};


class CMuteQuack:public CQuackBehavior
{
	public:
		CMuteQuack() ;
		~CMuteQuack() ;
		void Quack() ;
};


class CSqueak:public CQuackBehavior
{
public:
	CSqueak() ;
	~CSqueak() ;
	void Quack() ;
};


class CDuck
{
	public:
				 CDuck() ;
		virtual ~CDuck() ;
	
	private:
		CFlyBehavior* m_cFlyBehavior ;
		CQuackBehavior* m_cQuackBehavior ;
	
	public:
		virtual void Display() = 0 ;
		void PerformFly( );
		void PerformQuack() ;
		void Swim();
		void SetFlyBehavior(CFlyBehavior* cFlyBehavior) ;
		void SetQuackBehavior(CQuackBehavior* cQuackBehavior);

};


class CMallardDuck:public CDuck
{
public:
	CMallardDuck( ) ;
	~CMallardDuck( ) ;

public:
	void Display( ) ;

private:
	CFlyBehavior* m_lpFlyBehavior ;      //�˴�������������Ϊָ���������Ϊָ����Ҫ��Ϊ�˸���Ĭ�ϵķ��������
	CQuackBehavior* m_lpQuackBehavior ;

};


class CModelDuck:public CDuck
{
public:
	CModelDuck( ) ;
	~CModelDuck( ) ;

public:
	void Display( );

private:
	CFlyBehavior* m_lpFlyBehavior ;
	CQuackBehavior* m_lpQuackBehavior ;

};