#include<iostream>
#include<string.h>

using namespace std;

class A {
   public:
   	
    int  age;
    char name[50];
    char role[50];
    public:
    	void setter(){
    	
			cout<<"enter age: ";
			cin>>age;
			cout<<"enter name: ";
			cin>>name;
			cout<<"enter role: ";
			cin>>role;		
					}
};
class B : public A{
	
	public:
		int salary;
		char job[50];
		
		public:
			void setter(){
			
			cout<<"enter salary: ";
			cin>>salary;
			cout<<"enter job: ";
			cin>>job;		
			
			
			
	
}
};

class C : public B {
		
		public:
			
			char comp_name[50];
			char address[50];
			
		public:
			
		void setter1(){
	
	       
		    cout<<"comp name : ";
			cin>>comp_name;
			cout<<"address : ";
			cin>>address;		
			
	     	}
			
		 			
		void getter1(char n[], char r[], int s){
	
	      strcpy(name,n);	
          strcpy(role,r);	
          salary=s;
          
          cout<<name<<endl<<role<<endl<<salary<<endl;
		
	}
	
};

class D : public C {
		
		public:
			
        	 char email[50];
			 char contect[50];
			 int id;
			 char experience[50];
			 char name[50];
			 char address[50];
			 char email1[50];
			 char contect1[50];	
			
		    public:
			
		void setter2(){
	
	       
		    cout<<"comp email : ";
			cin>>email;
			cout<<"contect : ";
			cin>>contect;		
			
	     	}
			
		 	
			 	
		void getter2(int i, char e[], char c[], char a[], char p[], char v[]){
	
	      id=i;	     
		  strcpy(experience,e);	
          strcpy(comp_name,c);	
          strcpy(address,a);	
          strcpy(email,p);	
		  strcpy(contect,v);	
          
          cout<<id<<endl<<experience<<endl<<comp_name<<endl<<address<<endl<<email<<endl<<contect<<endl;
		
	}
	
};


int main() {
  
    A obj;
    B obj1;
    C obj2;
    D obj3;
    	  
    obj.setter();
    obj1.setter();

    obj2.setter1();	
	obj2.getter1("name : shresha","role : doctor",200000);
    
    obj3.setter2();
    obj3.getter2(2,"experience : 1 year","comp name : jio","address : crietion","email : abc2@gmail.com","contect : 123455555");
    
    return 0;
}

