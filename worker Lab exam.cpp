/*Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked,
Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. (Use
Default values for Pay_Rate Rs. 500 per hours)*/
#include<iostream>
using namespace std;
class worker 
{
		string name;
		int hrs,salary,num;
		float rate;
	
		void set()
		{
			cout<<"Enter no of worker";
			cin>>num;
			for(int i=0;i<num;i++)
			cout<<"\Enter name of worker";
			cin>>name;
			cout<<"\Enter no of hours worked";
			cin>>hrs;
			cout<<"\Enter pay rate";
			cin>>rate;
			cout<<"\Enter salary";
			cin>>salary;
		}
		void show()
			{
			
			float rate=500;
			slalary=sal*500;
			
		}
		
		void print()
		{
		
			cout<<"\n name of worker:"<<name<<"\nnumber of hours worked:"<<hour<<"\n salary pay rate:"<<rate
		}
		
			
};
int main()
{
	worker w;
	w.get();
	w.show();
	w.print();
	}
