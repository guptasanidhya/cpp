#include<iostream>
using namespace std;
struct Person{
	char name[100];
	int age;
	double salary;
};
int main()
{ Person p1;
	cout<<"Person details"<<endl<<"Enter person name:"<<endl;
	cin.getline(p1.name,100);
	cout<<"Enter age"<<endl;
	cin>>p1.age;
	cout<<endl<<"Enter salary"<<endl;
	cin>>p1.salary;
	cout<<endl<<"person details"<<endl;
	cout<<"person name"<<p1.name<<endl;
	cout<<"person age"<<p1.age<<endl;
	cout<<"persons salary"<<p1.salary<<endl;
	return 0;
}
