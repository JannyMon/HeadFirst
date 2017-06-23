#include<stdlib.h>
#include<stdio.h>

class CFlyBehavior
{
	public:
			     CFlyBehavior( ) ;
		virtual ~CFlyBehavior( ) ;            //基类的析构函数需要定义为虚函数，如果不定义为虚函数，子类析构将只会调用子类的析构函数，而不会调用基类的析构函数，可能存在问题
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
	CFlyBehavior* m_lpFlyBehavior ;      //此处的两个飞行行为指针与叫声行为指针主要是为了给定默认的飞行与叫声
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