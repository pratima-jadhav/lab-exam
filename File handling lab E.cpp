/*Q.No. 1 Banking Record System.
File handling has been effectively used for each feature of this project
Operations ? Add Record: ? Show/List Data: ? Search Record: ? Edit Record: ? Delete Record:*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
string Add records,list data, search records,Edit Records,Delete Records;


cout<<"\n Add records";
getline(cin ,Add records);
cout<<"\nEnter Your list data ";
getline(cin, list data);
cout<<"\nEnter search Records";
getline(cin, search Records);
cout<<"\nEdit Records";
getline(cin,Edit Records);
cout<<"\nDelete Records";
getline(cin,Delete Records);


ofstream out2("Bank_record_system.txt");
out2<<Add Records<<list data<<search Records<<Edit Records<<Delete Records;
out2.close();
    ifstream in("Bank_record_system.txt");
    getline(in, s2);
    cout<<s2;

string Add records,list data, search records,Edit Records,Delete Records;
ofstream out;
out.open("Bank_record_system.txt", ios::app);
cout << "Enter data (type 'quit' to exit): ";

    while (true) {
        getline(cin,);

        if {
            break;
        }
		out << line << endl;
    }

    out.close();
    cout << "Data written to file successfully.";
   
    string ;
ifstream in3("Bank_record_system.txt");

if(in.is_open()){

       
        while (getline(in3,)){
        }
        in3.close();
     } else {
        cout << " open file" << endl;
    }
return 0;
}
